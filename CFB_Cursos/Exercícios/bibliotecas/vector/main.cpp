 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <vector>      
 

using namespace std;

int main()
{     
    vector<int> vt{0,1,2,3,4,5,6,7,8,9};
    cout << "vt: ";
    for(auto it=vt.begin(); it != vt.end(); it++)          //usando iterator
    {
        cout << *it << " ";
    }
    cout << "\n";
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

    return 0;
}