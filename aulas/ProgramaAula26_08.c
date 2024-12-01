#include <stdio.h>
#include <time.h>

int main(){

int menor, maior, aux;

printf("Digitar menor: ");
scanf("%d", &menor);
printf("Digitar maior: ");
scanf("%d", &maior);

if (menor == maior){
    printf("Os valores são iguais!");
}
else if (menor < maior){
    printf("Maior é maior que o menor");
}
else{
    printf("\n Trocar valores... %d <-> %d", menor, maior);
    aux = maior;
    maior = menor;
    menor = aux;
    printf("\nValores trocados menor = %d <-> maior = %d", menor, maior);
}
}
