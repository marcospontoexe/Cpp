 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <cstdlib>      //biblioteca atualizada do 'stdlib.h'
 #include <cstring>        //possui funções para manipulação de string (diferente da bib string, que possui classes)

using namespace std;

int main()
{     
    char txt1[50] = "fazendo um teste!";
    char txt2[50] ="";
    cout << "txt1: " << txt1 << "\n";
    cout << "txt1 contem " << strlen(txt1) << " caracteres!\n";         //strlen() retorna o tamanho de índices da string
    
    strcat(txt1, " - e de novo!");         //concatena duas strings
    cout << "txt1: " << txt1 << "\n";

    strncpy(txt2, txt1, 3);         //copia os 5 primeiros caracteres de txt1 para txt2
    cout << "txt2: " << txt2 << "\n";

    strcpy(txt2, txt1);         //copia txt1 para txt2
    cout << "txt2: " << txt2 << "\n";

    char *str1;
    char str2[] = "fazendo um teste. teste 1 2 3/123456!";
    char pesquisa = 'e';
    str1 = (char*)memchr(str2, pesquisa, strlen(str2));         //memchr() procura no bloco de memoria, procura um caractere na string 'str2'
    
    cout << "str2: " << str2 <<"\n";
    if(str1 != NULL)
    {
        cout << "Letra: " << pesquisa << " encontrada na posicao " << str1-str2+1 << ".\n";
    }
    else
    {
        cout << "Letra: " << pesquisa << " nao contrada!\n";
    }

    str1 = strrchr(str2, pesquisa);         //strrchr() procura no bloco de memoria, procura um caractere na string 'str2' retornando o ultimo índice do vetor
    if(str1 != NULL)
    {
        cout << "Letra: " << pesquisa << " encontrada na posicao " << str1-str2+1 << ".\n";
    }
    else
    {
        cout << "Letra: " << pesquisa << " nao contrada!\n";
    }
    str1 = strtok(str2, "/.");         //strrchr() procura no bloco de memoria, procura um caractere na string 'str2' retornando o ultimo índice do vetor
    while(str1 != NULL)
    {
        cout << str1 << ".\n";
        str1 = strtok(NULL, "/.");
    }
    
    
    return 0;
}