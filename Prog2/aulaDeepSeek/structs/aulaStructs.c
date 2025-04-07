#include <stdio.h>

int main(){


    struct Pessoa
    {
        char nome[50];
        int idade;
        float altura;
    };
    
    struct Pessoa pessoa1 = {"Alequi", 23, 1.8023};
    struct Pessoa pessoa2 = {"Bebeie", 20, 1.60};

    printf("Pessoa 1 %s, %d anos, %.2fm altura\n", pessoa1.nome, pessoa1.idade, pessoa1.altura);
    printf("Pessoa 1 %s, %d anos, %.2fm altura\n", pessoa2.nome, pessoa2.idade, pessoa2.altura);


}