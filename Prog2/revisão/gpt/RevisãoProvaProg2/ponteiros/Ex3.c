#include <stdio.h>

int quadrado(int *x){
    return *x * *x;
}

int main() {
    int num = 5;
    printf("O quadrado de %d = %d", num, quadrado(&num));
}
