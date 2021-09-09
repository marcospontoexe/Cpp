#include <iostream>
#include <fstream>            //biblioteca para manipular arquivos de dados

using namespace std;

int main()
{
    ofstream arquivo;           //objeto do tipo ofstream
    
    arquivo.open("dados.txt");             //vincula o programa a um arquivo externo
    arquivo << "Arquivo de teste";          //armazena dentro do arquivo criado, substituindo o anterior.
    arquivo.close();                        //fecha o arquivo manipulado. Sempre que algo for aberto ou chamado, é importante finalizar apos o uso.

    /*  O 'ios::app' permite adicionar dados ao arquivo, ao inves de subscrever, substituindo o anterior.
        arquivo.open("dados.txt", ios::app);             //vincula o programa a um arquivo externo
        arquivo << "Arquivo de teste";          //armazena dentro do arquivo criado, substituindo o anterior.
    */
    
    return 0;
}