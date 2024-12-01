#include <stdio.h>

int main(){
    int i;
    float menor=0, maior=0, aux, temperaturas[12], soma=0, media;

    for (i=1; i <= 12; i++)
    {
        printf("Digite a temperatura do mes %d: ", i);
        scanf("%f", &aux);
        temperaturas[i-1] = aux;
        soma += aux;

        if (menor==0 && maior==0)
        {
            menor = aux;
            maior = aux;
        }
        else if (aux > maior)
        {
            maior = aux;
        }
        else if (aux < menor){
            menor = aux;
        }
    }

    printf("\nTEMPERATURAS MEDIAS NO ANO\n");

    for (i=1; i <= 12; i++){
        printf("As temperaturas medias sao: %.2f\n", temperaturas[i-1]);
    }
    media = soma / 12;
    printf("A media anual = %.2f\n", media);

    for (i=1; i <= 12; i++){
        printf("\nTemperatura mes %d ", i);
        if (temperaturas[i-1] < media)
        {
            printf("ABAIXO da media %.2f", temperaturas[i-1]);
        }
        else{
            printf("ACIMA da media %.2f", temperaturas[i-1]);
        }
        if (temperaturas[i-1]==menor)
        {
            printf(" * MENOR TEMPERATURA REGISTRADA");
        }
        else if(temperaturas[i-1]==maior){
            printf(" * MAIOR TEMPERATURA REGISTRADA");
        }
        
    }
    
}