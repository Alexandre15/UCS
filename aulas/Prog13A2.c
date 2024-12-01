#include <stdio.h>

int main(){

float av1, av2, av3;
float mediafinal;
int conceito;

printf("Digite a primeira nota: ");
scanf("%f", &av1);

printf("Digite a primeira nota: ");
scanf("%f", &av2);

printf("Digite a primeira nota: ");
scanf("%f", &av3);

mediafinal = 6 / (1/av1 + 2/av2 + 3/av3);
//printf("A media final e: %.2f\n", mediafinal);
//mediafinal = mediafinal * 0.4;


//mediafinal = 6 / ((av1/1)+(av2/2)+(av3/3));

printf("A media final e: %.2f\n", mediafinal);

if (mediafinal >= 6){
    printf("Aluno aprovado!");
}

else if (mediafinal < 6){
    printf("Aluno reprovado!");
}

if (mediafinal < 6.0)
    conceito = 0;
    if(mediafinal < 7.0)
        conceito = 1;
    else if(mediafinal < 8.0)
        conceito = 2;
        else if(mediafinal < 9.0)
            conceito = 3;
        else
            conceito = 4;


printf("conceito Final: %d\n", conceito);
}
