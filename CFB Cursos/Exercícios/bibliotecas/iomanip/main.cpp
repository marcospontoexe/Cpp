#include <iostream>
#include <iomanip>            //biblioteca para manipular saidas
#include <cstdlib>             //para usar system

using namespace std;


int main()
{
    cout << setbase(16);                 //altera a saida para usar base hexadecimal como padão numérico
    cout << 10 << "\n";
    cout << setbase(8);                 //altera a saida para usar base octal como padão numérico
    cout << 10 << "\n";
    cout << setbase(10);                 //altera a saida para usar base decimal como padão numérico
    cout << 10 << "\n";

    cout << setw(10);               //define a largura do campo
    cout << ".";
    cout << "<largura do campo>";
    cout << setfill('.');             //preenche os espaços com ponto
    cout << setw(10);
    cout << ".\n";

    double pi{3.14159};
    cout << setprecision(3) << pi <<"\n";         //configura a precisão para 2 casas decimais 

    return 0;
}