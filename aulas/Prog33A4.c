#include <stdio.h>

int main()
{
   int idx, numero, vetor[6];
   // O indexador do vetor é o 'idx', sempre inteiro;
   // e o tamanho do vetor refere-se a quantidade de dados do tipo.
    
   printf("Programa Basico de Manipulacao de Vetor\n");
   // Inserção de dados no vetor
   printf("\nEntrada de Dados no Vetor\n");
   for(idx=0;idx<6;idx++)
   {
      printf("Digitar um numero: ");
      scanf("%d",&numero);
      vetor[idx]=numero;
      printf("> numero %d inserido na posicao %2d\n",numero,idx);
   }
   // Leitura dos dados do vetor
   printf("\nDados no Vetor\n");
   for(idx=0;idx<6;idx++)
      printf("Idx %2d: [%2d]\n",idx,vetor[idx]);
}
