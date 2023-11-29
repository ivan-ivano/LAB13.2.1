#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <cmath>

#define z 2
#define SQR(x) (x*x)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define PRINTI(w); \
    printf(#w" = %d\n", w)


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y;
    int result;
    char ch = '0';
    do
    {
#if (z > 1)
        {

            puts("��� ��������� ����������� � ���� �������� ������");
            puts("������ 2 �����: ");
            scanf_s("%d", &x);
            PRINTI(x);
            scanf_s("%d", &y);
            PRINTI(y);

            result = MAX(SQR(x - z), x - y);
            PRINTI(result);
        }
#else
        {
            puts("��� ��������� �������� � ���� �������� ������");
            puts("������ 2 �����: ");
            scanf_s("%d", &x);
            PRINTI(x);
            scanf_s("%d", &y);
            PRINTI(y);


            result = MIN(x - y, y - z);
            PRINTI(result);
        }
#endif
        puts("��� ��������� ������ 䳿, ������ y \n");
        ch = _getch();
    } while (ch == 'y');
}