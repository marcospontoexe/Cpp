#include <iostream>

using namespace std;

class veiculo       
{
private:                    //so pode ser acessado de dentro da própria classe
    string nome, cor;


public:                     //pode ser acessado de fora da classe
    int rodas, velmax;

    
protected:                       //so pode ser acessado de dentro da própria classe, e tambem em classes filhas
    int portas;

};

class moto:public veiculo              //classe filha de veiculo
{
public:
    moto()             //construtor
    {
        //nome = "moto";        //não é possível acessar o atributo, poies é 'private'
        //cor = "preto";        //não é possível acessar o atributo, poies é 'private'
        rodas = 2;
        portas = 0;
        velmax = 130;        

        //cout << "Nome: " << nome <<"\n";          //não é possível acessar o atributo, poies é 'private'
        //cout << "Cor: " << cor <<"\n";            //não é possível acessar o atributo, poies é 'private'
        cout << "numero de rodas: " << rodas <<"\n";
        cout << "numero de portas: " << portas <<"\n";
        cout << "velocidade maxima: " << velmax <<"\n\n";        
    }
};


int main()
{
    moto m1;
 
    return 0;
}