#include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr...)
#include <cstdlib>      //biblioteca atualizada do 'stdlib.h'
#include <ctime>        //para usar o time

using namespace std;

int main()
{
    int num1, num2; 
    char tmp[10];

    printf("Digite um numero \n");
    gets(tmp);                   //as vezes o 'cin.get()' nao funciona se tem um 'cin >>' antes
    //cin.get(tmp, 10);                   //as vezes o 'cin.get()' nao funciona se tem um 'cin >>' antes
    //scanf("%c", &tmp);
    num1 = atoi(tmp);                //alpha to int (atoi)    
    num2 = strtod(tmp, NULL);                //str to double 
    printf("num1: %i | num2: %i\n", num1, num2);


    //alocação dinamica de memoria
    int tamanho=10, n;
    int *vetor;       //*vetor = vetor[4]
    //vetor = (int*)calloc(tamanho, sizeof(int));           //alocando memoria para o vetor
    vetor = (int*)malloc(sizeof(int));           //alocando memoria para o vetor, com o ponterio apontado para o primeiro elemento
    srand(time(NULL));           //a cada chamada da função 'rand()', será gerada uma nova semente de geração de numeros aleatórios
    for(int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%100;
        printf("vetor[%i]: %i\n", i,vetor[i]);          //gera um numero aleatório de 0 até 100
    }
    free(vetor);            //libera a memória que foi usada para o 'vetor'

    return 0;
}