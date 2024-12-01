#include <stdio.h>

int main(){

float taxaDiaria, valorKm, diariaT, descontoT;
int dias, kmRodados, desconto;
float total;

printf("Digite a taxa diaria(em reais)R$ ");
scanf("%f", &taxaDiaria);
printf("Digite o valor por quilometro rodado(em reais)R$ ");
scanf("%f", &valorKm);
printf("Digigite a quantidade de dias da locacao: ");
scanf("%d", &dias);
printf("Quantidade de KM rodados: ");
scanf("%d", &kmRodados);
printf("Desconto a ser aplicado(%%): ");
scanf("%d", &desconto);

descontoT = taxaDiaria - (taxaDiaria * (desconto/100.0)); //aplica desconto se tiver, se não tiver continua valor original
diariaT = dias * descontoT;
total = diariaT + (kmRodados * valorKm);

printf("\n=-=-=-=[EXTRATO DE LOCACAO]=-=-=-=");
printf("\nQuantidade de dias: %d", dias);
printf("\n----------------------------------");
printf("\nValor da diaria: R$%.2f", taxaDiaria);
printf("\n----------------------------------");
printf("\nDesconto aplicado: %d%%", desconto);
printf("\n----------------------------------");
printf("\n+KM rodados: %dkm (valor R$%.2f/km)", kmRodados, valorKm);
printf("\n----------------------------------");
printf("\nValor Total do Aluguel = R$%.2f", total);
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

}
