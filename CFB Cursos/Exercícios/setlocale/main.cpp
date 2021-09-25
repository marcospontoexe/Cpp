#include <iostream>
#include <locale.h>         //para poder usar acentuação

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");              //LC_ALL = locale all
    cout << "agora é possível escrever maçã com acento!";   

    return 0;
}