// FOR

#include <stdio.h>
/*
int main() {
    int N, i;
    int a = 1, b = 1, c;

    printf("Digite o número de termos da Série de Fibonacci: ");
    scanf("%d", &N);

    printf("Série de Fibonacci (usando for):\n");
    for (i = 1; i <= N; i++) {
        if (i == 1 || i == 2) {
            printf("%d ", 1);
        } else {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
    printf("\n");

    return 0;
}
*/
//WHILE
/*
int main() {
    int N, i = 1;
    int a = 1, b = 1, c;

    printf("Digite o número de termos da Série de Fibonacci: ");
    scanf("%d", &N);

    printf("Série de Fibonacci (usando while):\n");
    while (i <= N) {
        if (i == 1 || i == 2) {
            printf("%d ", 1);
        } else {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        i++;
    }
    printf("\n");

    return 0;
}
*/

//DO-WHILE

int main() {
    int N, i = 1;
    int a = 1, b = 1, c;

    printf("Digite o número de termos da Série de Fibonacci: ");
    scanf("%d", &N);

    printf("Série de Fibonacci (usando do-while):\n");
    do {
        if (i == 1 || i == 2) {
            printf("%d ", 1);
        } else {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        i++;
    } while (i <= N);
    printf("\n");

    return 0;
}
