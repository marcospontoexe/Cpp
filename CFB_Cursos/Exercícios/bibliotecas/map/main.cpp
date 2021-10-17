#include <iostream>
#include <map>            //biblioteca para usar map

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
    produto.insert(pair<int, string>(6, "cx. som"));        //adiociona um item
    produto.emplace_hint(produto.end(), 10, "modem");           //adiciona item apenas se nao for repetido


    cout << "produto:" << "\n";
    for(auto i:produto)
    {
        cout << i.first << "= " <<  i.second <<"\n";
    }
    cout << "indice 0: " << produto[0] << "\n";
    cout << "tamanho do map 'produto': " << produto.size() << "\n";               //tamanho da map
    cout << "tamanho maximo do map 'produto': " << produto.max_size() << "\n";        //número maximo de elementos que o map pode ter
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