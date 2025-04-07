#include <stdio.h>
#include <string.h>

int main(){

    //char nome[50];             // String com tamanho 50
    //char saudacao[] = "Olá";   // String inicializada (tamanho automático)
    //char *ptr = "Hello";       // Ponteiro para string literal (não modificável em algumas implementações)

    char palavra[50];
    char ori[] = "Bebeie";
    char dest[] = "Alequi";
    char string1[50] = "Danonao ";
    char string2[] = "Danonao";
// ====================================================================================//

    printf("Digite uma string: ");
    scanf("%s", palavra);
    printf("O tamanho da string '%s' e: %d\n", palavra, meulen(palavra));

// ====================================================================================//

    printf("Origem : %s\n", ori);
    printf("Destino: %s\n", dest);
    meucpy(ori, dest);
    printf("Destino: %s\n", dest);

// ====================================================================================//

    meu_concat(string1, string2);
    printf("String concatenada: %s\n", string1);

// ====================================================================================//

    printf("Comparacao: %d\n", meucmp(string1, string2));
    printf("Comparacao2: %d\n", strcmp(string1, string2));

// ====================================================================================//

}

int meucmp(char str1[], char str2[]){
    int i = 0;

    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if (str1[i]!=str2[i])
        {
            return 1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; // Strings iguais (incluindo espaços)
    } else {
        return 1; // Tamanhos diferentes
    }
}


int meu_concat(char dest[], char src[]){

    int i=0, j=0;

    while (dest[i] != '\0') {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}


int meucpy(char origem[], char destino[]){
    int i;
    for (i = 0; origem[i]!='\0'; i++)
    {
        destino[i]=origem[i];
    }
}


int meulen(char nome[]){
    int i=0;
    while (nome[i] != '\0')
    {
        i++;
    }
    return i;
}
