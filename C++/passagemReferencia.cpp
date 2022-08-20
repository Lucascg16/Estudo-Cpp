#include <iostream>
#include <string>

using namespace std;

void mostrar_numero( int &);// essa forma que eu vou deixar e a passagem por referencia.

// quando se passa por referencia, tanto referencia propriamente dita ou por ponteiro nao e necessario especificar a variavel de entrada 
// passagem por ponteiro usa-se um * na frente da variavel de entrada, e na variavel de passagem o &    
// passagem por valor e igual a encontrada em java

int main(){
    int num = 9;
    
    mostrar_numero( num );
    
    cout <<  num << endl;
    return 0;
}

void mostrar_numero( int &num) {//deve indicar que e uma referencia alem de colocar o nome da variavel
    num++;
    cout << "numero: " <<  num << endl;
}