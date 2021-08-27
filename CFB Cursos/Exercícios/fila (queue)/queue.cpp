#include <iostream>
#include <queue>            //biblioteca para usar filas

using namespace std;

int main()
{
    queue <string> nomes;

    cout << "A fila esta vazia: " << nomes.empty() << "\n";

    nomes.push("marcos");         //adiciona um item à pilha
    nomes.push("ana");
    nomes.push("pedro");  
    nomes.push("dioson");
    nomes.push("valkera");

    cout << "A fila esta vazia: " << nomes.empty() << "\n";

    cout << "tamanho da fila: " << nomes.size() << "\n";
    cout << "ultimo elemento adicionado a fila (FiFo): " << nomes.back() << "\n";
    cout << "primeiro elemento adicionado a fila (FiFo): " << nomes.front() << "\n";

    nomes.pop();                //remove o primeiro elemento adicionado à pilha (FiFo)
    cout << "tamanho da fila: " << nomes.size() << "\n";    
    cout << "primeiro elemento adicionado a fila (FiFo): " << nomes.front() << "\n";

    //remove todos os elementos da fila
    while (!nomes.empty())
    {
        cout << "primeiro elemento da fila (FiFo): " << nomes.front() << "\n";  
        cout << "tamanho da pilha: " << nomes.size() << "\n";
        nomes.pop();
    }
    

    return 0;
}
