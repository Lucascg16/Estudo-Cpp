#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int opc;
// ainda nao irei fazer um menu por que eu nao sei como que se faz uma funcao no C++
//e incrivelmente parecido com java, porem sem jvm, legal.
    while (opc != 0)
    {
        cout << "Digite um numero entre 1 e 3: " << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "ola1" << endl;
            break;
        case 2:
            cout << "ola2" << endl;
            break;
        case 3:
            cout << "ola3" << endl;
            break;
        default:
            cout << "esse numero nao esta entre 1 e 3." << endl;
            break;
        }
        getch();
    }
    return 0;
}