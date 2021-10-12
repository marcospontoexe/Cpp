#include <iostream>
#include <deque> //biblioteca para usar filas dupla. è possível excluir e incluir no inicio e também no final. Também é possivel usar iterator

using namespace std;
void impdq(auto d);


int main()
{
    deque<int> dq1;
    deque<int> dq2(10,5);           //preenche com 10 elementos, todos com numero 5
    deque<int> dq3(dq2);
    deque<int> dq4{0,1,2,3,4,5,6,7,8,9};

    cout << "dq2: ";
    impdq(dq2);
    cout << "\n";

    cout << "tamanho de 'dq2': " << dq2.size() << "\n";               //tamanho da deque
    cout << "tamanho maximo de 'dq2': " << dq2.max_size() << "\n";        //número maximo de elementos de deque
    dq2.resize(5,1);            //aletra a deque para 5 elementos
    cout << "dq2: ";
    impdq(dq2);
    cout << "\n";
    cout << "tamanho de 'dq2': " << dq2.size() << "\n";               //tamanho da deque

    cout << "dq4: ";
    impdq(dq4);
    cout << "\n";
    cout << "dq4[2]: " << dq4[2] << "\n";
    cout << "primeiro elemento de dq4: " << dq4.front() << "\n";
    cout << "ultimo elemento de dq4: " << dq4.back() << "\n";  

    dq4.push_front(10);     //isere no inicio  
    dq4.push_back(10);     //isere no inicio  
    cout << "dq4: ";
    impdq(dq4);
    cout << "\n";
    dq4.pop_front();     //removo no inicio  
    dq4.pop_back();     //removo no inicio      
    cout << "dq4: ";
    impdq(dq4);
    cout << "\n";

    deque<int>::iterator it;
    it = dq4.begin();
    dq4.insert(it, 200);            //insere no inicio
    dq4.insert(it+3, 200);
    cout << "dq4: ";
    impdq(dq4);
    cout << "\n";    
    dq4.erase(dq4.begin());            //remove no inicio
    dq4.emplace(dq4.begin()+2, 100);                  //adiciona o elemento sem remover o elemento daquela posição
    cout << "dq4: ";
    impdq(dq4);
    cout << "\n"; 
    dq4.swap(dq2);
    cout << "dq4: ";
    impdq(dq4);
    cout << "\n"; 

    dq4.clear(); 
    if(dq4.empty())             //empty() retorna TRUE se a deque estiver vazia
    {
        cout << "dq4 vazia!\n"; 
    }

    return 0;
}

void impdq(auto d)
{
    for(auto i:d)
    {
        cout << i << " ";
    }
    
}