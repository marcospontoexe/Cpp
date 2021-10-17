#include <iostream>

using namespace std;

int main(void)
{
    string continua;

    do{
        cout << "Deseja continuar [s/n]: \n";
        cin >> continua;

    }while (continua == "s");
   
    
    
    cout << "Programa encerrado! \n";

    return 0;
}