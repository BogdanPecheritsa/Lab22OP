#include <stdio.h>
#include <windows.h>

int main3() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const char* grades[] = { "", "", "�����������", "���������", "�����", "³�����" };

    int grade;
    printf("������ ������ (2-5): ");
    scanf_s("%d", &grade);

    if (grade >= 2 && grade <= 5) {
        printf("%s\n", grades[grade]);
    }
    else {
        printf("³�������� ���� ������\n");
    }

    return 0;
}