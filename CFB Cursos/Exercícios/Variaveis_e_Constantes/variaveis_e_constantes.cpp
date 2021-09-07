#include <iostream>
#include <stdio.h>          //biblioteca para usar 'gets'

#define pi 3.1415   //declaração de um constante
#define mensagem cout << "\ntudi certu?"

using namespace std;

string usuario;             //declaração de variável global

int main(void)
{
    //variáveis locais
    int idade = 0, ano = 0;
    char letra = 'M', sexo;
    string nome = "Marcos Daniel Satana";
    char nomemae[50]; 
    float peso = 60.25;
    double angulo = 21.235879;
    bool vivo = true;

   cout << "Nome da mae: ";       
   gets(nomemae);                   //a função 'gets' não usa o space como caractere nulo. a função 'cin' entende space como um caractere nulo 

    cout << pi;
    mensagem;
    cout << "\nIdade: "<< idade << "\n" << "Ano: " << ano << "\nLetra: " << letra << "\nSexo: " << sexo <<"\nNome: " <<nome << "\n" <<"Nome da mae: " << nomemae << "\nPeso: " << peso << "\n" << "angulo: " << angulo << "\n" << "vivo?: " << vivo << "\n"; 
    

    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Primeira letra do nome: ";
    cin >> letra;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "DIgite seu peso: ";
    cin >> peso;
    cout << "Digite o angulo: ";
    cin >> angulo;
    cout << "esta vivio: ";
    cin >> vivo;

    cout << "Idade: "<< idade << "\n" << "Ano: " << ano << "\nLetra: " << letra << "\nSexo: " << sexo <<"\nNome: " <<nome << "\n" <<"Peso: " << peso << "\n" << "angulo: " << angulo << "\n" << "vivo?: " << vivo << "\n";  

    return 0;
}