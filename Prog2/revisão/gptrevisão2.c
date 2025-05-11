#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30];
    char *ptr = palavra;
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    ptr = strlen(palavra);

    for (ptr = strlen(palavra)-1; *ptr != 0; ptr--)
    {
        
        printf("%d", *ptr);
    }
    


}