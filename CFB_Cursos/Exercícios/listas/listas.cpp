#include <iostream>
#include <list>            //biblioteca para usar listas

using namespace std;

int main()
{
    int tamanho;
    list <int> cpf(11, 1); //declaraçõa de uma variável int do tipo lista, que contém 11 índices, todos com o valor zero
    list <int> rg(9, 3);
    list <int> cresc;
    list <int>::iterator itt;       //declaração de um iterator, para poder manipular os índices do meio da lista
    itt = cpf.begin();          //inicia o iterator

    //cout << "CPF: ";
    for (int i = 1; i <= 12; i++)
    {        
        advance(itt, i-1);        //avança a quantidade de indices desejados (i-1)
        cpf.insert(itt, i);          //insere o valor desejado (i) na posição do iterator
        //cout << cpf(i);
    }
    //cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        cresc.push_front(i);            //adiciona no início da lista 'cresc'
        /*
        .
        .
        .
        3
        2
        1
        0
        */
        //cresc.push_back(i);            //adiciona no final da lista 'cresc'
        /*
        0
        1
        2
        3
        .
        .
        .      
        */
    }

    tamanho = cresc.size();             //recebe quantos índices tem a lista.
    cout << "A lista 'cresc' contem " << tamanho << " indices!" << "\n";
    cout << "cresc: " << "\n";
    for (int i = 0; i < tamanho; i++)
    {
        cout << cresc.front() << "\n";        //mostra o primeiro indice da lista
        cresc.pop_front();                    //remove o primeiro indice da lista
        cout << cresc.back() << "\n";        //mostra o ultimo indice da lista
        //cresc.pop_back();                    //remove o ultimo indice da lista
    }
    cout <<"\n";
    //cpf.sort();                     //reordena os índices de forma aleatória
    //cpf.reverse();                  //reordena os índices de forma reversa
      
    advance(itt, 3);              //avança 3 indices 
    cpf.erase(--itt);             //remove o índice da lista, na posição do iterator
    //cout << cpf(i);
    
    cpf.merge(rg);                  //mescla a lista 'rg' junto à lista 'cpf'

    for (int i = 0; i < cpf.size(); i++)
    {
        cout << cpf.front() << "\n";        //mostra o primeiro indice da lista
        cpf.pop_front();                    //remove o primeiro indice da lista
    }
    cout << "\n";

    cpf.clear();                        //remove todos os elementos da lista de uma só vez.
    cout << "Tamanho da lista cpf: " << cpf.size() << "\n";
    return 0;
}