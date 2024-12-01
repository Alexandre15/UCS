#include <stdio.h>
#include <iostream>

int main(){

int ingresso, sala, lugar;

printf("Numero da disgrama do ingresso: ");
scanf("%d", &ingresso);

sala = (int)ingresso / 1000000;
sala = sala % 10;

lugar = (int)ingresso / 10000;
lugar = lugar % 100;

printf("\nSala: %d", sala);
printf("\nLugar: %d", lugar);


if(sala % 2 == 0){
    printf("\nBloco B");
    printf("\nE no B pq a disgrama do resto da divisao da sala por 2 da 0(PAR)");
}

else{
    printf("\nBloco A");
    printf("\nE no A pq a disgrama do resto da divisao da sala por 2 não da 0(IMPAR)");
}
getch();
}
