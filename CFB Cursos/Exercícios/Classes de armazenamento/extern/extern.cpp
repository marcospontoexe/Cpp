#include <iostream>

using namespace std;

extern int num;     //utiliza uma variável externa, que está no main

void imprime() 
{
    cout << "valor de num: " << num << "\n";
}
