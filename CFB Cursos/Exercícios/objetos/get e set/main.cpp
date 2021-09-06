#include <iostream>
#include "classes.h"


using namespace std;


int main()
{
 
    //declaração de objetos
    veiculo *v1 = new veiculo(2);     //como o construtor tem dados de entrada, é preciso passar os dados no momento de criação de um objeto   

 

    cout << "\nNome: " << v1->nome;
    cout << "\nVelociade maxima: " << v1->getvelmax();

    return 0;
}