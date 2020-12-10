#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"Rus");

    int a;
    printf("Введите число: ");
    scanf_s("%d", &a);
    int i=0;
    while (a != 0)
    {
        a = a & (a - 1);
        i++;
    }

    printf("Кол-во единиц в двоичном представлении = %d", i);
    return 0;
}
