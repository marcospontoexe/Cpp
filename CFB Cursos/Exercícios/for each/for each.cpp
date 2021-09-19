#include <iostream>
#include <vector>
#include <algorithm>            //para usasr for each

using namespace std;

int main(void)
{
    vector<int> n{0,1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it;   //iterator do vector

    cout << "n: ";
    for(it=n.begin(); it!=n.end(); it++)
    {
        cout << *it << " - ";
    }
    cout << "\n";

    cout << "n: ";
    for(auto i:n)
    {
        cout << i << " - ";
    }
    cout << "\n";

    //for each(inicio da estrutura a ser percorrida, final, função que vai operar os dados da estrutura(função lambda))
    cout << "n: ";
    for_each(n.begin(), n.end(), [](int num){cout << num << " - ";});     //o valor de n é passado para 'num'
    cout << "\n";

    return 0;
}
