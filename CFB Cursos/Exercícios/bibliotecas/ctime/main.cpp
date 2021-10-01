 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <ctime>        //atualização da <time.h>

using namespace std;

void contador(int num, int cont = 0)
{
    cout << cont << "\n";
    if(num > cont)
    {
        contador(num,  ++cont);
    }
}

int main()
{
    clock_t t;
    t = clock();              //clock() retorna a quantidade de ciclos de processamento
    cout << "Contagem: \n";
    contador(100);
    t = clock() - t;          //tempo atualizado é o tempo atual subtraido do tempo de processaemnto anterior
    cout << "ciclos de processamento: " << t << "\n";
    cout << "tempo de processamento: " << (float(t))/CLOCKS_PER_SEC << " s\n";

    
    return 0;
}