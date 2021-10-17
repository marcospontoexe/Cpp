#include <iostream>
#include <vector>

using namespace std;

//recebe double, mas retorna inteiro
auto soma(double n1, double n2)->int 
{
    return n1+n2;
}

int main()
{
    auto temp = 10;         //a variável declarada será do tipo inteiro, é obrigatorio atribuir um valor 
    vector <int> num{10, 20, 30, 40, 50, 60, 70};

    cout << "5+5 = " <<soma(5.2, 5.6);

    cout << "vector: " << "\n";
    for (auto it = num.begin(); it != num.end(); it++)      // ao invez de usar 'vector<int>::iterator it = num.begin()' da para usar 'auto it = num.begin()'
    {
        cout << *it << "\n";
    }
    

    

    return 0;
}