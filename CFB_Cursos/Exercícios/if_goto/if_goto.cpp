#include <iostream>

using namespace std;



int main(void)
{
    int numero = 0;
    char continuar;
    aqui:       //declaração da label d comando goto. Não funciona globalmente, apenas na função local.

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

    cout << "\nDeseja continuar [S/N]: ";
    cin >> continuar;

    if(continuar == 'S' or continuar == 's')
    {
        goto aqui;
    }
    else
    {
        cout << "Programa encerrado! ";
    }

    return 0;
}