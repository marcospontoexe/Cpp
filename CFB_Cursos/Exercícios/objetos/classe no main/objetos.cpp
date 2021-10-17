#include <iostream>
#include <vector>

using namespace std;

class dados                        //declaração de uma  classe 
{
public:
    //declaração de atributos
    string nome;
    string genero;                      
    int idade;
    float peso;

    //declaração de métodos
    void cadastrar(string n, string gener, int idd, float p);
    


    //dados(/* args */);            
    //~dados();
};

void dados::cadastrar(string n, string gener, int idd, float p)              //construção da classe
{
    this->nome = n;         //adiciona ao final do vector
    this->genero = gener;         //adiciona ao final do vector
    this->idade = idd;         //adiciona ao final do vector  
    this->peso = p;         //adiciona ao final do vector  
}

/*
dados::~cadastrar()
{
}
*/

int main()
{  /*
    vector <string> nome;
    vector <string> genero;                      
    vector <int> idade;
    vector <float> peso;
    */

    string nome="", genero="";                    
    int idade=0;
    float peso=0;

    //declaração de objetos
    dados *cliente = new dados();               
    //dados *filme = new dados();

    cout << "Nome: ";     cin >> nome;
    cout << "Genero: ";     cin >> genero;
    cout << "Idade: ";     cin >> idade;
    cout << "Peso: ";     cin >> peso;

    cliente->cadastrar(nome, genero, idade, peso);

    cout << "\nNome: " << cliente->nome;
    cout << "\nGenero: " << cliente->genero;
    cout << "\nIdade: " << cliente->idade;
    cout << "\nPeso: " << cliente->peso <<"\n";

    return 0;
}