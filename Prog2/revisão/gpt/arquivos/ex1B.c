#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){

    float valor, soma = 0;
    int quant = 0;

    FILE *arq = fopen("questao1.bin","rb");
    if (arq == NULL)
    {
        printf("Erro.\n");
        return 1;
    }
    

    while (fread(&valor, sizeof(float), 1, arq) == 1)
    {
        soma += valor;
        quant++;
    }

    if (quant == 0)
    {
        printf("Arquivo vazio.\n");
        fclose(arq);
        return 1;
    }

    float media = soma / quant;

    rewind(arq);

    float menor_maior_igual = -1;
    int primeiro = 1;

    while (fread(&valor, sizeof(float), 1, arq) == 1) //&valor = Ponteiro para a área de memória onde os dados lidos serão armazenados. Tamanho de cada elemento que será lido (em bytes). Ex: sizeof(float). Quantidade de elementos a serem lidos. Ex: 1, 10, etc. Ponteiro para o arquivo aberto (FILE *) "arq".
    {
        printf("Valores: %.2f\n", valor);
        if (valor >= media)
        {
            if (primeiro || valor < menor_maior_igual)
            {
                menor_maior_igual = valor;
                primeiro = 0;
            }   
        }
    }
    
    printf("Media: %.2f\n", media);
    printf("Menor valor >= media: %.2f\n", menor_maior_igual);

    fclose(arq);
    return 0;    
}
