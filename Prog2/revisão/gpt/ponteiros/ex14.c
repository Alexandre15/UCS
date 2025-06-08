#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*

🧠 Exercício 14 — Verificar palíndromo com ponteiros
Crie uma função que, usando ponteiros, verifica se uma string é um palíndromo (igual ao contrário). Ignore espaços e letras maiúsculas/minúsculas.

*/

int palindromo(char *str){
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        // Comparar minúsculas
        if (tolower(str[i]) != tolower(str[j])) {
            return 0;  // falso, não é palíndromo
        }
        i++;
        j--;
    }

    return 1;  // verdadeiro, é palíndromo
}

int main(){

    char palavra[] = "lalaL";
    char *p = palavra;

    printf("Palindromo: %d ( %s )", palindromo(p), palavra);
}