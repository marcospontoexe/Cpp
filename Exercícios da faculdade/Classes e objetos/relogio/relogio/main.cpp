#include <iostream>
#include <stdio.h>
#include "relogio.h"

using namespace std;

int main(int argc, char *argv[])
{
    relogio infa;               //chama o construtor

    infa.entrada();
    infa.imprime();

    for(int i=0; i<3600; i++)
    {
        infa.incrementa();
    }


    infa.imprime();

    return 0;
}
