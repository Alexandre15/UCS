#include <stdio.h>

int main(){

int n, qtermos;
float termo, numero;

printf("PI Razao de convergencia por Leibniz\n");
printf("Quantos termos? ");
scanf("%d", &qtermos);

numero = 0.0;
printf("Serie: %.5f\n", numero);

for (n=0;n<qtermos;n++)
{
    termo =4.0/((2.0*n)+1.0);
    if (n%2==0)
    {
        numero+=termo;
        printf("         + %.5f\n", termo);
    }
    else{
        numero-=termo;
        printf("         - %.5f\n", termo);
    }
    
    
}

printf("\nNumero Final = %.8f", numero);


}