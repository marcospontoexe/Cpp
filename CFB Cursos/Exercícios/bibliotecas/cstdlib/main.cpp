#include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr...)
#include <cstdlib>      //biblioteca atualizada do 'stdlib.h'
#include <ctime>        //para usar o time

using namespace std;

int main()
{
    int num1, num2; 
    char tmp[10];

    cout << "Digite um numero \n";
    cin.get(tmp, 10);                   //as vezes o 'cin.get()' nao funciona se tem um 'cin >>' antes

    num1 = atoi(tmp);                //alpha to int (atoi)
    cout << "num1: " << num1 << "\n";

    num2 = strtod(tmp, NULL);                //str to double 
    cout << "num2: " << num2 << "\n";

    srand(time(NULL));                                          //a cada chamada da função 'rand()', será gerada uma nova semente de geração de numeros aleatórios
    cout << "Numero aleatorio: " << rand()%100 << "\n";         //gera um numero aleatório de 0 até 100

    return 0;
}