#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

class veiculo
{
public:
    int velocidade, rodas, blindagem;
    void settipo(int t);
    void setvelmax(int v);
    void setligado(bool l);
    void setarma(bool a);
    void imprime();

private:
    int tipo, velmax;
    bool ligado, arma;

};

void veiculo::settipo(int t)
{
    tipo = t;
}
void veiculo::setvelmax(int v)
{
    velmax = v;
}
void veiculo::setligado(bool l)
{
    ligado = l;
}
void veiculo::setarma(bool a)
{
    arma = a;
}  

void veiculo::imprime()
{
    std::cout << "Tipo.............. : " << tipo << "\n";
    std::cout << "Rodas............. : " << rodas << "\n";
    std::cout << "Velocidade........ : " << velocidade << "\n";
    std::cout << "Velocidade maxima. : " << velmax << "\n";
    std::cout << "Ligado............ : " << ligado << "\n";
    std::cout << "Blindagem......... : " << blindagem << "\n";
    std::cout << "Armas............. : " << arma << "\n";
    std::cout << "------------------------" << "\n";
}

class moto:public veiculo               //classe filha da classe veiculo
{
public:
    moto();
    //int veiculo::velocidade = 120;

};

moto::moto()
{
    velocidade = 0;
    rodas = 2;
    blindagem = 0;
    settipo(1);
    setligado(true);
    setarma(false);
    setvelmax(120);
}

class carro:public veiculo
{
public:
    carro();
};

carro::carro()
{
    velocidade = 0;
    rodas = 4;
    blindagem = 2;
    settipo(2);
    setligado(true);
    setarma(false);
    setvelmax(200);    
}


#endif