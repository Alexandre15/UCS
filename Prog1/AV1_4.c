#include <stdio.h>

int main(){

int hentrada, mentrada, hsaida, msaida;
int tempo, tempoh, tempom;
float por;

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n    Certificacao de peranencia");
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

printf("\nDigite seu horario de entrada(HH:MM): ");
scanf("%d:%d", &hentrada, &mentrada);

printf("\nDigite seu horario de saida(HH:MM): ");
scanf("%d:%d", &hsaida, &msaida);

tempo = ((hsaida*60)+msaida)-((hentrada*60)+mentrada);
printf("Tempo em minutos: %d", tempo);
if (hentrada>hsaida||tempo<20){
    printf("\nTempo de Permanencia: 00:00");
    printf("\nTipo de certificacao: Sem certificacao");
}
else if(tempo > 40){
    tempoh = tempo/60;
    tempom = tempo % 60;
    printf("Tempo de Permanencia: %0.2d:%d", tempoh, tempom);
    por = (float)(tempo * 100) / 120;
    printf("\nTipo de certificacao: Certificado de Participacao, Permanencia de %.2f%%", por);
}
else{
    tempoh = tempo/60;
    tempom = tempo % 60;
    printf("Tempo de Permanencia: %0.2d:%d", tempoh, tempom);
    printf("\nTipo de certificacao: Certificado de Presenca");
}
}
