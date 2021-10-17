 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
  #include <ctime>        //biblioteca ctime
 #include <chrono>        //evolução da biblioteca ctime

using namespace std;
using namespace chrono;        //o chromo é um sub namespace

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
    minutes m(1);
    seconds s;
    s=m;            //segundos recebe minutos: 1 min = 60 segundos
    cout << "segundos: " << s.count() << "\n";

    minutes min;
    seconds seg(60);
    min=duration_cast<minutes>(seg);            //como a unidade de minutos é maior doque segundos, é necessário usar 'duration_cast' para a conversão de seg para min.
    cout << "minutos: " << min.count() << "\n";
    /*
    outros tipos:
    hours
    milliseconds
    microseconds
    nanoseconds
    */

    using chrono::system_clock;        //classe que acessa as infos do relogio do sistema
    duration<int, ratio<60*60*24>> um_dia(1);    //'duration' expressa uma duração de período. 'int' faz a contagem interna, e 'ratio<>' é o período em segundos:(60*60*24) é a quantidade de segundos em um dia
    system_clock::time_point hoje = system_clock::now();            //representa um ponto no tempo (hoje)
    system_clock::time_point amanha = hoje + um_dia;            //representa um ponto no tempo (amanhã)
    system_clock::time_point ontem = hoje - um_dia;            //representa um ponto no tempo (ontem)
    time_t tt;              //tipo para receber tempo
    tt = system_clock::to_time_t(hoje);             //'tt' recebe 'hoje'
    cout << "hoje: " << ctime(&tt) << "\n";

    steady_clock::time_point t1 = steady_clock::now();              //ponteiro t1 recebe a contagem de clocks
    contador(100);
    steady_clock::time_point t2 = steady_clock::now();              //ponteiro t2 recebe a contagem de clocks
    duration <double> tempo = duration_cast<duration<double>> (t2-t1);            //convertendo duration em double
    cout << "tempo de processamento: " << tempo.count() << " segundos.\n";

    return 0;
}