#include <stdio.h>

void dobrar(int *x) {
    *x = *x * 2;
}


int main(){

    int a = 10;
    int *p = &a;

    printf("Valor de a: %d\n", a);
    dobrar(p);
    printf("Valor de a: %d\n", a);

}