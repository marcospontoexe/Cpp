#include <iostream>
#include <stdlib.h>         //função para usar malloc
#include <stdio.h>          //função para usar gets

using namespace std;

int main()
{  
    char *nome;
    nome = (char*) malloc(sizeof(char)+1);      //o ponteiro nome vai reservar o tamanho de um char (1 bit) + caractere nulo
    cout << "Nome: ";
    gets(nome);

    cout << "Nome: " << nome << "\n";

}
