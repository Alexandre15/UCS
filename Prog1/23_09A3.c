#include <stdio.h>
int main(){

int numero, chute, contador=0;

do
{
printf("Numero: ");
scanf("%d", &numero);
if (numero<1 || numero>20)
{
    printf("Intervalo entre 1 e 20\n");
    printf("Digite novamente...\n");
}

} while (numero<1 || numero>20);

do
{
    printf("Chute: ");
    scanf("%d", &chute);
    contador ++;
    if (chute<numero)
    {
        printf("> o numero eh maior.");
    }
    else if (chute>numero)
    {
        printf("< o numero eh menor.");
    }
    
    
} while (chute != numero);

if (contador > 10)
{
    printf("Teve que errar %d vezes pra acertar vacilao", contador);
}
else{
    printf("Acertou depois de %d ", contador);
}

}
