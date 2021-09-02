#include <iostream>
#include <vector>            //struct vector

using namespace std;

int main()
{
    vector<int> num;                //declaração de vector do tipo int
    vector<int> aux(10, 0);                //declaração de vector do tipo int, com 10 posições preenchidas com zero

    for (int i =0; i < 10; i++)
    {
        num.push_back(i);             //adiciona o número no final do vector 'num'.
    }
    
    printf("Num tem %i elementos:\n", num.size());
    //cout << "Num tem " << num.size() << " elemntos!\n";

    num[0] = 10;        //o indice zero recebe 10. 
    //num [11] = 10 não funciona pq o índice 11 ainda não foi criado 
    cout << "indice 0 = " << num[0] << "\n";
    cout << "primeiro indece de 'num': " << num.front() << "\n";
    cout << "ultimo indece de 'num': " << num.back() << "\n";
    num.insert(num.begin(), 11);            //insere o valor 11 no indice zero de 'num' 
    cout << "novo indice 0 = " << num[0] << "\n";
    num.insert(num.begin()+5, 110);            //insere o valor 110 no indice 5 de 'num' 
    cout << "indice 5 = " << num[5] << "\n";
    num.insert(num.end(), 1010);            //insere o valor 1010 no ultimo indice 'num' 
    cout << "novo ultimo indice de num = " << num[num.size()-1] << "\n";


    //imprimir os elementos do vector
    cout << "num: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << "-";
    }
    cout << "\n";
    cout << "\n";

    num.erase(num.begin());                //apaga um ultimo elemento do indice indicado
    num.erase(num.begin());                //apaga um ultimo elemento do indice indicado
    num.erase(num.end()-1);                //apaga um ultimo elemento do indice indicado



    //imprimir os elementos do vector
    cout << "num: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << "-";
    }
    cout << "\n";


    cout << "aux: ";
    for (int i = 0; i < aux.size(); i++)
    {
        cout << aux[i] << "-";
    }
    cout << "\n";

    num.swap(aux);                  //os vector trocam de valores 
    cout << "aux: ";
    for (int i = 0; i < aux.size(); i++)
    {
        cout << aux[i] << "-";
    }
    cout << "\n";
    cout << "num: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << "-";
    }
    cout << "\n";
    cout << "\n";
    num.clear();                        //apaga todos os elemento de 'num' 
    printf("Num tem %i elementos:\n", num.size());

    //apaga todos os elementos de aux
    while (!aux.empty())
    {
        aux.pop_back();         //exclui o ultiomo elemento do vector 'aux'
    }
    printf("AUX tem %i elementos:\n", aux.size());
    
    
    return 0;

}