#include <iostream>

using namespace std;

main(){
    int num = 10;
    int *ponteiro;

    cout << ponteiro << endl;//vai mostrar a posicao de memoria
    cout << *ponteiro << endl;//com o * vai mostrar o valor que ele esta apontando
    cout << &num << endl;
    return 0;
}