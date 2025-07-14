#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[30];
    char autor[30];
    int ano;
} Livro;

int main() {
    Livro livros[4];
    int recente = 0;

    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Livro %d\n", i + 1);
        printf("Titulo: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';
        printf("Autor: ");
        fgets(livros[i].autor, 30, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        if (livros[i].ano > livros[recente].ano)
        {
            recente = i;
        }
        
        getchar();
    }

    printf("O Livro mais recente, | %s escrito por %s no ano de %d", livros[recente].titulo, livros[recente].autor, livros[recente].ano);
    
}
