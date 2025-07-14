#include <stdio.h>

void dobrarPorValor(int x) {
    x = x * 2;
}

void dobrarPorReferencia(int *x) {
    *x = *x * 2;
}

int main() {
    int num = 5;

    dobrarPorValor(num);
    printf("Dobrar por valor: %d\n", num);  // ainda 5

    dobrarPorReferencia(&num);
    printf("Dobrar por referencia: %d\n", num);  // agora 10

    return 0;
}
