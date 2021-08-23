#include <iostream>

using namespace std;

int main(void)
{
    int cor, transp;

    cout << "Escolha uma cor: \n1 - Branco. \n2 - Azul. \n3 - Verde.\n";
    cin >> cor;

    switch (cor)
    {
        case 1:
            cout << "Voce escolheu a cor Branco!";
            break;
        
        case 2:
            cout << "Voce escolheu a cor Azul!";
            break;

        case 3:
            cout << "Voce escolheu a cor Verde!";
            break;
    
        default:
            cout << "Opcao invalida!\n";
            break;
    }

    cout << "Escolha um transporte: \n1, 2, 3 - Carro. \n4, 5, 6 - Aviao. \n7, 8, 9 - Onibus.\n";
    cin >> transp;

    switch (transp)
    {
        case 1:
        case 2:
        case 3:
            cout << "Voce escolheu a cor Carro!";
            break;        
        case 4:
        case 5:
        case 6:
            cout << "Voce escolheu a cor Aviao!";
            break;

        case 7:
        case 8:
        case 9:
            cout << "Voce escolheu a cor Onibus!";
            break;
    
        default:
            cout << "Opcao invalida!";
            break;
    }

    return 0;
}