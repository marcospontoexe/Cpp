#include <iostream>
#include "dados.h"


using namespace std;


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
    dados *cliente = new dados(nome, genero, idade, peso);     //como o construtor tem dados de entrada, é preciso passar os dados no momento de criação de um objeto          
  

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