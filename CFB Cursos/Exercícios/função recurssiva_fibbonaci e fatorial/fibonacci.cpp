#include <iostream>

using namespace std;
void fibo(int fibona, int cont, int limite);             //prototipação da função, ja que foi declarada após o main.   void 

int main ()
{
    fibo(0, 1, 100);
    return 0;
}

void fibo(int fibona, int cont, int limite)                   //0 1 1 2 3 5 8 13 21 34
{
    if(fibona > 0 && fibona <= limite)
    {
        cout << fibona << " ";
        fibo(fibona + cont, fibona , limite);       
    }
    if(fibona == 0)
    {
        cout << fibona << " ";
        cout << cont << " ";     
        fibo(fibona + cont, cont , limite);
    }

}
