#include <stdio.h>

//Ex1
void dobrar(int *x){
    *x *= 2;
}
//Ex2
void mostrarNome(char nome[]){
    printf("Ola, %s!\n", nome);
}
//Ex3
void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int num = 5;
    int a = 15;
    int b = 12;
    char nome[] = "Alexandre";

    dobrar(&num);
    printf("Dobrar: %d\n", num);

    mostrarNome(nome);

    printf("A: %d, B: %d\n", a, b);
    trocar(&a, &b);
    printf("A: %d, B: %d\n", a, b);

}