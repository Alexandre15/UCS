#include <stdio.h>

int main(){

int numero=0, divisor=0, divisivel=0;

printf("Numero? ");
scanf("%d", &numero);

for(divisor=1; divisor<numero; divisor++){


if ((numero%divisor)==0){
    divisivel++;
}

printf("%d / %d = Resto = %d\n", numero, divisor, numero%divisor);
}
if (divisivel==1)
{
    printf("\nO Numero%3d eh primo", numero);
}
else{
    printf("\nO Numero %3d nao eh primo", numero);
}
}
