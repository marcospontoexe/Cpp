#include <iostream>
#include <fstream>            //biblioteca para manipular arquivos de dados

using namespace std;

int main()
{
    ofstream arquivo_out;           //objeto do tipo ofstream
    ifstream arquivo_in;
    string linha;

    arquivo_out.open("dados.txt", ios::app);             //vincula o programa a um arquivo externo
    arquivo_out << "Arquivo de teste" << "\n";          //armazena dentro do arquivo criado.
    arquivo_out << "linha dois"<< "\n";          //armazena dentro do arquivo criado.
    arquivo_out << "linha tres"<< "\n";          //armazena dentro do arquivo criado.
    arquivo_out.close();                        //fecha o arquivo manipulado. Sempre que algo for aberto ou chamado, é importante finalizar apos o uso.    

   arquivo_in.open("dados.txt");
   if(arquivo_in.is_open())        //verifica se o arquivo foi aberto
   {
       while(getline(arquivo_in, linha))        //lê linha por linha do arquivo
       {
           cout << linha << "\n";
       }
       arquivo_in.close();
   }
   else
   {
        cout << "erro ao abrir o arquivo";
   }
    
    return 0;
}