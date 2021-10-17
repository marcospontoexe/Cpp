#include <iostream>
#include <utility>            //biblioteca para usar pair
#include <vector>

using namespace std;

int main()
{
    vector <pair <string, int> > veiculo; 
    pair <int, string> tmp(30, "marcos");       //declarção de um container do tipo par
    pair <string, float> paciente[3];              //pair do tipo vetor
    pair<string, pair<int, float>> produto[2];            //pair com três parâmetros

    cout << "idade: " << tmp.first << "\n" << "nome: " << tmp.second << "\n";
    tmp.first = 10;
    tmp.second = "daniel";
    cout << "idade: " << tmp.first << "\n" << "nome: " << tmp.second << "\n";

    paciente[0].first = "juaum";
    paciente[0].second = 60.6; 
    paciente[1]=make_pair("jandira", 80.9);
    paciente[2]=make_pair("creber", 50.9);     


    cout << "pacientes:" << "\n";
    for(auto i:paciente)
    {
        cout << "nome: " << i.first << " - " << "peso: " << i.second << "\n";
    }   

    produto[0]=make_pair("computador", make_pair(2, 2180.9));
    produto[1]=make_pair("tv", make_pair(3, 1150.4));
    cout << "produtos:" << "\n";    
    for(auto i:produto)
    {
        cout << "produto: " << i.first << " | " << "quantidade: " << i.second.first << " | " << "valor: " << i.second.second << "\n";
    } 

    veiculo.push_back(make_pair("carro", 220));
    veiculo.push_back(make_pair("moto", 120));  
    veiculo.push_back(make_pair("trem", 300));  
    cout << "veiculos:" << "\n";    
    for(auto i:veiculo)
    {
        cout << "tipo: " << i.first << " | " << "velocidade maxima: " << i.second << "\n";
    } 

    return 0;
}