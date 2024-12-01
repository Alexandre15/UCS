#include <stdio.h>
#include <conio.h>

int main()
{
	long int numero, cripto;
	int dgnumero, posicao, chave, dgcripto;
	
	printf("Numero: ");
	scanf("%ld",&numero);
	do {
	  printf("Chave: ");
	  scanf("%d",&chave);
    } while(chave<1 || chave>9);
    
    // Criptografia do n�mero...
   	printf("\nCriptografando...\n");
    printf("D > dC\n");
    cripto=0;
    posicao=1;  // para colocar o d�gito na posi��o do criptografado
    while(numero>0)
    {
       dgnumero=numero%10;               // separa d�gito do n�mero
	   //printf("%d > ",dgnumero);
       dgcripto=(dgnumero+chave)%10;     // criptografa d�gito cfe chave
       //printf(" %d",dgcripto);
       cripto=cripto+(dgcripto*posicao); // coloca digito no criprografado
       posicao=posicao*10;               // e prepara para pr�xima posi��o
       //printf(" [%ld]\n",cripto); getch();
	   numero=(int)numero/10;            // atualiza para pr�ximo d�gito
    }
	printf("\nCriptografado = %ld\n",cripto);
	
	// Decriptografia do n�mero...
   	printf("\nDecriptografando...\n");
    printf("dC > D\n");
    posicao=1;  // para colocar o d�gito na posi��o do n�mero
    while(cripto>0)
	{
	   dgcripto=cripto%10;               // separa d�gito do criptografado
       printf(" %d > ",dgcripto);
       dgnumero=(dgcripto-chave)%10;     // decriptografa d�gito cfe chave
       if(dgnumero<0)
         dgnumero+=10;                   // ajusta se d�gito negativo
       printf("%d",dgnumero);
       numero=numero+(dgnumero*posicao); // coloca digito no n�mero
       posicao=posicao*10;               // e prepara para pr�xima posi��o
       printf(" [%ld]\n",numero); getch();
	   cripto=(int)cripto/10;            // atualiza para pr�ximo d�gito
	}
	printf("\nDecriptografado = %ld",numero); getch();
}
