#include <iostream>

using namespace std;

int main(void)
{
    int numero = 0;
    cout << "Digite um numero entre 0 e 9: ";
    cin >> numero;

    if(numero < 5)
    {
        cout << "Voce digitou um numero menor do que cinco!";
    }
    else if (numero > 5)
    {
        cout << "Voce digitou um número maior do que cinco!";
    }
    else
    {
        cout << "Voce digitou cinco!";
    }

    return 0;
}