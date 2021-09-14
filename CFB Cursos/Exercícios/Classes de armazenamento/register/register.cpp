#include <iostream>
#include <vector>

using namespace std;


int main()
{
    resister int temp = 10;         //se possível, o programa armazena a variável no registrador, e não na memória ram

    vector <int> num{10, 20, 30, 40, 50, 60, 70};

    cout << "5+5 = " <<soma(5.2, 5.6);

    cout << "vector: " << "\n";
    for (auto it = num.begin(); it != num.end(); it++)      // ao invez de usar 'vector<int>::iterator it = num.begin()' da para usar 'auto it = num.begin()'
    {
        cout << *it << "\n";
    }
    

    

    return 0;
}