#include <iostream>
#include <fstream>            //biblioteca para manipular arquivos de dados
#include <cstdlib>             //para usar system

using namespace std;


int main()
{
    fstream arquivo;
    string temp, linha;

    arquivo.open("dados.txt", fstream::in |  fstream::out |  fstream::app);            //abre um arquivo para leitura e escrita. caso nao exista cria um arquivo chamado 'dados' 
    /*FLAGS;
   fstream::in = o arquivo funciona no modo de leitura
   fstream::out = o arquivo funciona no modo de escrita
   fstream::binary = modo binario
   fstream::ate = o arquivo funciona no modo de escrita, salvando sempre no final
   fstream::app = o arquivo funciona no modo de escrita sem apagar o conteudo atual, salvando sempre no final. Caso o arquivo não exista, ele é criado
   fstream::trunc = o arquivo funciona no modo de escrita, mas sempre apaga o conteudo salvo antes de abrir    
    */
    if(arquivo.is_open())        //verifica se o arquivo foi aberto
    {
        cout << "Arquivo aberto;\n";
        while(getline(arquivo, linha))        //lê linha por linha do arquivo, armazenando na variável 'linha'
        {
            cout << linha << "\n";
        }
        arquivo << "algo adicionado!\n";             //adiciona no arquivo
    }
    else
    {
        cout << "erro ao abrir o arquivo";
    }
    arquivo.close();

    long pos;
    arquivo.open("dados.txt", fstream::out);       //abre um arquivo apenas para escrita. Sempre apaga os dados antigos onde é salvo dados novos
    arquivo << "escrevendo algo!\n";
    pos = arquivo.tellp();      //recebe a posição do cursor (ponteiro) dentro do arquivo
    cout << "posicao do cursor: " << pos << "\n";
    arquivo.seekp(pos-6);       //muda a posição do cursor
    arquivo << "coisas...";       //sobreescreve o arquivo antigo, pois a flag app nao está habilitada
    pos = arquivo.tellp();      //recebe a posição do cursor (ponteiro) dentro do arquivo    
    cout << "posicao do cursor: " << pos << "\n";    
    arquivo.close();

    return 0;
}