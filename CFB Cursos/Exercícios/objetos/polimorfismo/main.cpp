#include <iostream>

using namespace std;

class caranga
{
private:    //impeda que os membros sejam alterados fora da classe
    int velmax;
public:
    int pot;
    const char* nome;

    //polimorfismo é quando tem mais de um metodo com o mesmo nome, mas com parâmetros de entrada diferentes
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

    caranga()             //construtor
    {
        cout << "nenhum parametro atribuido! " << "\n";  
    }

    int getvelmax()
    {
        return velmax;
    }
};


int main()
{

    caranga c1{"ferrari", 350};
    caranga c2;
    
    cout << "nome: " << c1.nome << " | " << "potencia: " << c1.pot << " | " << "velocidade: " << c1.getvelmax() << "\n";

    return 0;
}