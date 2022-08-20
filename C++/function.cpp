#include <iostream>

using namespace std;

int soma ( int a, int b);// mano, pra que fazer isso
int multiplicacao (int a, int b);// parada desnecessaria 
int subtracao (int a, int b);
int divi (int a, int  b);

int main() {
    int a = 10;
    int b = 5;

    cout << soma(a, b) << endl;
    cout << multiplicacao(a, b) << endl;
    cout << subtracao(a, b) << endl;
    cout << divi(a, b) << endl;
    
    return 0;
}

int soma ( int a, int b){
    return (a+b);
}
int multiplicacao (int a, int b){
    return (a*b);
}
int subtracao (int a, int b){
    return (a - b);
}
int divi (int a, int  b){
    return (a/b);
}