#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void mirrorWords1(char str[]) {
    char* token;
    char* context = NULL;

    token = strtok_s(str, " ", &context);

    while (token != NULL) {
        size_t len = strlen(token);

        if (len % 2 != 0) {
            for (int i = (int)(len - 1); i >= 0; i--) {
                printf("%c", token[i]);
            }
        }
        else {
            printf("%s", token);
        }

        printf(" ");
        token = strtok_s(NULL, " ", &context);
    }
}

int compareStrings(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

void processWords1(char str[]) {
    const int MAX_WORDS = 100;
    char* words[MAX_WORDS];
    int count[MAX_WORDS] = { 0 };
    int uniqueCount = 0;

    char* token;
    char* context = NULL;

    token = strtok_s(str, " ", &context);

    while (token != NULL) {
        words[uniqueCount] = _strdup(token);

        for (int i = 0; i <= uniqueCount; i++) {
            if (strcmp(token, words[i]) == 0) {
                count[i]++;
                break;
            }
        }

        uniqueCount++;
        token = strtok_s(NULL, " ", &context);
    }

    int maxCountIndex = 0;
    for (int i = 1; i < uniqueCount; i++) {
        if (count[i] > count[maxCountIndex]) {
            maxCountIndex = i;
        }
    }

    printf("\n1) Words that are palindromes:\n");
    for (int i = 0; i < uniqueCount; i++) {
        if (strcmp(words[i], _strrev(_strdup(words[i]))) == 0) {
            printf("%s ", words[i]);
        }
    }

    printf("\n2) Word occurrences:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%s: %d\n", words[i], count[i]);
    }

    printf("\n3) Most frequently occurring word: %s (occurs %d times)\n", words[maxCountIndex], count[maxCountIndex]);

    printf("\n4) Unique words:\n");
    for (int i = 0; i < uniqueCount; i++) {
        if (count[i] == 1) {
            printf("%s ", words[i]);
        }
        free(words[i]);
    }

    qsort(words, uniqueCount, sizeof(char*), compareStrings);
    printf("\n5) Words in alphabetical order:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}

int main1() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    printf("Result: ");
    mirrorWords1(input);

    processWords1(input);

    return 0;
}