#include <stdio.h>
/*
🧠 Exercício 2 — Imprimir endereços de memória
Crie um programa que:

    Declare três variáveis do tipo int, float e char.
    Use ponteiros para cada uma.
    Imprima os endereços de memória delas.

*/
int main(){
    int inteiro = 10;
    float decimal = 3.14;
    char caractere = 'A';

    int *p_inteiro = &inteiro;
    float *p_decimal = &decimal;
    char *p_caractere = &caractere;

    printf("Endereco da variavel int: %p\n", p_inteiro);
    printf("Endereco da variavel float: %p\n", p_decimal);
    printf("Endereco da variavel inteiro: %p\n", p_caractere);

}