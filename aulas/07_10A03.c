#include <stdio.h>

int main(){
long int numero, aux;
int digito, dv, posicao;

printf("Numero: ");
scanf("%ld", &numero);
aux=numero;
dv=0;

while (aux>0)
{
    digito=aux%10;
    printf("\n> Digito = %d", digito);
    if (posicao%2==0)
    {
        dv=dv+(digito*2);
    }
    else
    {
        dv+=digito;
    }
    aux=(int)aux/10;
    posicao++;
}

/*for(posicao=1;aux>0;posicao++)
{
    digito=aux%10;
    printf("\n> Digito = %d", digito);
    if (posicao%2==0)
    {
        dv=dv+(digito*2);
    }
    else
    {
        dv+=digito;
    }
    aux=(int)aux/10;
    
}
*/
dv=dv%10;
printf("\nSoma = %d\n", dv);
printf("\nNumero com DV: %ld - %d", numero, dv);

}