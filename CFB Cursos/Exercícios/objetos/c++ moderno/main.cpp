#include <iostream>
#include <memory>           //smart pointer

using namespace std;

//metodo classico
class carro
{
public:
    int velmax, pot;
    const char* nome;

    //o metodo pode ser criado dentro da classe
    carro(const char* n, int p)             //construtor
    {
        nome = n;
        pot = p; 
        if(p < 100)
        {
            velmax = 120;
        }
        else if(p < 200)
        {
            velmax = 220;
        }
        else
        {
            velmax = 350;
        }        
    }
};

//metodo moderno
class caranga
{
public:
    int vel, poten;
    const char* nome1;
    //o metodo pode ser criado dentro da classe
    //construtor
    caranga(const char* n1, int p1):nome1(n1), poten(p1)  //LISTA DE INICIALIZAÇÃO com declaração de atributos, para usar inicialização uniforme
    {
        if(p1 < 100)
        {
            vel = 120;
        }
        else if(p1 < 200)
        {
            vel = 220;
        }
        else
        {
            vel = 350;
        }      
    }
};


int main()
{
    //metodo classico
    carro *c1 = new carro("opala", 150);
    cout << "nome: " << c1->nome << " | " << "potencia: " << c1->pot << " | " << "velocidade: " << c1->velmax << "\n"; 
    delete c1;

    //metodo moderno
    caranga c3{"ferrari", 350};
    unique_ptr <caranga> c2(new caranga{"fusca", 80});
    cout << "nome: " << c2->nome1 << " | " << "potencia: " << c2->poten << " | " << "velocidade: " << c2->vel << "\n"; 
    cout << "nome: " << c3.nome1 << " | " << "potencia: " << c3.poten << " | " << "velocidade: " << c3.vel << "\n";

    return 0;
}