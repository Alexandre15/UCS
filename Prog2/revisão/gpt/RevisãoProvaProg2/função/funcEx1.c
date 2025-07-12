#include <stdio.h>

float maior(float a, float b){
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(){
    float a = 10.5, b = 20.8;

    printf("O maior entre %.1f e %.1f = %.1f", a, b, maior(a, b));
}
