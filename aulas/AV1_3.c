#include <stdio.h>

int main(){

int sala, nota1, nota2, nota3, nota4;
int totalav;
float ind, por;
int sat, insat;

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n   Saida da Sala e avaliacoes");
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

printf("\nDigite a sua sala: ");
scanf("%d", &sala);

printf("Avaliacoes na nota 1: ");
scanf("%d", &nota1);
printf("Avaliacoes na nota 2: ");
scanf("%d", &nota2);
printf("Avaliacoes na nota 3: ");
scanf("%d", &nota3);
printf("Avaliacoes na nota 4: ");
scanf("%d", &nota4);
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

totalav = nota1 + nota2 + nota3 + nota4;

if (totalav<20){
    printf("\nAvaliacao desconciderada!");
}
else{
    insat = nota1 + nota2;
    sat = nota3 + nota4;
    ind = (float)(nota1*1 + nota2*2 + nota3*3 + nota4*4)/totalav;
    printf("\nSala: %d", sala);
    printf("\nIndice: %.2f", ind);
    if (sat>insat){
        por = (float)(sat * 100) / totalav;
        printf("\nAnalise da Avaliacao: Satisfatoria (%.2f%%)", por);
    }
    else if (insat>sat){
        por = (float)(insat * 100) / totalav;
        printf("\nAnalise da Avaliacao: Insatisfatoria (%.2f%%)", por);
    }
}
}
