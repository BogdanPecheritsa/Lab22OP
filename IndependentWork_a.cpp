#include <stdio.h>
#include <windows.h>

int main2() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int grade;
    printf("������ ������ (2-5): ");
    scanf_s("%d", &grade);

    switch (grade) {
    case 2:
        printf("�����������\n");
        break;
    case 3:
        printf("���������\n");
        break;
    case 4:
        printf("�����\n");
        break;
    case 5:
        printf("³�����\n");
        break;
    default:
        printf("³�������� ���� ������\n");
    }

    return 0;
}