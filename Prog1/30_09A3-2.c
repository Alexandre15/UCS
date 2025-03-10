#include <stdio.h>

int main(){

int numero, divisor, divisivel=0;
int primeiro=0, ultimo=0;

do {
printf("Numero inicial? ");
scanf("%d", &primeiro);

printf("Numero final? ");
scanf("%d", &ultimo);
if (primeiro<0 || ultimo<0){
    printf("Entrar com numeros naturais...\n");
}
else if (primeiro>ultimo){
    printf("Entrar com o intervalo crescente...\n");
}


} while (primeiro<0 || ultimo<0 || primeiro>ultimo);


for (numero=primeiro; numero<=ultimo; numero++){
    divisivel = 0;
    for(divisor=2; divisor<numero; divisor++){
        if ((numero%divisor)==0){
            divisivel++;
        }
    }
    if (divisivel==0){
        printf("\nO Numero%3d eh primo", numero);
    }
    else{
        printf("\nO Numero%3d nao eh primo", numero);
    }
}
}
