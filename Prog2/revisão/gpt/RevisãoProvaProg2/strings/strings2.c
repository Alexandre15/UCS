#include <stdio.h>
#include <string.h>

int main() {
    char senha[10];
    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(senha, "1234") == 0) {
        printf("Acesso permitido\n");
    } else {
        printf("Senha incorreta\n");
    }

}
