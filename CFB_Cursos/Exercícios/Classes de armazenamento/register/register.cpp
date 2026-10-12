#include <iostream>

using namespace std;

/*
- 'register' pede ao compilador para guardar a variável num registrador do processador, e não na memória RAM,
  o que deixaria o acesso mais rápido. É só um pedido: o compilador pode ignorar.
- No C++11 a palavra 'register' passou a ser obsoleta (deprecated), e no C++17 ela foi removida:
  'register int x;' não compila mais. Os compiladores modernos já escolhem sozinhos o que vai para os registradores.
*/

#if __cplusplus < 201703L               //__cplusplus informa a versão do C++ usada na compilação (201703 = C++17)
    #define REGISTRADOR register        //até o C++14 a palavra 'register' ainda existe
#else
    #define REGISTRADOR                 //do C++17 em diante a palavra é omitida, e a variável vira uma variável comum
#endif

int main()
{
    REGISTRADOR int temp = 10;          //se possível, o programa armazena a variável no registrador, e não na memória ram
    REGISTRADOR long soma = 0;

    for(REGISTRADOR int i = 1; i <= 1000; i++)      //contadores de laço eram o uso clássico do 'register', pois são acessados a todo momento
    {
        soma += i;
    }

    cout << "temp = " << temp << "\n";
    cout << "soma de 1 a 1000 = " << soma << "\n";
    cout << "versao do C++ (__cplusplus): " << __cplusplus << "\n";

    return 0;
}
