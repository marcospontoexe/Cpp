#include <iostream>
#include <map>            //biblioteca para usar map
#include <vector>

using namespace std;

int main()
{
    map<int, string> produto;            //<chave, valor da chave>
    map<int, string>::iterator itmap; 

    produto[0] = "mouse";               //adicionando  um valor na chave 0
    produto[1] = "teclado";
    produto[2] = "monitor";
    produto[3] = "impressora";
    produto[4] = "gabinete";
    produto[5] = "fax";
    produto.insert(pair<int, string>(6, "cx. som"));

    cout << "produto:" << "\n";
    for(auto i:produto)
    {
        cout << i.first << "= " <<  i.second <<"\n";
    }

    itmap = produto.find(3);
    if(itmap == produto.end())
    {
        cout << "chave nao encontrada" << "\n";
    }
    else
    {
        cout << "chave: " << itmap->first << " | " << "valor da chave: " << itmap->second << "\n";
    }

    produto.erase(5);           //apaga a chave 2, (mas não o indice 2). mantém o container com a mesma quantidade de índices

    cout << "produto:" << "\n";
    for(auto it=produto.begin(); it != produto.end(); it++)
    {
        cout << it->first << "= " <<  it->second << "\n";
    }

    produto.erase(produto.begin(), produto.find(3));                //apaga da chave 0 até a chave 2 
    cout << "produto:" << "\n";
    for(auto i:produto)
    {
        cout << i.first << "= " <<  i.second <<"\n";
    }


    produto.clear();            //apaga todas as chaves

    cout << "produto:" << "\n";
    for(auto i:produto)
    {
        cout << i.first << "= " <<  i.second <<"\n";
    }



    return 0;
}