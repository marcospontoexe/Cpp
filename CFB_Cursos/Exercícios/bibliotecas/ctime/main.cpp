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
    size_t tamanho;             //recebe o tamanho da algo (uint)
    t = clock();              //clock() retorna a quantidade de ciclos de processamento
    cout << "Contagem: \n";
    contador(100);
    t = clock() - t;          //tempo atualizado é o tempo atual subtraido do tempo de processaemnto anterior
    cout << "ciclos de processamento: " << t << "\n";
    cout << "tempo de processamento: " << (float(t))/CLOCKS_PER_SEC << " s\n";

    time_t data;
    char buf[30];
    struct tm *infodata;
    time(&data);                                //associa o endereço do objeto 'data' à função time()
    infodata = localtime(&data);                //converte o 'time_t' para a struct 'tm'
    cout << "hoda e data atual: " << asctime(infodata) << "\n";     //converte o objeto 'infodata' para string
    strftime(buf, 30, "Hora: %H:%M", infodata);             //a variável 'buf' recebe apenas a hora e minuto
    cout << buf << "\n"; 
    strftime(buf, 30, "Data: %d/%m/%Y", infodata);             //a variável 'buf' recebe apenas a data
    cout << buf << "\n";    

    time_t hora;
    time(&hora);                                //associa o endereço do objeto 'data' à função time()
    cout << "hoda e data atual: " << ctime(&hora) << "\n";     //com o ctime() não precisa converter para string



    return 0;
}