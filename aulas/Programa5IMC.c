#include <stdio.h>

int main(){

float peso, altura, imc;

printf("Seu peso: ");
scanf("%f", &peso);

printf("Sua altura: ");
scanf("%f", &altura);

imc = peso / (altura * altura);

if (imc > 25){
    printf("Seu IMC esta acima");
}

else if (imc < 18.5){
    printf("Seu IMC esta abaixo");
}

else{
    printf("Seu IMC esta normal");
}
getch();
}
