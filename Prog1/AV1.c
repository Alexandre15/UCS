#include <stdio.h>

int main(){

int sala, ingressos;
float valor;

printf("=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n TOTEM DE ATENDIMENTO");
printf("\n=-=-=-=-=-=-=-=-=-=-=-=");
printf("\nDigite a sala que você deseja: ");
scanf("%d", &sala);
printf("Digite a quantidade de ingressos: ");
scanf("%d", &ingressos);
printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\nSala Temática: %d", sala);
printf("\nQuantidade de ingressos: %d", ingressos);
if (sala<1 || sala>4){
    printf("\nCódigo de sala temática inválida(Sabe digitar não vacilão?)!!!");
}
else if (sala == 1 || sala == 2){
    valor = 20 * ingressos;
}
else if (sala == 3){
    valor = 40 * ingressos;
}
else if (sala == 4){
    valor = 55 * ingressos;
}
if (ingressos>6){
    valor = valor - (valor * 10/100);
}
else if (ingressos>3){
    valor = valor - (valor * 5/100);
}
printf("\nValor Total: %.2f", valor);
}
