#include <stdio.h>

int main() {
    int i;
    int nota;
    int soma = 0;
    int menor, maior;
    int cont_menor = 0, cont_maior = 0;

    for (i = 0; i < 20; i++) {
        printf("Digite a nota do avaliador %d (entre 1 e 19): ", i + 1);
        scanf("%d", &nota);

        while (nota < 1 || nota > 19) {
            printf("Nota inválida! Digite novamente (entre 1 e 19): ");
            scanf("%d", &nota);
        }

        soma += nota;

        if (i == 0) {
            menor = nota;
            maior = nota;
            cont_menor = 1;
            cont_maior = 1;
        } else {
            if (nota < menor) {
                menor = nota;
                cont_menor = 1;
            } else if (nota == menor) {
                cont_menor++;
            }

            if (nota > maior) {
                maior = nota;
                cont_maior = 1;
            } else if (nota == maior) {
                cont_maior++;
            }
        }
    }

    float media = (float)soma / 20;

    printf("\nAvaliação final do serviço: %.2f\n", media);
    printf("Menor nota: %d (atribuída por %d avaliador(es))\n", menor, cont_menor);
    printf("Maior nota: %d (atribuída por %d avaliador(es))\n", maior, cont_maior);

    return 0;
}