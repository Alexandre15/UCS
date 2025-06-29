#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
/*
Desafio 2 — Leitura de dados numéricos com fscanf, espaçamentos aleatórios

📄 Arquivo: numeros.txt

    10    20      30
    5.5 6.6   7.7
    0.0    0.0    10.0
🎯 Objetivo:
    Ler 3 números por linha e imprimir:
    Os três números
    A soma dos três
*/

FILE *arq = fopen("teste3.txt", "r");
if (arq == NULL)
{
    printf("ERRO\n");
}

float n1, n2, n3, soma;

while (fscanf(arq, "%f %f %f", &n1, &n2, &n3) == 3)
{
    soma = 0;
    soma = n1 + n2 + n3;
    printf("%.2f | %.2f | %.2f -> %.2f\n", n1, n2, n3, soma);
}
fclose(arq);

}