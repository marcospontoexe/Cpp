#include <iostream>
#include <stdio.h>      //biblioteca da linguagem c, usada para printf e scanf
#include <iomanip>         //manipular cout

using namespace std;

int main()
{
    char nome[30];
    int idade;
    float peso;

    printf("Essa string esta cortada, \npor causa do terminador nulo, veja es\0se teste");

    printf("\nDigite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Nome: %s \nIdade: %i \nPeso: %.2f", nome, idade, peso);

    printf("\nIdade: %07i", idade);
    printf("\nPeso: %.2f", peso); 
    cout << "\nIdade: " << setw(10) << setfill('0') << idade << "\n";   

    cout << "\nIdade convertida para hexadecimal: " << hex << idade << "\n";
    cout << "\nIdade convertida para octal: " << oct << idade << "\n";

   

    return 0;
}