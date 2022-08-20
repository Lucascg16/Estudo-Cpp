#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int num;

    cout << "Digite um numero qualquer: ";
    cin >> num;

    if (num <= 10)// C++ permite usar if e else sem chaves quando se tem apenas uma instrucao
        if (num == 10)// porem pode-se usar com chaves tambem, so que ele gera um erro de intelisense e aparentemente nao tem problema 
            cout << "O numero e igual a 10";
        else
            cout << "o numero e menor que 10";
    else
        cout << "O numero maior que 10";

    getch();
    return 0;
}