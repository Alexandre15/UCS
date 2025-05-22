#include <stdio.h>
#include <string.h>

int main(){

    char palavraSort[50], palavra[] = "ParvoagJr ammea coa"; //ParvoagJr ammea coa
    int i, len=strlen(palavra);
    int meio = len/2;                //Programacao em Java   

    for (i = 0; i < meio; i++)
    {

        palavraSort[i] = palavra[i * 2];

        palavraSort[len - 1 - i] = palavra[i * 2 + 1];
    }

    if (len % 2 != 0)
    {
        palavraSort[meio] = palavra[len - 1];
    }
    

    palavraSort[len] = '\0';

    printf("%s", palavraSort);

}