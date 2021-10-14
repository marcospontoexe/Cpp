#include <iostream>

using namespace std;
/*
- argc salva a quantidade de parâmetros passados para o programa no momento da execução, pelo prompt de comando. 
- argv armazena o ponteiro de cada parametro passado ao programa, ou seja, armazena os parâmetros
*/
int main(int argc, char *argv[])
{
    //para passar um argumento para o programa durante a execução no prompt, basta digitar o nome do programa na linha do prompt, espaço, em seguida digitar o parâmetro a ser passado ao programa, e apertar enter.
    cout << argv[0] << "\n";         //por padrão recebe o nome do programa como primeiro parâmetro.   
    cout << argc << "\n";

    return 0;
}