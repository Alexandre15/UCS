#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq = fopen("entrada.txt", "r");
    if(arq == NULL){
        printf("ERRO\n");
        return 1;
    }

    char nome[50];
    float n1, n2, n3, media;
    int aprovados = 0, reprovados = 0;

    while (fgets(nome, sizeof(nome), arq) != NULL)
    {
        if (fscanf(arq, "%f %f %f\n", &n1, &n2, &n3) == 3)
        {
            media = (n1 + n2 + n3) / 3.0;
            if (media >= 5.0)
            {
                aprovados++;
            }
            else 
            {
                reprovados++;
            }   
        }
        printf("Nome: %s", nome);
        printf("Media: %.2f", media);
    }

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    
    fclose(arq);
    return 0;

}