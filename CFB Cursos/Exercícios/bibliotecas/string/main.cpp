 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <cstdlib>      //biblioteca atualizada do 'stdlib.h'
 #include <string>        //implementa a classes string como objeto(diferente da bib cstring)

using namespace std;

int main()
{     
    string tmp("fazendo outro teste qualquer. 1, 2, 3 testando...");        //objeto tmp recebendo caracteres no construtor.
    //tmp="fazendo outro teste qualquer. 1, 2, 3 testando..."; 
    string::iterator it = tmp.begin();              //'it' recebe o endereço do primeiro índice da string 
    //string::iterator it = tmp.end();              //'it' recebe o endereço do ultimo índice da string (terminador nulo)    
    cout << "tmp: " << tmp << "\n";
    tmp += "teste, teste...";               //adiciona na string
    tmp.pop_back();             //remove o ultimo caractere
    tmp.erase(3, 4);                //remove 3 caractere a partir do terceiro elemento
    tmp.replace(10, 4, "outro");        //substitui os 4 elementos a partir do 10 elemento, por outra string
    cout << "tmp: " << tmp << "\n";
    cout << "tamanho da string tmp: " << tmp.size() << "\n";    //size() chama o tamanho da string
    //cout << "tamanho de string: " << tmp.length() << "\n";    //size() chama o tamanho da string   
    cout << "tamanho maximo da string: " << tmp.max_size() << "\n";    //max_size() retorna o tamanho maximo da string
    cout << "tamanho da string tmp antes de shrink_to_fit(): " << tmp.size() << "\n";    //size() chama o tamanho da string
    tmp.resize(10);     //resize() redimensiona o tamanho da string
    cout << "resize(10) na string: " << tmp << "\n"; 
    tmp.shrink_to_fit();        //redimensiona o tamanho maximo da string para a quantidade de caracteres contido na string.
    cout << "tamanho da string tmp apos shrink_to_fit(): " << tmp.size() << "\n";    //size() chama o tamanho da string
    tmp.clear();            //limpa a string
    cout << "clear: " << tmp << "\n";  
    if(tmp.empty())             //empty() retorna TRUE se a string estiver vazia
    {
        cout << "string vazia!\n"; 
    }

    string tmp2 = "testando a funcao STRING";
    size_t posicao = tmp2.find("funcao");               //retorna o indice da primeira ocorrencia

    cout << "posicao da primeira ocorrencia: " << posicao <<"\n";
    if(posicao != string::npos())
    {
        /* code */
    }
    
    cout << "tmp2: " << tmp2 << "\n";


    return 0;
}