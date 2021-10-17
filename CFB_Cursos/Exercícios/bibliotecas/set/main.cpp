 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <set>         //os elementos adicionados ao 'set' são organizados em ordem crescente. Não é possível adicionar elementos repetidos 
 

using namespace std;

int main()
{     
    set<int> st{2,6,5,3,4,8,9,7,7,7,8,0};
    cout << "st: ";
    for(auto it=st.begin(); it != st.end(); it++)          //usando iterator
    {
        cout << *it << " ";
    }
    cout << "\n";

    set<int>::iterator itt;
    itt = st.begin();              //iterator recebe o endereço do primeiro indice do set
    st.insert(itt, 22);             //isere o numero 22 no inicio do set, porem o set reorganiza em ordem crescente
    itt = st.end();              //iterator recebe o endereço do ultimo indice do set
    st.insert(itt, 1);             //isere o numero 1 no final do set, porem o set reorganiza em ordem crescente
    cout << "st: ";
    for(auto i:st)          
    {
        cout << i << " ";
    }
    cout << "\n";

    itt = st.begin();              //iterator recebe o endereço do primeiro indice do vector
    st.erase(itt);                         //remove o primeiro elemento     
    cout << "st: ";
    for(auto i:st)          
    {
        cout << i << " ";
    }
    cout << "\n";

    st.emplace_hint(st.begin(), 55);          //adiciona um elemento caso ainda nao tenha o mesmo elemento no set
    st.emplace_hint(st.begin(), 55);          //adiciona um elemento caso ainda nao tenha o mesmo elemento no set
    cout << "st: ";
    for(auto i:st)          
    {
        cout << i << " ";
    }
    cout << "\n";
    itt = st.find(55);          //retorna o elemento pesquisa caso esse exista no set. Caso não exista o elemento pesquisado retorna o tamanho do set
    cout << "o numero 55 esta no indice: " << *itt << "\n";
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