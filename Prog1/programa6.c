#include <stdio.h>

int main(){

float tempMin, tempMax, temperatura, somaTotal=0.0, media;
int mes, contador=0;

printf("\n=-=-=-=-=-=-=-=--=-=-=-=");
printf("\n    CONTROLE DO TEMPO");
printf("\n=-=-=-=-=-=-=-=--=-=-=-=");

printf("\nDigite a temperatura mínima: ");
scanf("%f", &tempMin);

printf("\nDigite a temperatura máxima: ");
scanf("%f", &tempMax);

for (mes = 1; mes <= 12; mes++)
{
    printf("Mes %2d: temperatura? ", mes);
    scanf("%f", &temperatura);
    somaTotal+=temperatura;
    if (temperatura<tempMin)
    {
        contador+=1;
    }
    else if (temperatura>tempMax)
    {
        contador+=1;
    }
    
    
}
media = somaTotal/12.0;
printf("\nMedia das temperaturas = %.2f", media);
printf("Meses de temperatura fora de referencia: %d", contador);

}