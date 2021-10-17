#include <iostream>
#include <vector>       //para usar iterator
#include <map>          //para usar map

using namespace std;

struct pessoa
{
    string nome;
    int idade;
};

class veiculo
{
public:
    int ano;
    string marca;
};

int main()
{
    int num{10};
    int vetor[]{0,1,2,3,4,5};
    string nome{"Marcos"};
    vector <int> valores{1,2,3,4,5,6,7,8,9};
    map<string, string> capitais{{"pr", "curitiba"}};
    
    cout << "num: " << num << "\n";   
    cout << "nome: " << nome << "\n";

    cout << "vetor:" << "\n";
    for(int i = 0; i<sizeof(vetor)/4 ; i++)
    {
        cout << vetor[i] << "\n";
    }

    cout << "valores:" << "\n";
    for(vector<int>::iterator it = valores.begin(); it != valores.end(); it++)
    {
        cout << *it << "\n";
    }

    cout << "capitais:" << "\n";
    for(map <string, string>::iterator it=capitais.begin(); it != capitais.end(); it++)
    {
        cout << it->first << " - " << it->second << "\n";
    }

    pessoa p1{"marcos", 30};
    cout << "nome da struct 'pessoa': " << p1.nome <<"\n";   
    cout << "idade da struct 'pessoa': " << p1.idade <<"\n"; 

    veiculo v1{2020, "honda"};
    cout << "marca do veiculo: " <<v1.marca <<"\n";   
    cout << "ano do veiculo: " <<v1.ano <<"\n";

    return 0; 
}