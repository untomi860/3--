#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"RUS");
    char masked_raider[] = "�����!";
    char *jimmy = masked_raider;
    printf("��������� � ����� ������ %s ������� ������ %s\n", masked_raider, jimmy);
    masked_raider[0] = '�';
    masked_raider[1] = '�';
    masked_raider[2] = '�';
    masked_raider[3] = '�';
    masked_raider[4] = '�';
    masked_raider[5] = '!';
    printf("��������� � ����� ������ %s ������� ������ %s\n", masked_raider, jimmy);

    return 0;
}
