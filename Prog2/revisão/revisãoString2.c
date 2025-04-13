#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char palavra[50];
    char *ptr = palavra;

    printf("\033[32mDigite uma palavra: \033[0m");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    for (i = 0; palavra[i] != '\0'; i++)
    {
        printf("%c%c", *ptr, *ptr);
        ptr++;
    }
}
