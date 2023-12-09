#include <stdio.h>
#include <windows.h>

int main3() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const char* grades[] = { "", "", "Незадовільно", "Задовільно", "Добре", "Відмінно" };

    int grade;
    printf("Введіть оцінку (2-5): ");
    scanf_s("%d", &grade);

    if (grade >= 2 && grade <= 5) {
        printf("%s\n", grades[grade]);
    }
    else {
        printf("Відсутність такої оцінки\n");
    }

    return 0;
}