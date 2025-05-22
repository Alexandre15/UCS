#include <stdio.h>
/*

🧠 Exercício 7 — Contar vogais com ponteiros
Crie uma função int contar_vogais(char *str) que recebe uma string e retorna o número de vogais.

*/

int contar_vogais(char *str) {
    int cont = 0, i, j;
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    for (i = 0; *(str + i) != '\0'; i++)
    {
        printf("[%c]", *(str + i));
        for (j = 0; j < 5; j++)
        {
            if (*(str + i) == vogais[j])
            {
                cont++;
            }
            
        }
    }
    return cont;
    
}

int main(){
    char nome[20] = "anderson";
    
    printf("\nValor: %d",contar_vogais(nome));

}