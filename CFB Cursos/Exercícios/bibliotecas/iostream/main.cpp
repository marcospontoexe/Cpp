#include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)

using namespace std;

int main()
{
    string nome; 
    char tmp[80];
    char n, s;

    cout << "Digite seu nome: \n";
    cin.get(tmp, 80);                   //as vezes o 'cin.get()' nao funciona se tem um 'cin >>' antes


    //cin.getline(tmp, 80);             //'getline' lÊ um linha inteira, ultil para ler arquivos

    cout << "Digite seu sobrenome: \n";
    cin >> nome;
    cout << "Nome: " << tmp << " " << nome << "\n";
    cout << "tamanho do sobrenome: " << cin.gcount() << "\n";

    cout << "Digite seu nome completo: \n";
    n = cin.get();      //e recebe apenas a primeira letra, pois é char
    cin.ignore(80, ' ');        //ignora o espaço entre as palavras
    s = cin.get();      //e recebe apenas a primeira letra do sobrenome
    cout << n << "-" << s << "\n";

    return 0;
}