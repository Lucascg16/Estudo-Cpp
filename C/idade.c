#include <stdio.h>

int main(){

    int idade, idadeNova;

    printf("Insira a sua idade\n");
    scanf("%d", &idade);

    idadeNova = idade + 2;

    printf("a idade informada foi %d", idade);
    printf(", daqui a dois anos voce tera %d.\n", idadeNova);    
}