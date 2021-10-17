#include <iostream>
#include <fstream>            //biblioteca para manipular arquivos de dados
#include <cstdlib>             //para usar system

using namespace std;


int main()
{
    fstream arquivo;
    char continua = 's';
    string temp, linha;

    arquivo.open("dados.txt", ios::out);            //fstream funcionando como modo de saida (sai do programa e entra no arquivo)
    
    while (continua == 's' or continua == 'S')
    {
        cout << "digite algo" << "\n";
        cin >> temp;
        arquivo << temp << " ";
        cout << "continuar? [s/n]: " << "\n" ;
        cin >> continua;
        system("cls");
        while(continua != 's' and continua != 'S' and continua != 'n' and continua != 'N')  
        {
            cout << "Valor incorreto!" <<"\n";
            cout << "continuar? [s/n]: " << "\n" ;
            cin >> continua;
        }
    } 
    cout << "Programa finalizado!" << "\n";
    arquivo.close();

    arquivo.open("dados.txt", ios::in | ios::app);            //fstream funcionando como modo de etrada (sai do arquivo e entra no programa)
    if(arquivo.is_open())        //verifica se o arquivo foi aberto
   {
       while(getline(arquivo, linha))        //lê linha por linha do arquivo
       {
           cout << linha << "\n";
       }
       arquivo.close();
   }
   else
   {
        cout << "erro ao abrir o arquivo";
   }
    return 0;
}