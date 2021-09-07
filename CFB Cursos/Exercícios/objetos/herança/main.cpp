#include <iostream>
#include "classes.h"

using namespace std;


int main()
{
 
    dados *v1=new moto();    //intanciando um objeto da claase filha moto
    veiculo *v2=new carro();

    v1->imprimir ();
    v2->imprime();

    //cout << "\nNumero de rodas de v1: " << v1->rodas <<"\n";

    return 0;
}