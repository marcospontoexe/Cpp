 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <vector>      
 #include <algorithm>   //funções para trabalhar com coleções
 

using namespace std;
void imp(auto a);

int main()
{     
    vector<int> vt{0,-2,4,5,6,8};
    cout << "vt: ";
    imp(vt);
    cout << "\n";
    
    if(all_of(vt.begin(), vt.end(), [](auto i){return i%2==0;}))            //caso todos os elementos sejam pares
    {
        cout << "Todos elementos sao pares!\n";
    }
    else
    {
        cout << "Nem todos os elementos sao pares!\n";
    }
        
    if(any_of(vt.begin(), vt.end(), [](auto i){return i%2==1;}))            //caso algum elemento seja impar
    {
        cout << "eh impar!\n";
    }
    else
    {
        cout << "nehum numero impar!\n";
    }

    if(none_of(vt.begin(), vt.end(), [](auto i){return i<0;}))            //retorna false caso algum elemento retorne false
    {
        cout << "existe numero positivo!\n";
    }
    else
    {
        cout << "existe numero negativo!\n";
    }

    cout << "Dobro: ";
    for_each(vt.begin(), vt.end(), [](auto i){cout << i*2 << " ";});           //aplica a função lambda para todos os elementos da coleção
    cout << "\n";

    auto it = find(vt.begin(), vt.end(), 4);       //retorna o endereço da busca, caso não ache retorna um negativo
    cout << "resutado da busca: " << *it << "\n";

    auto it2 = find_if(vt.begin(), vt.end(), [](auto i){return i%2==1;});  //caso a lambda seja verdadeira, retorna o endereço da busca, caso não ache retorna um numero grande
    cout << "primeiro impar: " << *it2 << "\n";

    cout << "quantidade de numeros 1: " << count(vt.begin(), vt.end(),1) << "\n";       //retorna a quantidade de valores encontrados

    cout << "quantidade de numeros pares: " << count_if(vt.begin(), vt.end(), [](auto i){return i%2==0;}) << "\n";       //retorna a quantidade de valores encontrados, caso a condição seja atendida

    replace(vt.begin(), vt.end(), 4, 2);       //substitui os elementos '4' por '2'
    cout << "apos 'replace': ";
    imp(vt);
    cout << "\n";
 
    /* outras funções
    equal = verifica se os elementos de uma coleção são iguais a outra coleção. os elementos precisam estar na mesma ordem
    search = pesquisa se uma coleção esta em outra. 
    copy = substitui os elementos de uma coleção para outra
    copy_if = substitui os elementos de uma coleção para outra, apenas quando a condição é verdadeira
    move = retira de uma coleção e passa para outra
    swap = troca os elementos de uma coleção para outra
    fill = preenche uma coleção com um valor especificado
    remove = remove um valor indicado
    reverse = inverte a ordem
    sort = reordena os elementos em ordem crescente
    is_sorted = retorna true caso a coleção esteja ordenada
    merger = mescla duas coleções em uma terceira coleção 
    */

    return 0;
}

void imp(auto a)
{
    for(auto i:a)
    {
        cout << i << " ";
    }
    
}