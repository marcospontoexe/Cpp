#include "senha.h"

#include <QByteArray>
#include <QCryptographicHash>
#include <QPasswordDigestor>        //PBKDF2 do Qt (módulo 'network', adicionado no arquivo .pro)
#include <QRandomGenerator>
#include <QStringList>

static const int ITERACOES = 100000;        //quanto maior, mais lento fica um ataque de força bruta
static const int TAMANHO_SALT = 16;         //bytes
static const int TAMANHO_HASH = 32;         //bytes (tamanho da saída do SHA-256)

static QByteArray derivar(const QString &senha, const QByteArray &salt, int iteracoes)
{
    return QPasswordDigestor::deriveKeyPbkdf2(QCryptographicHash::Sha256, senha.toUtf8(), salt, iteracoes, TAMANHO_HASH);
}

//compara todos os bytes mesmo depois de achar uma diferença, para o tempo de resposta não revelar quantos bytes estão certos
static bool iguais(const QByteArray &a, const QByteArray &b)
{
    if(a.size() != b.size())
    {
        return false;
    }
    unsigned char diferenca = 0;
    for(int i = 0; i < a.size(); i++)
    {
        diferenca |= static_cast<unsigned char>(a[i] ^ b[i]);
    }
    return diferenca == 0;
}

QString Senha::gerarHash(const QString &senha)
{
    QByteArray salt(TAMANHO_SALT, Qt::Uninitialized);
    QRandomGenerator::system()->fillRange(reinterpret_cast<quint32 *>(salt.data()), TAMANHO_SALT / 4);      //salt aleatório, diferente para cada usuário

    QByteArray hash = derivar(senha, salt, ITERACOES);
    return QString("pbkdf2_sha256$%1$%2$%3")
        .arg(ITERACOES)
        .arg(QString::fromLatin1(salt.toBase64()), QString::fromLatin1(hash.toBase64()));
}

bool Senha::verificar(const QString &senha, const QString &armazenado)
{
    QStringList partes = armazenado.split('$');         //separa algoritmo, iterações, salt e hash
    if(partes.size() != 4 || partes[0] != "pbkdf2_sha256")
    {
        return false;           //formato desconhecido: nunca aceita
    }

    bool ok = false;
    int iteracoes = partes[1].toInt(&ok);
    if(!ok || iteracoes <= 0)
    {
        return false;
    }

    QByteArray salt = QByteArray::fromBase64(partes[2].toLatin1());
    QByteArray esperado = QByteArray::fromBase64(partes[3].toLatin1());
    return iguais(derivar(senha, salt, iteracoes), esperado);
}
