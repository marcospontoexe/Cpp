#include <iostream>

using namespace std;

int main(void)
{
    int num = 0;
    string res;

    cout << "DIgite um valor entre 0 e 9: ";               

    cin >> num;

    //(num > 5) ? res = "VOce digitou um numero maior do que cinco!" : res = "Voce digitou um numero menor ou igual a cinco!"; 

    res = (num > 5) ? "VOce digitou um numero maior do que cinco!" : "Voce digitou um numero menor ou igual a cinco!";             //operador ternário

    cout << res;

    return 0;
}