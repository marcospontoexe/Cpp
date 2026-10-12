#include "form_pesquisa.h"
#include "ui_form_pesquisa.h"
#include <QtSql>
#include <QHeaderView>

form_pesquisa::form_pesquisa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_pesquisa)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(2);                                         //a senha nunca é mostrada, apenas nome e login
    ui->tableWidget->setHorizontalHeaderLabels({"Nome", "Login"});
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);    //as colunas ocupam toda a largura da tabela
    ui->tableWidget->verticalHeader()->setVisible(false);

    carregarUsuarios("");           //ao abrir, mostra todos os usuários
}

form_pesquisa::~form_pesquisa()
{
    delete ui;
}


void form_pesquisa::on_pushButton_buscar_clicked()          //botão buscar
{
    carregarUsuarios(ui->lineEdit_busca->text().trimmed());
}


void form_pesquisa::carregarUsuarios(const QString &filtro)
{
    QSqlQuery pesq;
    pesq.prepare("select Nome, Login from logs where Nome like :nome or Login like :login order by Nome");     //'like' com '%' procura o texto em qualquer posição
    pesq.bindValue(":nome", "%" + filtro + "%");            //o filtro entra como parâmetro, nunca concatenado no SQL
    pesq.bindValue(":login", "%" + filtro + "%");

    ui->tableWidget->setRowCount(0);            //limpa a tabela antes de preencher
    if(!pesq.exec())
    {
        ui->label_total->setText("Erro ao pesquisar usuários!");
        return;
    }

    int linha = 0;
    while(pesq.next())          //percorre cada registro retornado pela consulta
    {
        ui->tableWidget->insertRow(linha);
        ui->tableWidget->setItem(linha, 0, new QTableWidgetItem(pesq.value(0).toString()));        //coluna Nome
        ui->tableWidget->setItem(linha, 1, new QTableWidgetItem(pesq.value(1).toString()));        //coluna Login
        linha++;
    }
    ui->label_total->setText(QString("%1 usuário(s) encontrado(s)").arg(linha));
}
