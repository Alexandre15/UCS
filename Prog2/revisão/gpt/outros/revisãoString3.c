#include <stdio.h>
#include <string.h>

int main(){

    char palavra[50];
    char *ptr;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    for (ptr = palavra; *ptr != '\0'; ptr++)
    {
        if (*ptr != ' ')
        {
            putchar(*ptr);
            putchar(' ');
        }
        
    }
    
}
