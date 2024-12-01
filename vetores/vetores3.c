#include <stdio.h>

#define NRPESSOAS 3

int main(){

    int idx, abaixo, acima;
    float imc[4];
    float peso, altura;

    for (idx = 0; idx<NRPESSOAS; idx++){

        printf("Pessoa %d (peso e altura)? ", idx+1);
        scanf("%f %f", &peso, &altura);

        imc[idx] = peso/(altura*altura);
    
    }

    abaixo=0;
    acima=0;
    
    printf("\nIMC\n");
    for (idx = 0; NRPESSOAS > idx; idx++){
        if (imc[idx]<18.5)
        {
            abaixo++;
        }
        else if (imc[idx]>=25)
        {
            acima++;
        }

        printf("Pessoa %d = %.2f\n", idx+1, imc[idx]);

    }

    printf("\nResultados da analise\n");
    printf("Pessoas com IMC abaixo = %d (%.2f%%)\n", abaixo, (float)abaixo/NRPESSOAS*100.0);
    printf("Pessoas com IMC acima = %d (%.2f%%)\n", acima, (float)acima/NRPESSOAS*100.0);
    
}