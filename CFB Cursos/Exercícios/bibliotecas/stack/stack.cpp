#include <iostream>
#include <stack>            //biblioteca para usar pilhas

using namespace std;

int main()
{
    stack <string> nomes;

    cout << "A pilha esta vazia: " << nomes.empty() << "\n";

    nomes.push("marcos");         //adiciona um item à pilha
    nomes.push("ana");
    nomes.push("pedro");  
    nomes.push("dioson");
    nomes.push("valkera");

    cout << "A pilha esta vazia: " << nomes.empty() << "\n";

    cout << "tamanho da pilha: " << nomes.size() << "\n";   
    cout << "ultimo elemento adicionado a pilha (FiLo): " << nomes.top() << "\n";   

    nomes.pop();                //remove o ultimo elemento adicionado à pilha (FiFo)
    cout << "tamanho da pilha: " << nomes.size() << "\n"; 
    cout << "ultimo elemento adicionado a pilha (FiLo): " << nomes.top() << "\n";   

    //remove todos os elementos da pilha
    while (!nomes.empty())
    {
        cout << "ultimo elemento da pilha (FiLo): " << nomes.top() << "\n";  
        cout << "tamanho da pilha: " << nomes.size() << "\n";
        nomes.pop();
    }
    

    return 0;
}