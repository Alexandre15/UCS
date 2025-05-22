#include <stdio.h>
#include <ctype.h>

int chrtimes(const char *str1, const char ch){
    int count = 0;

    while (*str1 != '\0')
    {
        if (tolower(*str1) == tolower(ch))
        {
            count++;
        }
        str1++;
    }
    return count;
    
}

int main(){

    char palavra[20], ch;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    printf("Digite qual letra voce deseja saber a quantidade de vezes que aparece: ");
    scanf("%c", &ch);
    printf("Letra %c\n", ch);

    printf("A letra %c aparece %d vezes", ch, chrtimes(palavra, ch));
}
