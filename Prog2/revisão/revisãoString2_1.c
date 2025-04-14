#include <stdio.h>
#include <ctype.h>

int numchartimes(const char *str1){
    int count = 0;

    while (*str1 != '\0'){
        if (isdigit(*str1))
        {
            count++;
        }
        str1++;
    }
    return count;
}


int main(){
    char palavra[30];

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    printf("Na string --> %s existem %d numeros\n", palavra, numchartimes(palavra));

}
