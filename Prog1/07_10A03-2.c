#include <stdio.h>

int main(){
long int numero, aux;
int digito, dv=0, posicao=1, dv1, dv2;

printf("Numero da Matricula: ");
scanf("%ld", &numero);
aux=numero;

while (aux>0)
{
    digito=aux%10;
    printf("\n> Digito = %d", digito);
    if (posicao%2!=0){
        dv+=digito;
    }
    else{
        dv=dv+(digito*2);
    }
    aux=(int)aux/10;
    posicao++;
}
dv2=dv%10;
dv1=(int)dv/10;
dv1%=10;
printf("\nNumero com DV: %ld - %d%d", numero, dv1, dv2);
}
