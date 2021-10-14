#include <iostream>
#include <vector>       //para usar iterator

using namespace std;

int main()
{
    vector <string> itens = {"monitor", "mouse", "teclado", "impressora", "hd"};        //declaração um vector do tipo string
    vector <string>::iterator it, it2;           //declaração de um iterator do tipo string

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
    cout << "*next(it, 1); : " << *next(it, 1) << "\n";         //retorna o endereço posterior do iterator  


    //prev()
    cout << "prev(it, 1); : " << *prev(it, 1) << "\n";    //retorna o endereço anterior do iterator  
    cout << "cout << *it : " << *it << "\n";                //imprime o índice do vector, em que o iterator se encontra

    it = itens.end()-1;                                       //inicializa o iterator na ultima posição do vector
    cout << "prev(it, 1); : " << *prev(it, 1) << "\n";
    cout << "cout << *it : " << *it << "\n";                //imprime o índice do vector, em que o iterator se encontra

    it2 = itens.begin();
    cout << "distancia entre 'monitor' e 'hd': " << distance(it2, it)-1 << "\n";

    cout << "vector: "<<"\n";
    //imprimir os elementos do vector
    for (it = itens.begin(); it != itens.end(); it++)
    {
        cout << *it << "-";
    }
    cout << "\n";

    return 0; 
}