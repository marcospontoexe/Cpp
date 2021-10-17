#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int numeros[]{0,1,2,3,4,5,6,7,8,9};
    vector <int> num{10,20,30,40,50,60,70,80,90,100};

    for(int i:numeros)          //funciona apenas com elementos que podem ser iterados
    {
        cout << i << "\n";
    
    }
    cout <<"\n";

    for(int i:num)          //funciona apenas com elementos que podem ser iterados
    {
        cout << i << "\n";
    
    }


    return 0;
}
