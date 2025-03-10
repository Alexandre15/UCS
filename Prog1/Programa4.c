#include <stdio.h>

int main(){

float temperatura, referencia;

printf("Temperatura (fahrenheit): ");
scanf("%f", &temperatura);

printf("Qual temperatura referenciada (em Celscius): ");
scanf("%f", &referencia);

temperatura = 5.0 * (temperatura - 32.0) / 9.0;
printf("Temperatura = %.2f graus Celsius\n", temperatura);

if (temperatura == referencia){
    printf("Temperatura e referencia estao iguais\n");
    printf("Sensor ta potente(BRABO)");
}

else{
    printf("Ta deferente nene\n");
    printf("Regula essa disgrama! So pode que compro no paraguai");
}
printf("\nLembrar de fazer nova medicao.");

}
