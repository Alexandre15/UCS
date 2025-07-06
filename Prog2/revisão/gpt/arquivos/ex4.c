#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *produto;
    float valor;
} Produtos;

void Mfree(Produtos *p, int qty){
    int i;
    for (i = 0; i < qty; i++) {
        free(p[i].produto);
    }
    free(p);
}

int main(){

    int quantidadeP, quantidadeM, i, j, cont = 0;
    float total = 0;
    char buffer[50];
    char nome[50];
    int qty;

    FILE *arq = fopen("ex4.txt", "r");
    if (arq == NULL)
    {
        printf("Erro.\n");
        return 1;
    }
    
    printf("\033[92mLeu arquivo de entrada!\033[0m\n");

    fscanf(arq, "%d", &quantidadeM);
    Produtos *p = malloc(quantidadeM * sizeof(Produtos));
    if (p == NULL)
    {
        printf("Erro ao alocar o vetor Produtos.\n");
        free(p);
        return 1;
    }
    printf("\033[92mAlocou!\033[0m\n");
    
    for (i = 0; i < quantidadeM; i++)
    {
        fscanf(arq, "%s %f", buffer, &p[i].valor);
        p[i].produto = malloc(strlen(buffer) + 1);
        if (p[i].produto == NULL)
        {
            printf("Erro ao alocar produto.\n");
            Mfree(p, i);
            fclose(arq);
            return 1;
        }
        
        strcpy(p[i].produto, buffer);
    }

    fscanf(arq, "%d", &quantidadeP);

    FILE *out = fopen("saidaEx4.txt", "w");
    if (out == NULL)
    {
        printf("Erro ao gerar arquivo!\n");
        Mfree(p, quantidadeM);
        return 1;
    }

    for (i = 0; i < quantidadeP; i++)
    {   
        int achou = 0;
        fscanf(arq, "%s %d", nome, &qty);
        for (j = 0; j < quantidadeM; j++)
        {
            if (strcmp(nome, p[j].produto) == 0)
            {
                total += p[j].valor * qty;
                cont++;
                fprintf(out, "Produto %d: %s\n", j + 1, p[j].produto);
                achou = 1;
                break;
            }
        }
        if (!achou)
        {
            printf("Produto %s nao encontrado.\n", nome);
        }
        

    }

    fprintf(out,"%d Produtos disponiveis\n", cont);
    fprintf(out, "Total R$ %.2f", total);

    Mfree(p, quantidadeM);
    
    fclose(out);  
    fclose(arq);
}
