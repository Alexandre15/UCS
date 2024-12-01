#include <stdio.h>

int main(){

float tarifaFixa, tarifaExcedente, total, fixa, Excedente;
int entradah, entradam, saidah, saidam, entrada, saida, permanencia, perH, perM;

printf("Tarifa fixa(em reais)R$ ");
scanf("%f", &tarifaFixa);
printf("Valor por hora excedente(em reais)R$ ");
scanf("%f", &tarifaExcedente);
printf("Horario de entrada(HH:MM): ");
scanf("%d:%d", &entradah, &entradam);
printf("Horario de saida(HH:MM): ");
scanf("%d:%d", &saidah, &saidam);

entrada = (entradah * 60) + entradam;
saida = (saidah * 60) + saidam;

permanencia = saida - entrada;
perH = (int)(permanencia / 60);
perM = ((permanencia / 60.0) - perH) * 60;

if(permanencia <= 120){
    fixa = (permanencia / 60.0) * tarifaFixa;
    total = fixa;
    Excedente = 0;
}

else if (permanencia<360){
    fixa = tarifaFixa * 2;
    Excedente = (((permanencia - 120) / 60.0) * tarifaExcedente);
    total = Excedente + fixa;
}
else{
    fixa = tarifaFixa * 2;
    Excedente = ((permanencia - 360) / 60.0) * (tarifaExcedente / 2) + (4 * tarifaExcedente);
    total = Excedente + fixa;
}

printf("\nPAGAMENTO DO ESTACIONAMENTO");
printf("\nHorario de entrada: %02d:%02d", entradah, entradam);
printf("\nHorario de saida: %02d:%02d", saidah, saidam);
printf("\nTempo de permanencia: %02d:%02d (HH horas completas)", perH, perM);
printf("\nValores = R$ %.2f (ate 2 horas)", fixa);
printf("\n+ R$ %.2f (por hora excedente)", Excedente);
printf("\nValor Total = R$ %.2f", total);

}
