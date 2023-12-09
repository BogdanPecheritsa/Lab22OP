#include <stdio.h>
#include <windows.h>

int main2() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int grade;
    printf("Введіть оцінку (2-5): ");
    scanf_s("%d", &grade);

    switch (grade) {
    case 2:
        printf("Незадовільно\n");
        break;
    case 3:
        printf("Задовільно\n");
        break;
    case 4:
        printf("Добре\n");
        break;
    case 5:
        printf("Відмінно\n");
        break;
    default:
        printf("Відсутність такої оцінки\n");
    }

    return 0;
}