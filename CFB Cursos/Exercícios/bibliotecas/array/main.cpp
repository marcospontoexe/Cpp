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
    
    

    



    return 0;
}