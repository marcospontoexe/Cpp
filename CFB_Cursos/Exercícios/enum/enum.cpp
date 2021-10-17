# include <iostream>

using namespace std;

int main()
{
    enum cliente {marcos = 10, joanda, creitow, joserval};
    cliente idade;                    //declaração do tipo da variável 
    // caso não seja atibuido nenhum valor para os ídices do enum, serão atribuidos valores inteiros na ordem crescente, a partir do primeiro elemento
    cout << joanda << " " << marcos << " " << joserval << "\n";



    return 0;
}