 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <utility>        //

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
    
    return 0;
}