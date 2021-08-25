#include <iostream>

using namespace std;
//em c++ as funções secundárias devem vir antes da função main
float soma(float n1, float n2);             //prototipação da função, ja que foi declarada após o main.   void 
void soma(int a, int b);
// para ometir um parÂmetro de entrada da função, basta atribuir um valor a ele na prototipação da funão.
void texto(string tx = "Voce nao digitou nada!");
void contador(int num, int cont = 0);

int main ()
{
    string testu;
    float res, a, b;
    int x, y, cont;
    cout << "Digite um valor: " << "\n";
    cin >> a;
    cout << "Digite outro valor: " << "\n";
    cin >> b;

    res = soma(a, b);
    cout << "O resutado da soma eh: " << res << "\n";

    cout << "Digite um valor: " << "\n";
    cin >> x;
    cout << "Digite outro valor: " << "\n";
    cin >> y;
    soma(x, y);

    cout << "Escreva algo: \n";
    cin >> testu;
    texto();            //função com parâmetro omitido.

    cout << "Incrementar ate ue numero? \n";
    cin >> cont;
    contador(cont);

    return 0;
}

float soma(float n1, float n2)
{
    return n1+n2;
}

/*
c++ suporta a sobre carga de funções, que ocorre quando há mais de uma funçao com o mesmo nome, mas com parâmetros de entrada de tipos diferentes.
*/
void soma(int a, int b)
{
    cout << "A soma e igual a a: " << (a+b);
}

void texto(string tx)
{
    cout << tx;
}

/*
A recursividade de função acontece quando a própria função chama ela mesma.
*/
void contador(int num, int cont)
{
    cout << cont << "\n";
    if(num > cont)
    {
        contador(num,  ++cont);
    }
}