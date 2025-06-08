#include <stdio.h>

int main(){
    struct Aluno
    {
        char nome[50];
        int idade;
        char cpf[11];
        struct Data
        {
            int dia, mes, ano;
            int hora, minuto;
        };
        struct favoritos {
            char cor[20];
            char musica[50];
            char filme[50];
            char livro[50];
            char comida[50];
            char animal[50];
        };
    };

    struct Aluno aluno1 = {"Alequi", 23, "04451035074", {7, 7, 2001, 18, 55}, {"Preto", "Sway", "Alita", "Fyman", "Lasanha", "Gato"}};
    
    printf("Segue informacoes do aluno %s: \nIdade: %d\nCPF: %s\nNascimento: %d/%d/%d %dh:%dmin\nFavoritos:\nCor: %s\nMusica: %s\nFilme: %s\nLivro: %s\nComida: %s\nAnimal: %s", aluno1.nome, aluno1.idade, aluno1.cpf, aluno1.dia, aluno1.mes, aluno1.ano, aluno1.hora, aluno1.minuto, aluno1.cor, aluno1.musica, aluno1.filme, aluno1.livro, aluno1.comida, aluno1.animal);
}
