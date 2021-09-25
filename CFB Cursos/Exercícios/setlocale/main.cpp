#include <iostream>
#include <locale.h>         //para poder usar acentuação

using namespace std;

int main()
{
    //setlocale(LC_ALL, "portuguese.utf8");         //LC_ALL = locale all
    //setlocale(LC_ALL,"pt_BR.UTF-8");
    //setlocale(LC_ALL, "portuguese.utf8");              
     setlocale(LC_ALL, "portuguese");
    cout << "agora é possível escrever maçã com acento!";   

    return 0;
}