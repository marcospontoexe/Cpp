 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <typeinfo>        //informações sobre o tipo da variável usada

using namespace std;
class teste
{

};

int main()
{
     
    char tmp[80]="olá";
    auto num{3}; 
    auto nome{'m'};
    auto palavra{"misericordia"};
    teste testando;

    cout << "Tipo da variavel tmp: "<< typeid(*tmp).name() << ".\n";
    cout << "Tipo da variavel num: "<< typeid(num).name() << ".\n";
    cout << "Tipo da variavel nome: "<< typeid(nome).name() << ".\n";
    cout << "Tipo da variavel misericordia: "<< typeid(palavra).name() << ".\n";
    cout << "Tipo do objeto testando: "<< typeid(testando).name() << ".\n";
    
    return 0;
}