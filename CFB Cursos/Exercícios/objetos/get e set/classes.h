#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

class veiculo                        //declaração de uma  classe 
{
public:
    //declaração de atributos                
    int vel, tipo;
    std::string nome;
    veiculo(int t);           //construtor da classe

    //declaração de atributos 
    int getvelmax();
    

    //prototipar no cabeçalho 'using namespace std' para poder usar string, caso contrário usar 'sdt::string'
    //~veiculo();           //destrutor
private:

    int velmax;
    bool ligado;
    void setvelmax(int v);

               

};

int veiculo::getvelmax()
{
    return velmax;
}

void veiculo::setvelmax(int v)
{
    velmax = v;
}

veiculo::veiculo(int t)                  //declaração do construtor com parametros de entrada (1=carro, 2=avião, 3=navio)
{
    tipo = t;
    if(tipo == 1)
    {
        nome = "Carro";
        velmax = 200;
    }        
        if(tipo == 2)
    {
        nome = "Aviao";
        velmax = 400;
    }
        if(tipo == 3)
    {
        nome = "Navio";
        velmax = 80;
    }
}



/*
cadastrar::~veiculo()             //declaração do destrutor
{
}
*/

#endif