#include <iostream>
#include <vector>

using namespace std;

class dados                        //declaração de uma  classe 
{
public:
    //declaração de atributos
    vector <string> nome;
    vector <string> genero;                      
    vector <int> idade;
    vector <float> peso;

    //declaração de métodos
    void cadastrar(string nome, string genero, int idade);
    


    //dados(/* args */);            
    //~dados();
};


void dados::cadastrar(string n, string gener, int idd)              //construção da classe
{
    //this->nome.back(n);         //adiciona ao final do vector
    //this->genero.back(gener);         //adiciona ao final do vector
    //this->idade.back(idd);         //adiciona ao final do vector  
}
/*
dados::~cadastrar()
{
}
*/

int main()
{   
    //declaração de objetos
    //dados *cliente = new dados();               
    //dados *filme = new dados();

    //cliente->cadastrar();

    return 0;
}