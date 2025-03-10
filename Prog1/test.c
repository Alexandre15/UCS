#include <stdio.h>

int main(){

    int idx, vetordosguri[4], num;

    for (idx=0; idx < 8; idx++)
    {
        printf("Digite: ");
        scanf("%d", &num);

        vetordosguri[idx] = num;
    }
    
    for (idx=0; idx < 8; idx++){
        printf("Vetor: %d\n", vetordosguri[idx]);
    }

}