#include <iostream>
#include <stdarg.h>

using namespace std;

int soma (const int count, ...);//count obviamente nao deve mudar

int main(){// nao entendi o sendido disso
    int quantidade;
    

    cout<< "Quantidade de valores a ser somado" << endl;
    cin >> quantidade;
    int vetor[quantidade];
    
    for(int i = 0; i < quantidade; i++){
        cout << "Valor a ser somado" << endl;
        cin >> vetor[i];
    }
    cout << soma( quantidade, vetor) << endl;
    return 0;
}

int soma (const int count, ...){
    va_list lista;//cria uma lista com os parametros que foram passados
    int total = 0;//valor se sera somado por todos os parametros

    va_start( lista, count);//pega a lista te parametros com a quantidade especificada
    for( int i = 0; i < count; i++){
        total += va_arg( lista, int);//faz a soma da variavel total com todos os parametros que foram passados
    }
    va_end(lista);//fecha a lista apos termino da soma 
    return total;//retorno da funcao
}