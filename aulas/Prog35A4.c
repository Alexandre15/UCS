#include <stdio.h>

int main()
{
   int idx, vetor[6];
   int consultar, posicao, numero;
    
   printf("Programa Basico de Manipulacao de Vetor\n");
   printf("\nEntrada de Dados\n");
   for(idx=0;idx<6;idx++)
   {
      printf("Idx %d: Numero? ",idx);
      scanf("%d",&numero);
      vetor[idx]=numero;
   }
   // Consultar dado de uma posição do vetor
   printf("\nConsultar Dados do Vetor\n");
   printf("Alguma consulta [0 para NAO]? ");
   scanf("%d",&consultar);
   while(consultar!=0)
   {
     printf("\nQual posicao? ");
     scanf("%d",&posicao);
     while(posicao<1 || posicao>6) // verificar intervalo 
     {
        printf("Posicao fora do intervalo (entrar novamente): ");
        scanf("%d",&posicao);
     }
     printf("> Posicao %d = %d\n",posicao,vetor[posicao-1]);
                                    // observar primeira posição é 'zero'
     printf("Outra consulta [0 para NAO]? ");
     scanf("%d",&consultar);
   }
}
