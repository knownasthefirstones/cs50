#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // проверка высоты
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 23); // если < 0 или > 23, или от 0 до 4, то цикл повторяется

    for (int y = 0; y < n; y++) // цикл для столбца
    {
        for (int x = 0; x < n - 1 - y; x++) // цикл для строки с пробелами
        {
            printf(" ");
        }
        for (int x = 0; x < y + 1; x++) // цикл для продолжения строки с решетками
        {
            printf("#");
        }
        for (int x = 0; x < 2; x++) // цикл для продолжения строки с 2 пробелами
        {
            printf(" ");
        }
        for (int x = 0; x < y + 1; x++) // цикл для продолжения строки с решетками наоборот
        {
            printf("#");
        }
        printf("\n");
    }
}