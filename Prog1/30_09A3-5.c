#include <stdio.h>

int main(){

int numero, c, fatorial;

printf("Digite um numero para calcular seu fatorial: ");
scanf("%d", &numero);

fatorial=numero;
for (c=numero-1; c>=1; c--){
    fatorial*=c;
}
printf("\n%d", fatorial);

}
