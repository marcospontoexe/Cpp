#include <iostream>
#include <stdexcept>    //biblioteca para usar 'exception'
#include <vector>   

using namespace std;
double divide(double n1, double n2);

int main()
{

    vector<int>num(5);
    try
    {
        num.at(7) = 10;             //tenta adicionar o valor 10 numa posição inexistente do vector
        cout << num[7] << "\n";
    }
    catch(exception& erro)
    {
        cout << "Erro ao dicionar: " << erro.what() << '\n';
    }


    try
    {
        cout << divide(-1, 10);
    }
    catch(const char* erro)
    {
        cout << "Erro: " << erro << '\n';
    }
    
    

    return 0;
}

double divide(double n1, double n2)
{
    if(n2 == 0)
    {
        throw "Nao e possivel dividor por zero!\nindeterminacao! \n";          
    }
    //caso queira gerar uma exação proposital
    if(n1 < 0)
    {
        throw "O numerador nao pode ser negativo!\n";          
    }
    return n1/n2;
}