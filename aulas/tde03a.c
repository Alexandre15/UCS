#include <stdio.h>

int main() {
    float meta, arrecadacao_equipa1, arrecadacao_equipa2, total_equipe1 = 0, total_equipe2 = 0;
    int dias = 0;

    printf("Meta de arrecadação(kg): ");
    scanf("%f", &meta);

    while (total_equipe1 < meta && total_equipe2 < meta) {
        dias++;
        printf("Digite o peso arrecadado pela equipe 1 no dia %d (kg): ", dias);
        scanf("%f", &arrecadacao_equipa1);
        printf("Digite o peso arrecadado pela equipe 2 no dia %d (kg): ", dias);
        scanf("%f", &arrecadacao_equipa2);
        
        total_equipe1 += arrecadacao_equipa1;
        total_equipe2 += arrecadacao_equipa2;
    }
    float total_geral = total_equipe1 + total_equipe2;
    float media_diaria = (dias > 0) ? (total_geral / dias) : 0;

    printf("\nResultados da campanha:\n");
    printf("Total arrecadado pela equipe 1: %.2f kg\n", total_equipe1);
    printf("Total arrecadado pela equipe 2: %.2f kg\n", total_equipe2);
    printf("Total geral arrecadado: %.2f kg\n", total_geral);
    printf("Dias de campanha: %d\n", dias);
    printf("Média de arrecadação diária: %.2f kg/dia\n", media_diaria);

    if (total_equipe1 > total_equipe2) {
        printf("A equipe 1 arrecadou mais alimentos.\n");
    } else if (total_equipe2 > total_equipe1) {
        printf("A equipe 2 arrecadou mais alimentos.\n");
    } else {
        printf("As duas equipes arrecadaram a mesma quantidade de alimentos.\n");
    }

    return 0;
}