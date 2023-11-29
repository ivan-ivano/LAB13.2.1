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

            puts("ўоб визначити максимальне з двох числових вираз≥в");
            puts("¬вед≥ть 2 числа: ");
            scanf_s("%d", &x);
            PRINTI(x);
            scanf_s("%d", &y);
            PRINTI(y);

            result = MAX(SQR(x - z), x - y);
            PRINTI(result);
        }
#else
        {
            puts("ўоб визначити м≥н≥мальне з двох числових вираз≥в");
            puts("¬вед≥ть 2 числа: ");
            scanf_s("%d", &x);
            PRINTI(x);
            scanf_s("%d", &y);
            PRINTI(y);


            result = MIN(x - y, y - z);
            PRINTI(result);
        }
#endif
        puts("ўоб повторити вказан≥ д≥њ, нажм≥ть y \n");
        ch = _getch();
    } while (ch == 'y');
}