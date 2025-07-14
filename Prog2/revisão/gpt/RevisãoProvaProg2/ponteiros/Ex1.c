#include <stdio.h>

void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int va = 3;
    int vb = 8;

    printf("A = %d\nB = %d\n", va, vb);
    trocar(&va, &vb);
    printf("\nA = %d\nB = %d", va, vb); 
}
