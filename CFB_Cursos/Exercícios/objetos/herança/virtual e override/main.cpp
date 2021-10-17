#include <iostream>

using namespace std;

class veiculo       //classe mãe
{
private:
    string nome, cor;

public:
    int rodas, velmax;
    string getnome()
    {
        return nome;
    }
    string getcor()
    {
        return cor;
    }
    void setnome(string n)
    {
        nome = n;
    }
    void setcor(string c)
    {
        cor = c;
    }
    virtual void imp()              //o método 'imp' pode ser sobrescrito por qualquer classe herdeira da classe veiculo 
    {
        cout << "Nome: " << nome <<"\n";
        cout << "Cor: " << cor <<"\n";
        cout << "numero de rodas: " << rodas <<"\n";
        cout << "velocidade maxima: " << velmax <<"\n\n";
    }

};

class moto:public veiculo              //classe filha de veiculo
{
public:
    moto()             //construtor
    {
        setnome("moto");
        setcor("preto");
        velmax = 120;
        rodas = 2;
    }
};

class carro:public veiculo              //classe filha de veiculo
{
public:
    int portas;
    carro(int port):portas(port)             //construtor
    {
        setnome("carro");
        setcor("branco");
        velmax = 220;
        rodas = 4;
    }
    void imp() override              //o método 'imp' da classe filha está sobrescrevendo o metodo 'imp' da classe mãe (veículo) 
    {
        cout << "Nome: " << getnome() <<"\n";          //getnome deve ser usado na classe filha, pois na classe mãe o atributo 'nome' é private
        cout << "Cor: " << getcor() <<"\n";             //getcor deve ser usado na classe filha, pois na classe mãe o atributo 'cor' é private
        cout << "numero de rodas: " << rodas <<"\n";
        cout << "velocidade maxima: " << velmax <<"\n";
        cout << "quantidade de portas: " << portas <<"\n";
    }
};

int main()
{
    moto m1;
    m1.imp();

    carro c1{4};
    c1.imp();

 
    return 0;
}