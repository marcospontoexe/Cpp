#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

class cadastrar                        //declaração de uma  classe 
{
public:
    //declaração de atributos
    std::string nome;
    std::string genero;                      
    int idade;
    float peso;
    cadastrar(std::string n, std::string gener, int idd, float p);           //construtor da classe
    //prototipar no cabeçalho 'using namespace std' para poder usar string, caso contrário usar 'sdt::string'


               
    ~cadastrar();           //destrutor
};

cadastrar::cadastrar(std::string n, std::string gener, int idd, float p)                  //declaração do construtor com parametros de entrada
{
    nome = n;         
    genero = gener;         
    idade = idd;         
    peso = p;        
}


cadastrar::~cadastrar()             //declaração do destrutor
{
}


#endif