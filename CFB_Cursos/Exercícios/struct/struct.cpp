#include <iostream>
#include <string>

using namespace std;

struct paciente                //declaração da estrutura
{
    //declaração dos atributos da estrutura
    string nome, sexo;      
    int idade;
    float peso, altura;

    //declaração dos métodos da estrutura
    void cadastrar()     
    {
        cout << "Digite o nome do paciente: ";        
        cin >> nome ;    
        cout << "Sexo: ";
        cin >> sexo ;
        cout << "Idade: ";
        cin >> idade ;
        cout << "Peso: ";        
        cin >> peso;
        cout << "ALtura: ";        
        cin >> altura;
    }

    void mostra()
    {
        cout << "\nDados do paciente: " << "\n";
        cout << "Nome: " << nome << "\n";
        cout << "Sexo: " << sexo << "\n";
        cout << "Idade: " << idade << "\n";
        cout << "Peso: " << peso << "\n";
        cout << "Altura: " << altura << "\n\n";
    }

    float imc(float alt, float pes)
    { 
        return pes / (alt * alt);
    }

};
        
int main()
{
    paciente pac;           //delaração do objeto 'paciente' da estrutura
    string aux=""; 

    pac.nome = "marcos";    //atribuindo um valor a um membro (que pode ser atributo ou um metodo) da estrutura
    pac.sexo = "masculino";
    pac.idade = 30;
    pac.peso = 60.5;
    pac.altura = 1.7;

    cout << "Dados do paciente: " << "\n";
    cout << "Nome: " << pac.nome << "\n";
    cout << "Sexo: " << pac.sexo << "\n";
    cout << "Idade: " << pac.idade << "\n";
    cout << "Peso: " << pac.peso << "\n";
    cout << "Altura: " << pac.altura << "\n";
    cout << "IMC: " << pac.imc(pac.altura, pac.peso) << "\n";    //atribuindo um valor a um membro (que pode ser atributo ou um metodo) da estrutura
    
    paciente *cliente = new paciente[3];                //declaração de array com tres índices
    paciente pac1, pac2, pac3;

    cliente[0] = pac1;
    cliente[1] = pac2;
    cliente[2] = pac3;

    for (int i = 0; i < 3; i++)
    {
        cliente[i].cadastrar();                
    }

    for (int i = 0; i < 3; i++)
    {
        cliente[i].mostra();
    }
    
    



   


   return 0;
}