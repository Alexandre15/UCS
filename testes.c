#include <stdio.h>

int main(){

    float nota=1;
    int atletas, idx;

    printf("Atletas: ");
    scanf("%d", &atletas);

    for (idx = 0; idx < 12; idx++)
    {
        nota = (int)atletas / 10;
        nota = nota % 10;
        printf("Nota: %f\n", nota);
    }
}
/*
dv2=dv%10;
dv1=(int)dv/10;
dv1%=10;
*/