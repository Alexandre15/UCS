#include <stdio.h>

int main(){

int bosonaro, lulabolusco, marinatarzan, branco;
int votosTotais;
float pB, pL, pM, brancoP;

printf("Votos Bosonaro: ");
scanf("%d", &bosonaro);

printf("Votos Lulabolusco: ");
scanf("%d", &lulabolusco);

printf("Votos MarinaTarzan: ");
scanf("%d", &marinatarzan);

printf("Votos em branco: ");
scanf("%d", &branco);

votosTotais = bosonaro + lulabolusco + marinatarzan + branco;

pB = (float)bosonaro / votosTotais*100.0;
pL = (float)lulabolusco / votosTotais*100.0;
pM = (float)marinatarzan / votosTotais*100.0;
brancoP = (float)branco / votosTotais*100.0;

printf("Percentual de Bosonaro %d votos (%.2f%%)\n", bosonaro, pB);
printf("Percentual de Lulabolusco %d votos (%.2f%%)\n", lulabolusco, pL);
printf("Percentual de MarinaTarzan %d votos (%.2f%%)\n", marinatarzan, pM);
printf("Percentual de Brancos %d votos (%.2f%%)\n", branco, brancoP);

if (pB > 50.0){
    printf("\nCandidato Bosonaro venceu!");
}
else if (pL > 50.0){
    printf("\ncandidato Lulabolusco venceu!");
}
else if (pM > 50.0){
    printf("\n Candidato MarinaTarzan venceu");
}
else{
    printf("Elições em segundo turno.");
}
}
