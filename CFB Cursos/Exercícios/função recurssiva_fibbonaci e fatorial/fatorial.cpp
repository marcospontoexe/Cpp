#include <iostream>

using namespace std;
int fatorial(int fat);             //prototipação da função 

int main ()
{

    int res = fatorial(5);
    cout << res;
    return 0;
}

int fatorial(int fat)                   
{
    if(fat == 0)
    {
        cout << fat<< "\n";
        return 1;
    }
    cout << fat<< "\n";
    return fat * fatorial(fat-1);       //se usar '--fat' ou 'fat--' como parâmetro de entrada da função, da valor diferente.   
}
