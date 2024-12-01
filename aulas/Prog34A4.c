#include <stdio.h>

int main()
{
   int idx, vetor[6];
   int alterar, posicao, numero;
    
   printf("Programa Basico de Manipulacao de Vetor\n");
   printf("\nEntrada de Dados\n");
   for(idx=0;idx<6;idx++)
   {
      printf("Idx %d: Numero? ",idx);
      scanf("%d",&numero);
      vetor[idx]=numero;
   }
   // Alterar dado em uma posição do vetor
   printf("\nAlterar Dados do Vetor\n");
   printf("Alguma alteracao [0 para NAO]? ");
   scanf("%d",&alterar);
   while(alterar!=0)
   {
     printf("\nQual posicao? ");
     scanf("%d",&posicao);
     while(posicao<1 || posicao>6) // verificar intervalo 
     {
        printf("Posicao fora do intervalo (entrar novamente): ");
        scanf("%d",&posicao);
     }
     printf("Qual numero? ");
     scanf("%d",&numero);
     vetor[posicao-1]=numero; // observar que a primeira posição é 'zero'
     printf("Inserido...\n");
     for(idx=0;idx<6;idx++)  // exibe vetor alterado
        printf("Idx %2d: [%2d]\n",idx,vetor[idx]);
     printf("Outra alteracao [0 para NAO]? ");
     scanf("%d",&alterar);
   }
}
