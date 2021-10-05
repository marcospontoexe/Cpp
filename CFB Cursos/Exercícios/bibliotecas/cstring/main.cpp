 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <cstdlib>      //biblioteca atualizada do 'stdlib.h'
 #include <cstring>        //possui funções para manipulação de string (diferente da bib string, que possui classes)

using namespace std;

int main()
{     
    char txt1[50] = "fazendo um teste!";
    char txt2[50] ="";
    cout << "txt1: " << txt1 << "\n";
    cout << "txt1 contem " << strlen(txt1) << " caracteres!\n";
    
    strcat(txt1, " - e de novo!");         //concatena duas strings
    cout << "txt1: " << txt1 << "\n";

    strncpy(txt2, txt1, 3);         //copia os 5 primeiros caracteres de txt1 para txt2
    cout << "txt2: " << txt2 << "\n";

    strcpy(txt2, txt1);         //copia txt1 para txt2
    cout << "txt2: " << txt2 << "\n";



    
    return 0;
}