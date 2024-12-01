#include <stdio.h>

int main(){

int a1, r1, n, c;
int termo;
int e=0;
int soma=0;


printf("Digite o termo inicial: ");
scanf("%d", &a1);

printf("Digite a razao: ");
scanf("%d", &r1);

printf("Digite o numero determos: ");
scanf("%d", &n);

printf("escolha(PA=1/PG=2): ");
scanf("%d", &e);


termo=a1;
if (e==1){
    printf("\n=-=-=-=-=PA=-=-=-=-=\n");
    for (c=1; c<=n; c++){
        printf("%d, ", termo);
        soma += termo;
        termo=termo+r1;
    }
    printf("\nSoma dos termos = %d", soma);
}
else if (e==2)
{
    printf("\n=-=-=-=-=PG=-=-=-=-=\n");
    for (c=1; c<=n; c++){
        printf("%d ", termo);
        soma += termo;
        termo=termo*r1;
    }
    printf("\nSoma dos termos = %d", soma);
}
}