#include <iostream>

using namespace std;

void somar(int *var, int num);      //prototipação da função
void ini_vetor(int *v, int tam);

int main()
{
    int num = 5;
    int *pt;            //declaração de um ponteiro chamado 'pt' do tipo int, que só aponta para o endereço de variáveis do tipo int.
    int vetor[5];
    int *pvt;

    pt = &num;          //pt está recebendo o endereço da variável 'num'
    cout << "*pt: " << *pt << "\n";
    cout << "pt: " << pt << "\n";
    cout << "&num: " << &num << "\n";
    cout << "num: " << num << "\n";
    *pt = 10;             //manipula o valor da variável 'num' atraves do ponteiro 'pt'. (no endereço apontado por 'pt', adicione o valor 10) 
    cout << "num: " << num << "\n";

    pvt = vetor;        //'p' recebe o endereço de memória do primeior elemnto do 'vetor'
    //pvt = &vetor[0];        //'p' recebe o endereço de memória do primeior elemnto do 'vetor'

    cout << "End de memoria do primeiro indice do vetor: " << pvt << "\n";
    cout << "End de memoria do segundo indice do vetor: " << ++pvt << "\n";     //ao incrementar uma posição de memoria com ponteiro, o proprio compilador incrementa de acordo com o tipo da variável (int = 4 bits)

    *pvt = 2;                   //adiciona 2 no endereço de memória atual do vetor 'pvt'
    cout << "Valor no indice 1: " << vetor[1] << "\n";
    pvt = pvt-1;
    *pvt = 0;
    cout << "Valor no indice 0: " << vetor[0] << "\n";
    pvt[2] = 1;
    cout << "Valor no indice 3: " << vetor[2] << "\n";

    cout << "num: " << num << "\n";
    somar(&num, 5);
    cout << "soma de 'num': " << num << "\n";

    ini_vetor(vetor, 5);
    //ini_vetor(&vetor[0], 5);
    for(int i = 0; i<5; i++)
    {
        cout << vetor[i] << "\n";
    }

    return 0;
}

void somar(int *var, int add)   //'var' deve ser um ponteiro, pois 'num' não tem o mesmo endereço de 'var', mesmo que uma estaja recebendo o valor da outra variável.
{
    *var = *var + add;
}

void ini_vetor(int *v, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        v[i] = 0;
    }
}