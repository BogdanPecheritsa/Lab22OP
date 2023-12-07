#include <stdio.h>
#include <string.h>
#include <windows.h>

void mirrorWords(char str[]) {
    char* token;
    char* context = NULL;
    int firstWord = 1;

    token = strtok_s(str, " ", &context);

    while (token != NULL) {
        size_t len = strlen(token);

        if (len % 2 != 0) {
            for (int i = len - 1; i >= 0; i--) {
                printf("%c", token[i]);
            }
        }
        else {
            printf("%s", token);
        }

        token = strtok_s(NULL, " ", &context);

        if (token != NULL) {
            printf(" ");
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char input[1000];
    printf("Введіть рядок: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    printf("Результат: ");
    mirrorWords(input);

    return 0;
}