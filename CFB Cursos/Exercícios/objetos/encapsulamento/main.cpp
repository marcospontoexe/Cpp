#include <iostream>
#include <memory>           //smart pointer

using namespace std;

//metodo classico
class carro
{

};

//metodo moderno
class caranga
{
private:    //impeda que os membros sejam alterados fora da classe
    int velmax;
public:
    int pot;
    const char* nome;

    //o metodo pode ser criado dentro da classe
    caranga(const char* n, int p)             //construtor
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

    int getvelmax()
    {
        return velmax;
    }
};


int main()
{
    //metodo moderno
    caranga c1{"ferrari", 350};
    unique_ptr <caranga> c2(new caranga{"fusca", 80});
    cout << "nome: " << c2->nome << " | " << "potencia: " << c2->pot << " | " << "velocidade: " << c2->getvelmax() << "\n"; 
    cout << "nome: " << c1.nome << " | " << "potencia: " << c1.pot << " | " << "velocidade: " << c1.getvelmax() << "\n";

    return 0;
}