#include <stdio.h>
/*

🧠 Exercício 13 — Copiar string com ponteiros
Crie uma função:

void copiar(char *dest, char *orig)

Que copia uma string orig para dest, usando apenas ponteiros (sem strcpy).

*/

void copiar(char *dest, char *orig) {
    while (*orig != '\0')
    {
        *dest = *orig;
        dest++;
        orig++;
    }
}

int main(){
    char destino[10];
    char origem[] = {"Alequi"};

    char *pd = destino;
    char *po = origem;
    
    copiar(pd, po);

    printf("\nDestino: %s\n", destino);
    printf("Origem: %s\n", origem);
}