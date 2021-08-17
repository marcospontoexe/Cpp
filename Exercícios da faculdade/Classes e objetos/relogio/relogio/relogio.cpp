#include "relogio.h"
#include <stdio.h>

relogio::relogio()              //código do construtor
{

}

relogio::~relogio()             //código do destrutor
{

}

void relogio::entrada(void)
{
    printf("digite o valor da hora:");
    scanf("%i",&hora);

    printf("digite o valor do minuto:");
    scanf("%i",&minuto);

    printf("digite o valor do segundo:");
    scanf("%i",&seg);


}

void relogio::imprime(void)
{
    printf("Hora Atual: %02d:%02d:%02d\n", hora, minuto, seg);
}

void relogio::incrementa(void)
{
    seg++;
    if(seg==60)
    {
        seg = 0;
        minuto++;


        if(minuto==60)
        {
            minuto = 0;
            hora++;

            if(hora==24)
            {
                hora = 0;
            }
        }
    }
}
