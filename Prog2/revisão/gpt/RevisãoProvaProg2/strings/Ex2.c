#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[50];
    char str2[50];

    printf("\n|---- COMAPRACAO DE PALAVRAS ----|\n\n");
    printf("Palavra 1: ");
    scanf("%s", str1);
    printf("Palavra 2: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("\n\033[92mAs palavras [%s] e [%s] sao iguais!\033[0m\n\n", str1, str2);
    }
    else
    {
        printf("\n\033[91mAs palavras [%s] e [%s] nao sao iguais.\033[0m\n\n", str1, str2);
    }
}
