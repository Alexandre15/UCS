#include <stdio.h>

int main()
{
	long int matricula, verificador;
	int digito, posicao, soma, dv1, dv2;
	
	printf("Matricula? ");
	scanf("%ld",&matricula);
    verificador=matricula;
    soma=0;
    posicao=1;
    while(verificador>0)
    {
       digito=verificador%10;
       if(posicao%2!=0)         // posi��o �mpar
          soma=soma+digito;     // ... soma o d�gito
       else                     // posi��o par
          soma=soma+(2*digito); // ... duplica o d�gito e soma
       posicao++;
       verificador=(int)verificador/10;
    }
    dv2=soma%10;
    dv1=(int)soma/10;
    dv1%=10;
    printf("\nMatricula com DV: %d-%d%d",matricula,dv1,dv2);
}
