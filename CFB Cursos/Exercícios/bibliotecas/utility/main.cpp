 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <utility>        //para usar pair

using namespace std;
/*
struct dobrar
{
    int n;
    int dobro()
    {
        return n*2;
    }
};

int soma(int a, int b)
{
    return a+b;
}
*/
int main()
{
    auto n1{10}, n2{5};
    cout << "numero_1: "<< n1 << " | numero_2: "<< n2 << "\n";
    swap(n1, n2);
    cout << "swap(n1, n2): " << "\n";
    cout << "numero_1: "<< n1 << " | numero_2: "<< n2 << "\n";  

    pair<int, int> p1;              //declaração de variáveis do tipo pair 
    pair<int, char> p2;
    pair<float,string>p3;
    p1 = make_pair(1,5);            //adicionando um valor ao pair
    p2=make_pair(10, 'A');              //char usa ' '
    p3 = make_pair(55.6, "marcos");     //string usa " "
    cout << "p1: " << p1.first << " | " << p1.second << "\n";
    cout << "p2: " << p2.first << " | " << p2.second << "\n";
    cout << "p3: " << p3.first << " | " << p3.second << "\n";

    
    return 0;
}