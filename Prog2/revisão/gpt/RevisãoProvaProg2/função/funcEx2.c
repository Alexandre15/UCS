#include <stdio.h>

void maiorDeIdade(int x){
    if (x >= 18)
    {
        printf("Maior de idade! ( %d Anos )", x);
    }
    else
    {
        printf("Menor de idade! ( %d Anos )", x);
    }
    
}

int main(){

    int idade;
    printf("Qual e sua idade: ");
    scanf("%d", &idade);
    maiorDeIdade(idade);
}
