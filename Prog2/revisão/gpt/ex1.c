#include <stdio.h>
#include <string.h>

int main(){

    char palavra[10];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A Saida e %c%c", palavra[0], palavra[strlen(palavra) - 1]);

}