#include <iostream>
#include <vector>       //para usar iterator

using namespace std;

int main()
{
    vector <string> itens = {"monitor", "mouse", "teclado", "impressora", "hd"};        //declaração um vector do tipo string
    vector <string>::iterator it;           //declaração de um iterator do tipo string

    cout << "vector: "<<"\n";
    //imprimir os elementos do vector
    for (int i = 0; i < itens.size(); i++)
    {
        cout << itens[i] << "-";
    }
    cout << "\n";

    it = itens.end()-1;                  //inicializa o iterator na ultima posição do vector. 'end()' retorna a quantidade de posições no vector.
    cout << "it = itens.end()-1; : " << *it << "\n";                //imprime o primeiro elemento do vector

    it = itens.begin();                     //inicializa o iterator na primeira posição do vector
    cout << "it = itens.begin(); : " << *it << "\n";                //imprime o primeiro elemento do vector
    cout << "itens[0] : " << itens[0] << "\n";           //imprime o primeiro elemento do vector

    //advance()
    advance(it, 1);                         //o iterator avança uma casa a partir da ultima posição
    cout << "advance(it, 1); : " <<  *it << "\n";                //imprime o índice do vector, em que o iterator se encontra

    //next()
    cout << "*next(it, 1); : " << *next(it, 1) << "\n";              //imprime o valor contino no ponteiro do iterator uma casa a frente, porem não altera o valor do iterator


    //prev()
    cout << "prev(it, 1); : " << *prev(it, 1) << "\n";              //imprime o valor contino no ponteiro do iterator uma casa atrás, porém não altera o valor do iterator
    cout << "cout << *it : " << *it << "\n";                //imprime o índice do vector, em que o iterator se encontra

    it = itens.end()-1;                                       //inicializa o iterator na ultima posição do vector
    cout << "prev(it, 1); : " << *prev(it, 1) << "\n";              //imprime o valor contino no ponteiro do iterator uma casa atrás, porém não altera o valor do iterator
    cout << "cout << *it : " << *it << "\n";                //imprime o índice do vector, em que o iterator se encontra

    cout << "vector: "<<"\n";
    //imprimir os elementos do vector
    for (it = itens.begin(); it != itens.end(); it++)
    {
        cout << *it << "-";
    }
    cout << "\n";

    return 0; 
}