 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <list>      
 

using namespace std;

int main()
{     
    list<int> lst1;
    list<int> lst2(10, 1);              //cria um list com dez elementos, preenchidos com numero 1
    list<int> lst3(lst2);
    list<int> lst4={1,2,3,4,5};


    cout << "lst2: ";
    for(auto it=lst2.begin(); it != lst2.end(); it++)          //usando iterator
    {
        cout << *it << " ";
    }
    cout << "\n";

    cout << "lst4: ";
    for(auto i:lst4)          
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << "tamanho do list 'lst4': " << lst4.size() << "\n";               //tamanho da list
    cout << "tamanho maximo do list 'lst4': " << lst4.max_size() << "\n";        //número maximo de elementos que o list pode ter
    //cout << "elemento da posicao 3: " << lst2[3] << "\n";   
    cout << "elemento da posicao 0: " << lst4.front() << "\n";   //retorno o primeiro elemento do list       
    cout << "ultimo elemento do list 'lst4': " << lst4.back() << "\n";   //retorno o primeiro elemento do list
    lst3.clear();            //exclui todos os elementos do list
    cout << "lst3: ";
    for(auto i:lst3)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst3.assign(10, 0);             //redimensiona um list com 10 posiçoes, preenchidas com zero
    cout << "lst3: ";
    for(auto i:lst3)
    {
        cout << i << " ";
    }
    cout << "\n";

    lst3.assign(lst4.begin(), lst4.end());                //redimensiona um vector com os elemento de outro vector
    cout << "lst3: ";
    for(auto i:lst3)
    {
        cout << i << " ";
    }
    cout << "\n";
    
    lst4.push_back(0);       //adiciona o zero no final 
    lst4.push_front(22);       //adiciona o 22 no inicio      
    cout << "lst4: ";
    for(auto i:lst4)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst4.pop_back();         //exclui o ultimo elemento do list
    lst4.pop_back();         //exclui o ultimo elemento do list
    lst4.pop_front();         //exclui o primeiro elemento do list    
    cout << "lst4: ";
    for(auto i:lst4)
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";
    list <int>::iterator itt;         //declaração do iterator
    itt = lst1.begin();              //iterator recebe o endereço do primeiro indice do list
    lst1.insert(itt, 2);             //isere o numero 2 no inicio do list
    itt++;
    lst1.insert(itt, 0);             //isere o numero 0 no indice 1 do list
    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";
    itt = lst1.end();              //iterator recebe o endereço do ultimo indice do list
    lst1.insert(itt, 5, 2);             //isere cinco 2 a partir do final do list
    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";

    itt = lst1.begin();              //iterator recebe o endereço do primeiro indice do list
    lst1.erase(itt);                         //remove o primeiro elemento     
    //lst1.erase(lst1.begin()+3, lst1.end());        //remove os elementos do indice 5 até o final
    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";

    lst1.swap(lst3);           //os vector trocam de elementos entre eles
    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst1.resize(3);           //redimensiona o vector para ter 3posições
    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";

    lst1.emplace(lst1.begin(), 3);              //insere o 3 no inicio, sem substituir nenhum elemento
    lst1.emplace_back(3);              //insere o 3 no final da list
    lst1.emplace_front(1);              //insere o 1 no inicio da list
    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst1.remove(3);             //remove todos os indices com o elemento 3
    cout << "lst1: ";
    for(auto i:lst1)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst4.push_front(22);       //adiciona o 22 no inicio
    lst4.push_front(13);       //adiciona o 13 no inicio
    lst4.push_front(22);       //adiciona o 22 no inicio
    lst4.push_front(5);       //adiciona o 22 no inicio
    cout << "lst4: ";
    for(auto i:lst4)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst4.sort();            //ordena em ordem crescente
    cout << "lst4: ";
    for(auto i:lst4)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst4.unique();          //remove os elementos repetidos
    cout << "lst4: ";
    for(auto i:lst4)
    {
        cout << i << " ";
    }
    cout << "\n";

    lst4.merge(lst3);               //mescla duas list
    cout << "lst4: ";
    for(auto i:lst4)
    {
        cout << i << " ";
    }
    cout << "\n";
    lst4.reverse();                 //reordena a list em ordem reversa
    cout << "lst4: ";
    for(auto i:lst4)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}