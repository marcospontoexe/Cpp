#include <iostream>
#include <string>
#include <cctype>               //biblioteca para tolower
#include <stdlib.h>             //biblioteca para comando system

using namespace std;

int main(void)
{
    int chances = 5;
    string palavra, secreta, tentadas;          //'tentadas' guarda as letras que já foram digitadas
    char letra;
    bool acertou = false;

    cout << "Digite uma palavra secreta: \n";
    cin >> palavra;             //string cresce conforme o tamanho da palavra, sem risco de estourar o vetor
    system("cls");

    for(char &c : palavra)
    {
        c = tolower(c);         //deixa a palavra em minúsculas para 'A' e 'a' serem a mesma letra
    }

    secreta = string(palavra.size(), '-');      //cria a palavra escondida com um '-' para cada letra

    while(chances > 0 && secreta != palavra)    //o jogo acaba quando as chances terminam ou a palavra é descoberta
    {
        cout << "Voce tem "<< chances << " chances!\n";
        cout << "Letras tentadas: " << tentadas << "\n";
        cout << "Palavra secreta: " << secreta << "\n";
        cout << "Digite uma letra: \n";
        if(!(cin >> letra))     //se a entrada terminar (ex.: Ctrl+Z), encerra o jogo em vez de repetir o laço para sempre
        {
            break;
        }
        letra = tolower(letra);
        system("cls");

        if(tentadas.find(letra) != string::npos)        //find retorna string::npos quando não encontra a letra
        {
            cout << "A letra '" << letra << "' ja foi tentada!\n\n";
            continue;           //letra repetida não gasta chance
        }
        tentadas += letra;

        acertou = false;
        for(size_t cont = 0; cont < palavra.size(); cont++)
        {
            if(palavra[cont] == letra)
            {
                secreta[cont] = letra;
                acertou = true;
            }
        }
        if(acertou == false)
        {
            chances--;
        }
    }

    if(secreta == palavra)
    {
        cout << "VOCE VENCEU! A palavra era: " << palavra << "\n";
    }
    else
    {
        cout << "VOCE FOI ENFORCADO! A palavra era: " << palavra << "\n";
    }

    return 0;
}
