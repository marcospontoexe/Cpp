 #include <iostream>     //define o fluxo de entrada e saida de dados (cout, cin, cr)
 #include <array>      //biblioteca atualizada do 'stdlib.h'


using namespace std;

int main()
{     
    array <int, 10> num={0,1,2,3,4,5,6,7,8,9};                //array do tipo int com 10 elementos
    cout << "num:\n";
    for (auto i:num)
    {
        cout << i <<"-";
    }
    cout << "\n";
    cout << "num:\n";
    for (auto it = num.begin(); it != num.end(); it++)          //usando iterator
    {
        cout << *it <<"-";
    }

    cout << "tamanho do array 'num': " << num.size() << "\n";               //tamanho do array
    cout << "tamanho maximo do array 'num': " << num.max_size() << "\n";        //número maximo de elementos no array
    if(num.empty())            //caso o array esteja vazio
    {
        cout << "array vazio!\n";
    }

    cout << "elemento da posicao 3: " << num[3] << "\n";   
    cout << "elemento da posicao 0: " << num.front() << "\n";   //retorno o primeiro elemento do array       
    cout << "ultimo elemento do array: " << num.back() << "\n";   //retorno o primeiro elemento do array 
    
    num.fill(5);            //preenche todas as posições com numero 5
    cout << "num:\n";
    for (auto it = num.begin(); it != num.end(); it++)          //usando iterator
    {
        cout << *it <<"-";
    }
    cout << "\n";



    return 0;
}