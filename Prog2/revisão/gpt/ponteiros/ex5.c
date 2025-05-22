#include <stdio.h>
/*

🧠 Exercício 5 — Array com ponteiro
Crie um array de 5 inteiros e use um ponteiro para:

    Preencher o array com múltiplos de 10.
    Imprimir todos os elementos usando notação de ponteiros (*(p + i)).

*/

int main(){
    int array[5], i;
    int *p = array;

    for (i = 0; i < 5; i++)
    {
        *(p + i) = i * 10;
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("Valor: %d\n", *(p + i));
    }
}