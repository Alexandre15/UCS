#include <stdio.h>

int main(){

int hora_ini, minuto_ini, segundos_ini, horaChegada, minutoChegada, segundoChegada;
int tempo_dprova, tempo_dprovah, tempo_dprovam, tempo_dprovas;
int distancia, tempoT;
float vmedia;

printf("Digite a hora de inicio da prova(HH:MM:SS): ");
scanf("%d:%d:%d", &hora_ini, &minuto_ini, &segundos_ini);

printf("Digite o tempo de prova(s): ");
scanf("%d", &tempo_dprova);

printf("Digite agora a distância percorida(m): ");
scanf("%d", &distancia);

vmedia = distancia / (tempo_dprova/3600.0);

tempo_dprovah = (tempo_dprova/3600);
tempo_dprovam = ((tempo_dprova/3600.0) - tempo_dprovah) * 60;
tempo_dprovas = ((((tempo_dprova/3600.0) - tempo_dprovah) * 60) - tempo_dprovam) * 60;

tempoT = tempo_dprova + hora_ini*3600 + minuto_ini * 60 + segundos_ini;

horaChegada = (tempoT / 3600) % 24; // Garantindo que o horário seja entre 0 e 23
minutoChegada = (tempoT % 3600) / 60;
segundoChegada = tempoT % 60;

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\nTempo de prova = %02d:%02d:%02d", tempo_dprovah, tempo_dprovam, tempo_dprovas);
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\nVelocidade média = %02.2f Km/h", vmedia);
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\nHorario da chegada: %02d:%02d:%02d", horaChegada, minutoChegada, segundoChegada);
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

}
