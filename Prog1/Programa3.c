#include <stdio.h>

int main(){

int kminicial, kmfinal, tempomin;
float velocidade, maxima;

printf("KM inicial: ");
scanf("%d", &kminicial);


printf("KM final: ");
scanf("%d", &kmfinal);

printf("Tempo (min): ");
scanf("%d", &tempomin);

printf("Qual a velocidade Maxima permitida(Km/h): ");
scanf("%f", &maxima);

velocidade = (float)(kmfinal - kminicial) / (tempomin/60.0);
printf("Velocidade media = %6.2fKm/h", velocidade);

if (velocidade > maxima){
    printf("\nVelocidade acima da permitida, ta achando que é o BRAIA GARAIO");
}
}