#include <stdio.h>
#include <windows.h>

int main4() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const char* grades[] = { "", "", "�����������", "���������", "�����", "³�����" };

    char input[20];
    printf("������ ������ � ������ ����� ������: ");
    scanf_s("%s", input, sizeof(input));

    int grade = -1;
    for (int i = 2; i <= 5; ++i) {
        if (strcmp(input, grades[i]) == 0) {
            grade = i;
            break;
        }
    }

    if (grade != -1) {
        printf("³������� ������� ��������: %d\n", grade);
    }
    else {
        printf("������� ������ ������\n");
    }

    return 0;
}