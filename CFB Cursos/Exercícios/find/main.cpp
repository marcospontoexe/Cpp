#include <iostream>
#include <algorithm>            //para usar 'find'
#include <vector> 
#include <list>
#include <map>
#include <string>

// o 'find' serve para encontrar elemnetos dentro de uma coleção (container)
//'map' e 'string' ja possuem o metodo find
using namespace std;

int main(void)
{
    int vetor[]={0,1,2,3,4,5,6,7,8,9};
    int *p;             //ponteiro para armazenar o resutado do find
    size_t tamanho = sizeof vetor/4;        //size_t armazena especificamento tamanho de elementos
    p=find(vetor, vetor+tamanho, 6);
    if(p != vetor+tamanho)
    {
        cout << "valor encontrado! " << *p << "\n";
    }
    else
    {
        cout << "valor nao encontrado!\n";
    }


    vector <int> num={0,1,2,3,4,5,6,7,8,9};
    auto it=find(num.begin(), num.end(), 5);      //'it' auto declarado como iterator, pois esta recebendo o retorno do find, que é um iterator
    if(it != num.end())
    {
        cout << "valor encontrado! " << *it << "\n";
    }
    else
    {
        cout << "valor nao encontrado!\n";
    }  

    list <int> n={0,1,2,3,4,5,6,7,8,9};
    auto itt=find(n.begin(), n.end(), 3);      //'it' auto declarado como iterator, pois esta recebendo o retorno do find, que é um iterator
    if(itt != n.end())
    {
        cout << "valor encontrado! " << *itt << "\n";
    }
    else
    {
        cout << "valor nao encontrado!\n";
    } 

    map <char, int> mapa;
    mapa['a'] = 0;
    mapa['b'] = 1;
    mapa['c'] = 2;
    mapa['d'] = 3;
    mapa['e'] = 4;
    auto it_mapa=mapa.find('c');   //'it' auto declarado como iterator, pois esta recebendo o retorno do find, que é um iterator
    if(it_mapa != mapa.end())
    {
        cout << "valor encontrado! " << it_mapa->second << "\n";
    }
    else
    {
        cout << "valor nao encontrado!\n";
    }     

    string nome = "marcos daniel santana";
    size_t tam = nome.find("daniel");        //size_t armazena especificamento tamanho de elementos
    cout << "a string contem " << nome.size() << " elementos!\n" ;   
    if(tam != string::npos)               //'string::npos' retorna o valor maximo de size_t
    {
        cout << "palavra encontrada na posicao: " << tam << "\n";
    }
    else
    {
        cout << "valor nao encontrado!\n";
    }

    return 0;
}
