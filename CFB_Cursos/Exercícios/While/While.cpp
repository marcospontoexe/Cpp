#include <iostream>

using namespace std;

int main(void)
{
    string continua = "s";

    while (continua == "s")
    {
        cout << "Deseja continuar [s/n]: \n";
        cin >> continua;

    }
    
    cout << "Programa encerrado! \n";

    return 0;
}