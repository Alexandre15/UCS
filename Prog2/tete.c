#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define CLEAR_SCREEN "cls"
#define SLEEP(seconds) Sleep((seconds) * 1000) // Sleep em milissegundos

void centerText(const char *text) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    int padding = (consoleWidth - strlen(text)) / 2;
    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    printf("%s\n", text);
}

void maximizeWindow() {
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_MAXIMIZE); // Maximiza a janela do console
}

int main() {
    // Maximiza a janela do console (Windows)
    maximizeWindow();

    // Limpa a tela
    system(CLEAR_SCREEN);

    // Obtém o nome do usuário atual
    const char *username = getenv("USERNAME"); // Windows
    if (username == NULL) {
        username = getenv("USER"); // Linux/Unix
    }

    if (username == NULL) {
        printf("Erro: Nome do usuário não encontrado.\n");
        return 1;
    }

    // Centraliza e exibe o nome do usuário
    centerText(username);

    // Delay de 10 segundos
    SLEEP(10);

    return 0;
}