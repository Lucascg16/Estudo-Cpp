#include <iostream>

using namespace std;

int main(){
    
    int vetor [10];// interessante notar que no caso de C nao e preciso instanciar o vetor
                        // nao usando o comando new que existe em java
                        // quero ver como que vai funcionar com objetos
    // eu vou pular a parte de adicionar valores manualmente

    for (int i = 0; i < sizeof( vetor ); i++){}{//equivalente a .length de java
        cout << vetor << endl;
    }

    return 0;
}