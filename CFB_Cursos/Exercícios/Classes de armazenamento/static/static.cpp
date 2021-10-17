#include <iostream>
#include <vector>

using namespace std;

//o static armazena a variável em uma unica posição de memória, e sempre que a variavel for chamada será usadao mesmo endereço de memória
void incremento() 
{
    static int num = 0;
    num ++;
    cout << num << "\n";
}

int main()
{
    incremento(); 
    incremento();
    incremento();
    incremento();
    incremento();

    return 0;
}