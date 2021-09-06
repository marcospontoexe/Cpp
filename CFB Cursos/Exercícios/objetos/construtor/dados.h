#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

class dados                        //declaração de uma  classe 
{
public:
    //declaração de atributos
    std::string nome;
    std::string genero;                      
    int idade;
    float peso;
    cadastrar(std::string n, std::string gener, int idd, float p);           //construtor do metodo
    //prototipar no cabeçalho 'using namespace std' para poder usar string, caso contrário usar 'sdt::string'


    //dados(/* args */);            
    //~dados();
};

void dados::cadastrar(std::string n, std::string gener, int idd, float p)                  //declaração de métodos
{
    nome = n;         //adiciona ao final do vector
    genero = gener;         //adiciona ao final do vector
    idade = idd;         //adiciona ao final do vector  
    peso = p;         //adiciona ao final do vector  
}

/*
dados::~cadastrar()
{
}
*/

#endif