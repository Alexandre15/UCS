#include <stdio.h>
#include <string.h>
/*

Exercício 10 — Manipulação de strings com ponteiros
Crie uma função void inverter_string(char *str) que inverte uma string no próprio ponteiro, sem criar outro vetor.

Exemplo:
    Entrada: "casa"
    Saída: "asac"

*/

void inverter_string(char *str){
    int i, tamanho = (int)strlen(str);
    char *ponteiro = &str[tamanho];

    for (i = tamanho; i > 0; i--)
    {
        printf("%c", *(ponteiro - 1));
        ponteiro--;
    }
    printf("\n");
    
}

int main(){
    char nome[] = {"Vanderson"};
    char *p = nome;

    printf("Nome: %s\n", p);
    printf("Nome invertido: ");
    inverter_string(nome);

}