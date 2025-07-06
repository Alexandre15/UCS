#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // usleep()

// Coelho com diferentes expressões dos olhos
void desenhaCoelho(int altura, int frame) {
    const char *olhos;

    // alterna entre olhos normais, piscando e desviando o olhar
    switch (frame % 6) {
        case 0: olhos = "^_^"; break;        // normal
        case 1: olhos = "^_^"; break;        // normal
        case 2: olhos = "-_-"; break;        // piscando
        case 3: olhos = "^_^"; break;        // normal
        case 4: olhos = "._v"; break;        // olhando para direita
        case 5: olhos = "v_."; break;        // olhando para esquerda
    }

    system("cls"); // "cls" no Windows

    for (int i = 0; i < altura; i++) {
        printf("\n");
    }

    printf("  (\\_/)\n");
    printf("  (%s)\n", olhos);
    printf("  / C C \\\n"); // Patinhas e folhinha
}

int main() {
    int frame = 0;

    while (1) {
        // sobe
        for (int i = 5; i >= 0; i--) {
            desenhaCoelho(1, frame++);
            usleep(220000);
        }

        // desce
        for (int i = 0; i <= 5; i++) {
            desenhaCoelho(1, frame++);
            usleep(220000);
        }
    }

    return 0;
}
