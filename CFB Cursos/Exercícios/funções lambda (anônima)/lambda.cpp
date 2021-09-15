#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x1, x2, x3, x4;
    x1 = 1;
    x2 = 1;
    x3 = 1;
    x4 = 1;
    /*
    []          //captura de variávies externas
    ()->int     //parâmetor de entrada da função e tipo de retorno
    {};         //corpo da função 
    */

    auto maior = [](int n1, int n2)->int
    {
        if(n1 > n2)
        {
            return n1;
        }
        else
        {
            return n2;
        }
    };     
    
    auto vector_maior = [](vector <int> valores)->int
    {
        int m =0;
        for(int i:valores)
        {
            if(m > i)
            {
                m = m;
            }
            else
            {
                m = i;
            }
        }
        return m;
            
    };

    // ' = ' captura todas as variáveis do escopo
    auto soma = [=]()->int       
    {
        return x1+x2+x3+x4;
    };

    cout << "maior: " << maior(5, 10) << "\n";
    cout << "maior valor do vector: " <<vector_maior({2,36,5,8,90,7,50}) << "\n";
    cout << "soma: " <<soma() << "\n";

    return 0;
}