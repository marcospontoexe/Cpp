#include <iostream>
#include <stdlib.h>             //biblioteca para comando system

using namespace std;

int main(void)
{
    int tamanho = 0, chances = 5;
    char palavra[30], letra;
    bool flag = false;
    
    cout << "Digite uma palavra secreta: \n";
    cin >> palavra;
    system("cls");


    while(palavra[tamanho] != '\0')
    {
       tamanho++;
    }   
    char secreta[tamanho];

    for(int i=0; i < tamanho; i++)
    {
        secreta[i] = '-';
    }

    while(chances > 0)
    {
        cout << "Voce tem "<< chances << " chances!\n"<< "Digite uma letra: \n" << "Palavra secreta: " << secreta << "\n";
        cin >> letra;
        for(int cont = 0; cont < tamanho; cont++)
        {
            if(palavra[cont] == letra)
            {
                secreta[cont] = letra;
                flag = true;
            }            
        }
        if(flag == false)
        {
            chances--;
        }
        flag = false;
        system("cls");
    }
    
    cout << "VOCE FOI ENFORCADO!";

   

    return 0;
}