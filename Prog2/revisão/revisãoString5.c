#include <stdio.h>
#include <string.h>

int palindromo(char *palavra){

    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while (inicio < fim)
    {
        if (palavra[inicio] != palavra[fim])
        {
            return 0;
        }
        
        inicio++;
        fim--;
    }
    
    return 1;
}


int main(){

    char palavra[10];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (palindromo(palavra) == 1)
    {
        printf("E palindromo");
    }
    else{
        printf("Nao e palindromo");
    }
    
}
