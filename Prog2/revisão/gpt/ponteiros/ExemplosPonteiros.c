#include <stdio.h>

int main(){
    int n[5] = {10, 20, 30, 40, 50};

    int *p = n;

    printf("Numero na posicao '%p' = %d\n", p, *p); // com ponteiro
    printf("Numero na posicao '%p' = %d\n", &n[0], n[0]); //sem ponteiro

    n[0] = 90;
    printf("Numero na posicao '%p' = %d\n", p, *p); // com ponteiro
    printf("Numero na posicao '%p' = %d\n", &n[0], n[0]); //sem ponteiro

    *p = 45;
    printf("Numero na posicao '%p' = %d\n", p, *p); // com ponteiro
    printf("Numero na posicao '%p' = %d", &n[0], n[0]); //sem ponteiro
}