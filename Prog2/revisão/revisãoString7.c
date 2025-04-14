#include <stdio.h>
#include <string.h>
#include <ctype.h>

int int2str(int n, char *str){

    sprintf(str, "%d", n);
}


int main(){

    int numero;
    char palavra[10];

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int2str(numero, palavra);
    printf("%s...\n", palavra);
}
