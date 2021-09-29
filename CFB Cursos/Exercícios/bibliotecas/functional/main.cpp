 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <functional>        //manipula objetos de classes externas 

using namespace std;

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

int main()
{
    auto s = bind(soma, 5, 2);      //associa 's' com a função 'soma'
    int n1=2;
    auto n2=cref(n1);               //n2 se referencia em n1
    dobrar d1{5}; 
    auto dob = mem_fn(&d1.dobro);
    
    cout << "soma: "<< s() << "\n";
    cout << "n2: "<< n1 << "\n";
    cout << "d1: "<< dob(d1) << "\n";
    
    
    return 0;
}