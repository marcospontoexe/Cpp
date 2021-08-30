#include <iostream>
#include <cstring>      //biblioteca de string para linguagem c

using namespace std;

int main()
{
    char frase1[50] = "como vai voce?";
    char frase2[50] = "vou bem!";
    

    cout << "frase 1: " << frase1 << "\n";
    cout << "frase 2: " << frase2 << "\n";

    strncpy(frase1, frase2, sizeof(5));         //copia apenas os 5 primeiros indices da frase 2 para a frase 1
    cout << "5 primeiros elementos da frase 2 colada para a frase 1: " << frase1 << "\n";

    cout << "A frase 1 cotem "<< strlen(frase1) << " caracteres!\n";        //mostra a quantidade de caracteres contido na string
    strcpy(frase1, frase2);            //frase 2 colada para a frase 1
    cout << "frase 2 colada para a frase 1: " << frase1 << "\n";

    cout << "as frases sao iguais [0-sim/1-nao]: " << strcmp(frase1, frase2) << "\n";  //compara se a frase 1 e 2 são iguais, retornando 0 ou 1

    cout << "os 5 primeiros elementos das frases sao iguais [0-sim/1-nao]: " << strncmp(frase1, frase2, sizeof(5)) << "\n";  //compara se a frase 1 e 2 são iguais, retornando 0 ou 1

    cout << "frase 1 e 2 concatenadas: " << strcat(frase1, frase2) << "\n";              //concatena as duas frases

    //cout << "frase 2 e substring de frase 1: " << strchr(frase1, frase2) << "\n";      //verifica se frase 2 e uma substring de frase 1

    cout << "o primeiro elemento da frase 1 eh digito: " << isdigit(frase1[0]) << "\n"; 
    cout << "o primeiro elemento da frase 1 eh alfabetico: " << isalpha(frase1[0]) << "\n"; 
    



    return 0;
}