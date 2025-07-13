#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 5
#define MAX 100

void bubbleSort(char nomes[][MAX], int n) {
    char temp[MAX];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                // Troca os nomes de lugar
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }
}

int main() {
    char nomes[TAM][MAX];

    // Leitura dos nomes
    printf("Digite %d nomes:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], MAX, stdin);

        // Remover o \n do final
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    // Ordenar os nomes
    bubbleSort(nomes, TAM);

    // Mostrar os nomes ordenados
    printf("\nNomes em ordem alfabetica:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
