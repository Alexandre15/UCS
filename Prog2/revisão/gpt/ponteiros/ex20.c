#include <stdio.h>
/*

🧠 Exercício 20 — Inverter vetor com ponteiros
Crie uma função:

void inverter(int *v, int n)

Que inverte um vetor de inteiros usando ponteiros, sem criar um novo vetor.

*/
void inverter(int *v, int n){
    int i, j;
    int cont = 0;

    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(v + i));
    }
    printf("=-=-=-=-=-=-=-=-=-=-\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("J:%d\n", j);
        v[j] = *(v + i);
        j++;
    }

    printf("=-=-=-=-=-=-=-=-=-=-\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(v + i));
    }

}

int main(){

    int valores[] = {1, 2, 3, 4, 5};

    inverter(valores, 5);
}
