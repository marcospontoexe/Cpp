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
 
    /* outras finções
    equal = verifica se os elementos de uma coleção são iguais a outra coleção. os elementos precisam estar na mesma ordem
    search = pesquisa se uma coleção esta em outra. 
    copy = substitui os elementos de uma coleção para outra
    copy_if = substitui os elementos de uma coleção para outra, apenas quando a condição é verdadeira
    move = retira de uma coleção e passa para outra
    swap = troca os elementos de uma coleção para outra
    */

    /*
    if(vt.empty())            //caso o vector esteja vazio
    {
        cout << "vector vazio!\n";
    }
    cout << "tamanho do vector 'vt': " << vt.size() << "\n";               //tamanho do vector
    cout << "tamanho maximo do vector 'vt': " << vt.max_size() << "\n";        //número maximo de elementos que o vector pode ter
    cout << "elemento da posicao 3: " << vt[3] << "\n";   
    cout << "elemento da posicao 0: " << vt.front() << "\n";   //retorno o primeiro elemento do vector       
    cout << "ultimo elemento do array: " << vt.back() << "\n";   //retorno o primeiro elemento do vector 
    vt.resize(5);           //redimensiona o vector para ter 5 posições
    cout << "vt: ";
    for(auto i:vt)
    {
        cout << i << " ";
    }
    cout << "\n"; 
    cout << "capacidade maxima de vt: " << vt.capacity() << "\n";       //retorna a capacidade do vector no momento em que foi declarado. 
    vt.shrink_to_fit();                     //deixa a capacidade maxima do vector igual ao numero de elementos
    cout << "capacidade maxima de vt: " << vt.capacity() << "\n";       //retorna a capacidade do vector no momento em que foi declarado. 
    vector <int> vt2;
    vt2.assign(5,0);                //redimensiona um vector com cinco posiçoes, preenchidas com zero
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    vt2.assign(vt.begin(), vt.end());                //redimensiona um vector com os elemento de outro vector
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    vt2.push_back(0);       //adiciona o zero no final  
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    vt2.pop_back();         //exclui o ultimo elemento do vector
    vt2.pop_back();         //exclui o ultimo elemento do vector
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    vector <int>::iterator itt;         //declaração do iterator
    itt = vt2.begin();              //iterator recebe o endereço do primeiro indice do vector
    vt2.insert(itt, 2);             //isere o numero 2 no inicio do vector
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    itt = vt2.begin()+4;              //iterator recebe o endereço do primeiro indice do vector + 4 posições
    vt2.insert(itt, 0);             //isere o numero 0 no indice 5 do vector
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";

    itt = vt2.end();              //iterator recebe o endereço do ultimo indice do vector
    vt2.insert(itt, 5, 0);             //isere cinco zeros a partir do final do vector
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    itt = vt2.begin();              //iterator recebe o endereço do primeiro indice do vector
    vt2.erase(itt);                         //remove o primeiro elemento     
    vt2.erase(vt2.begin()+5, vt2.end());        //remove os elementos do indice 5 até o final
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";

    vt2.swap(vt);           //os vector trocam de elementos entre eles
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    vt2.emplace(vt2.begin()+3, 3);              //inseri o 3 na posição tres, sem substituir nenhum elemento, porem mantem a capacidade maxima

    vt2.clear();            //exclui todos os elementos do vector
    cout << "vt2: ";
    for(auto i:vt2)
    {
        cout << i << " ";
    }
    cout << "\n";
    cout << "tamanho do vector 'vt2': " << vt2.size() << "\n";               //tamanho do vector 
    cout << "tamanho maximo do vector 'vt2': " << vt2.max_size() << "\n";        //número maximo de elementos que o vector pode ter
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