#include <stdio.h>

int main(){

int ini_minutos, ini_horas;
int fim_minutos, fim_horas;
int hora, minutos;

printf("Horario de inicio (HH:MM)? ");
scanf("%d:%d", &ini_horas, &ini_minutos);

printf("Horario de termino (HH:MM)? ");
scanf("%d:%d", &fim_horas, &fim_minutos);

minutos = (fim_horas*60+fim_minutos) - (ini_horas*60+ini_minutos);

if (minutos < 0){
    printf("Hora inicio posterior a hora de termino.");
    //minutos = (ini_horas*60+ini_minutos) - (fim_horas*60+fim_minutos);
    minutos = -minutos;
}

hora = (int)minutos / 60;
minutos = minutos % 60;
printf("\nTempo de prova = %02d:%02d", hora, minutos);
}
