#include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr...)
#include <cstdlib>      //biblioteca atualizada do 'stdlib.h'
#include <ctime>        //para usar o time

using namespace std;

void fim()
{
    printf("PROGRAMA FINALIZADO!\n");
}

int comparacao(const void* a, const void* b)
{
    return (*(int*)a - *(int*) b);
    //0 -> a=b
    //>0 -> a>b
    //<0 -> a<b
}

int main()
{
    int num1, num2; 
    char tmp[10];

    printf("Digite um numero \n");
    gets(tmp);                   //as vezes o 'cin.get()' nao funciona se tem um 'cin >>' antes
    //cin.get(tmp, 10);                   //as vezes o 'cin.get()' nao funciona se tem um 'cin >>' antes
    //scanf("%c", &tmp);                //armazena apenas o primeiro digito, pois é char
    system("cls");                      //limpa a tela
    num1 = atoi(tmp);                //alpha to int (atoi)    
    num2 = strtod(tmp, NULL);                //str to double 
    printf("num1: %i | num2: %i\n", num1, num2);


    //alocação dinamica de memoria
    int tamanho=10, n;
    int *vetor;       //*vetor = vetor[4]
    vetor = (int*)calloc(tamanho, sizeof(int));           //alocando memoria para o vetor
    //vetor = (int*)malloc(sizeof(int));           //alocando memoria para o vetor, com o ponterio apontado para o primeiro elemento
    srand(time(NULL));           //a cada chamada da função 'rand()', será gerada uma nova semente de geração de numeros aleatórios
    for(int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%100;
        printf("vetor[%i]: %i\n", i,vetor[i]);          //gera um numero aleatório de 0 até 100
    }
    free(vetor);            //libera a memória que foi alocada para o 'vetor'
    
    //PESQUISA E ORDENAÇÃO
    int val[]={9,2,6,68,5,4,58,3,7,8};
    int pesq = 2;
    int *pos;
    qsort(val, 10, sizeof(int), comparacao);        //organiza o vetor em ordem crescente
    printf("val:\n");
    for (int i = 0; i < 10; i++)
    {
        cout << val[i] << "\n";
    }
    pos = (int*)bsearch(&pesq, val, 10, sizeof(int), comparacao);
    printf("O valor pesquisado %i esta na posicao %i\n", pesq, *pos);
    


    //controle de ambiente
    //_Exit(EXIT_SUCCESS);            //finaliza o programa
    printf("Variavel de ambiente PATH:\n%s\n", getenv("PATH"));
    atexit(fim);                //chama a função fim ao sair da função main. 
    //at_quick_exite(fim);      //sintaxe do c++11    
    printf("CONTAGEM:\n");
    for(int i=0; i<10; i++)
    {
        cout << i << "\n";
        if(i > 5)
        {
            exit(EXIT_SUCCESS);         //EXIT_SUCCESS retorna zero como parametro de retorno da função 'main'. EXIT_SUCCESS retorna 1.
            //quick_exit(EXIT_SUCCESS);          //sintaxe do c++11
        }
        else{}
    }
    cout << "DIR: " << system("dir");       //imprime o diretorio 'dir'
    system("pause");                        //pausa o sistema até que pressionada alguma tecla
    

    

    return 0;
}