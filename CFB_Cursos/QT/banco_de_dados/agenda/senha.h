#ifndef SENHA_H
#define SENHA_H

#include <QString>

//funções para nunca guardar a senha em texto puro no banco de dados.
//a senha é transformada num hash PBKDF2-HMAC-SHA256 com salt aleatório, no formato:
//pbkdf2_sha256$<iterações>$<salt em base64>$<hash em base64>
namespace Senha
{
    QString gerarHash(const QString &senha);                              //gera o texto a ser salvo na coluna 'Senha'
    bool verificar(const QString &senha, const QString &armazenado);      //retorna true se a senha digitada corresponde ao hash salvo
}

#endif // SENHA_H
