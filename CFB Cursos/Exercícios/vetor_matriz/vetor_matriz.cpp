#include <iostream>

using namespace std;

int main(void)
{
    int posicao [3] = {5, 6, 2};               //vetor inteiro
    int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};


/*
    for(int i = 0; i < sizeof(posicao)/4; i++)      //int tem 4 bits, por isso o sizeof é dividido por 4
    {
        cout << posicao[i] << "\n";
    }

    for(int i = 0; i < sizeof(matriz)/4; i++)      
    {
        for(int j = 0; j < sizeof(matriz)/4; j++)      
        {
            cout << matriz[i][j] << "\n";
        }
    }

    */

    return 0;
}