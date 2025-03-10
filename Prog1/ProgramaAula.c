#include <stdio.h>

int main(){

float valor;
int real, cent, notas;

printf("Valor? ");
scanf("%f", &valor);
real = (int)valor;
cent = (int)((valor - (float)real) * 100.0);

printf("Reais = %d", real);
printf("\nCentavos %d", cent);

notas = (int)real / 100;
real = real % 100;

printf("\n> %d notas de 100... sobra %d\n", notas, real);

notas = (int)real/50;
real = real % 50;

printf("\n> %d notas de 50... sobra %d\n", notas, real);

notas = (int)real/20;
real = real % 20;

printf("\n> %d notas de 20... sobra %d\n", notas, real);

notas = (int)real/10;
real = real % 10;

printf("\n> %d notas de 10... sobra %d\n", notas, real);

notas = (int)real/2;
real = real % 2;

printf("\n> %d notas de 2... sobra %d\n", notas, real);
printf("\n> %d notas de 1\n", real);
printf("E %d centavos seu calotero kk", cent);

}
