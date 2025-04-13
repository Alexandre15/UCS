#include <stdio.h>

int main(){
    int N, i;
    char l[2];

    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("Digite uma letra: ");
    scanf("%s", l);

    for (i = 0; i < N; i++)
    {
        printf("%d Letra: %s\n", i, l);
    }
    

    printf("%d e ", N);
    printf("%s", l);
}