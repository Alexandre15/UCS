#include <stdio.h>

int main(){

int sala, lugar, ingresso;

printf("=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n   ENTRADA DO EVENTO");
printf("\n=-=-=-=-=-=-=-=-=-=-=-=");

printf("\nDigite o número do seu ingresso: ");
scanf("%d", &ingresso);
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

sala = (ingresso % 10000000)/1000000;
lugar = (ingresso % 1000000)/10000;
printf("\nSala: %d", sala);
printf("\nLugar: %d", lugar);
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}