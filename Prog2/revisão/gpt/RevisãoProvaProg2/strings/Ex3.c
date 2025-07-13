#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[50];
    int cont = 0;

    printf("\nDigite uma palavra: ");
    scanf("%s", str1);

    for (int i = 0; i < (int)strlen(str1); i++)
    {
        if (tolower(str1[i]) == 'a')
        {
            cont++;
        }
    }

    printf("Na palavra \033[92m| %s |\033[0m a letra 'a' apareceu %d vezes", str1, cont);
    
}