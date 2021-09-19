#include <iostream>
#include <memory>      //biblioteca smart pointer

using namespace std;

class carro
{
public:
    int vel=0;
    int getvel()
    {
        return vel;
    }
    void setvel(int v)
    {
        this->vel=v;
    }

};

int main()
{
    unique_ptr<int> pnum(new int);   //ponteiro unico. permite de declarar apenas um ponteiro
    //unique_ptr<int> pnum(new int(10));   // para passar um valor no momento da declaração do ponteiro
    shared_ptr<int> pt1(new int(20));   //ponteiro compartilhado. permite compartilhar mais de um ponteiro
    shared_ptr<int> pt2=pt1;                //pt1 e pt2 usam o mesmo ponteiro. uma alteração feita em um ponteiro será alterada no outro ponteiro tb

    shared_ptr<carro> ptcarro1(new carro);
    shared_ptr<carro> ptcarro2=ptcarro1;
    unique_ptr<carro> ptcarro3(new carro);
    unique_ptr<carro> ptcarro4(new carro);


    *pnum = 10;
    cout << "valor da variavel: " << *pnum << " | " <<"endereco do ponteiro: " << &pnum << "\n";
    cout << "valor da variavel: " << *pt2 << " | " <<"endereco do ponteiro: " << &pt2 << "\n";

    ptcarro1->setvel(10);
    ptcarro2->setvel(20);               //ptcarro1 também será igual a 20, pois estão compartilhando o mesmo vetor 
    cout << "velocidade ptcarro1: " << ptcarro1->getvel() << "\n";
    cout << "velocidade ptcarro2: " << ptcarro2->getvel() << "\n";

    ptcarro3->setvel(30);
    ptcarro4->setvel(40);              
    cout << "velocidade ptcarro3: " << ptcarro3->getvel() << "\n";
    cout << "velocidade ptcarro4: " << ptcarro4->getvel() << "\n"; 
    


    return 0;
}