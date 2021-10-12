#include <iostream>
#include <deque>            //biblioteca para usar filas dupla. è possível excluir e incluir no inicio e também no final. Também é possivel usar iterator

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

    nomes.pop();                //remove o primeiro elemento adicionado à fila (FiFo)
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
