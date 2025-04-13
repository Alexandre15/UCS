#include <stdio.h>
#include <time.h>

int main() {
    const int N = 1000000;
    int i;

    // Variáveis para tempo de início e fim
    clock_t inicio_putchar, fim_putchar, inicio_printf, fim_printf;
    double tempo_putchar, tempo_printf;

    // Teste com putchar
    inicio_putchar = clock();
    for (i = 0; i < N; i++) {
        putchar('A');
    }
    fim_putchar = clock();
    tempo_putchar = (double)(fim_putchar - inicio_putchar) / CLOCKS_PER_SEC;

    printf("\nTempo com putchar: %.4f segundos\n", tempo_putchar);

    // Teste com printf
    inicio_printf = clock();
    for (i = 0; i < N; i++) {
        printf("%c", 'A');
    }
    fim_printf = clock();
    tempo_printf = (double)(fim_printf - inicio_printf) / CLOCKS_PER_SEC;

    printf("\nTempo com printf: %.4f segundos\n", tempo_printf);
    printf("\nTempo com putchar: %.4f segundos\n", tempo_putchar);

    return 0;
}
