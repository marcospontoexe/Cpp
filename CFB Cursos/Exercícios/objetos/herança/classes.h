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
    veiculo();
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

veiculo::veiculo()
{
    velocidade = 0, rodas = 0, blindagem = 0;
    settipo(0);
    setvelmax(0);
    setligado(false);
    setarma(false);
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

class dados
{
public:
    std::string marca, modelo;
    int ano;
    void cadastrardados();
    dados();
    void imprimir();
};

dados::dados()
{
    marca ="", modelo="";
    ano = 0;
}

void dados::cadastrardados()
{
    std::cout << "Marca: ";         std::cin >> marca;
    std::cout << "Modelo: ";        std::cin >> modelo;
    std::cout << "Ano: ";           std::cin >> ano;    
}
void dados::imprimir()
{
    std::cout << "Marca............ : " << marca << "\n"; 
    std::cout << "Modelo......... : " << modelo << "\n";
    std::cout << "Ano............. : " << ano << "\n";  
    std::cout << "------------------------" << "\n";
}
class moto:public dados, public veiculo              //classe filha de multiplas classes pais (veiculo e dados)
{
public:
    moto();

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
    cadastrardados();
}

class carro:public veiculo      //classe filha da classe veiculo
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