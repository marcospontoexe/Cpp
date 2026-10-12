#ifndef FORM_PRINCIPAL_H
#define FORM_PRINCIPAL_H

#include <QDialog>

namespace Ui {
class form_principal;
}

//janela principal da agenda: cadastro de contatos do usuário que fez o login
class form_principal : public QDialog
{
    Q_OBJECT

public:
    explicit form_principal(const QString &nome, const QString &login, QWidget *parent = nullptr);
    ~form_principal();

private slots:
    void on_pushButton_novo_clicked();

    void on_pushButton_salvar_clicked();

    void on_pushButton_excluir_clicked();

    void on_lineEdit_busca_textChanged(const QString &texto);

    void on_tableWidget_itemSelectionChanged();

private:
    Ui::form_principal *ui;
    QString login;                  //usuário logado: todas as consultas filtram por ele
    int idSelecionado = -1;         //id do contato selecionado na tabela (-1 = nenhum, ou seja, um contato novo)

    void carregarContatos();        //preenche a tabela de acordo com o texto da busca
    void limparCampos();
    void atualizarBotoes();         //ajusta o texto do botão salvar e habilita o botão excluir
};

#endif // FORM_PRINCIPAL_H
