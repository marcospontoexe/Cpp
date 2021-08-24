#include <iostream>

using namespace std;
//em c++ as funções secundárias devem vir antes da função main
float soma(float n1, float n2);             //prototipação da função, ja que foi declarada após o main.    

int main ()
{
    float res, a, b;
    cout << "Digite um valor: " << "\n";
    cin >> a;
    cout << "Digite outro valor: " << "\n";
    cin >> b;

    res = soma(a, b),
    cout << "O resutado da soma eh: " << res;

    return 0;
}

float soma(float n1, float n2)
{
    return n1+n2;
}