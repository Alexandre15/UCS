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

    printf("\nCriptografando...\n");
    printf("D > dC\n");
    cripto=0;
    posicao=1;
    while(numero>0)
    {
       dgnumero=numero%10;               // separa d�gito do n�mero
       dgcripto=(dgnumero+chave)%10;     // criptografa d�gito cfe chave
       cripto=cripto+(dgcripto*posicao); // coloca digito no criprografado
       posicao=posicao*10;               // e prepara para pr�xima posi��o
	   numero=(int)numero/10;            // atualiza para pr�ximo d�gito
    }
    
	printf("\nCriptografado = %ld\n",cripto);

    printf("\nDecriptografando...\n");
    printf("dC > D\n");
    posicao=1;

    while(cripto>0)
	{
	   dgcripto=cripto%10;               // separa d�gito do criptografado
       dgnumero=(dgcripto-chave)%10;     // decriptografa d�gito cfe chave
       if(dgnumero<0)
         dgnumero+=10;                   // ajusta se d�gito negativo
       numero=numero+(dgnumero*posicao); // coloca digito no n�mero
       posicao=posicao*10;               // e prepara para pr�xima posi��o
	   cripto=(int)cripto/10;            // atualiza para pr�ximo d�gito
	}
	printf("\nDecriptografado = %ld",numero); getch();
}