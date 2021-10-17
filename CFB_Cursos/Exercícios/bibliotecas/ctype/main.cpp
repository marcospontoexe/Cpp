 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <cstdlib>      //biblioteca atualizada do 'stdlib.h'
 #include <cctype>        //Evolução da bib <ctipy.h>. Possui funções que verificam dados de caracteres
using namespace std;

int main()
{     
    char tmp[]="Marcos Daniel Santana - 1990.";
    cout << "conteudo da tmp: \n"<< tmp << "\n";
    size_t tamanho = sizeof tmp;
    int sp =0;
    cout << "tamanho:" << tamanho << "\n";
    cout << "caractere alfanumerico: ";  
    for(int i = 0; i < tamanho; i++)
    {
        if(isalnum(tmp[i]))
        {
            cout << tmp[i];
        }
        if(isspace(tmp[i]))
        {
            sp++;
        }        
    }
    cout << "\n";
    cout << "caractere numericos: ";  
    for(int i = 0; i < tamanho; i++)
    {
        if(isdigit(tmp[i]))
        {
            cout << tmp[i];
        }      
    }
    cout << "\n";
    cout << "Contem: " << sp << " space!\n";

    for(int i = 0; i < tamanho; i++)
    {       
        putchar(toupper(tmp[i]));           //tolower converte para minúsculo      
    }
    cout << "\n";
    /*
    isalpha     (verifica se é alfanumerico)
    isdigit     (verifica se e numero)
    isspace    (caractere de espaco)
    iscntrl   (\n  \0)
    isprint  (verifica se é imprimível)
    ispunct   (verifica se é pontuação)
    isxdigit (verifica se é exadecimal)
    */



    
    return 0;
}