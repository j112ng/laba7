#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
   
    setlocale(LC_ALL, "RUS");

    float x, y;
    char c;

  
    printf("Введите выражение без пробелов ");

    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;
    case '-':
        printf("=%f\n", x - y);
        break;
    case '*':
        printf("=%f\n", x * y);
        break;
    case '/':
    
        if (y == 0) {
            printf("Ошибка\n");
        }
        else {
            printf("=%f\n", x / y);
        }
        break;
    case '^': // возведение в степень
        printf("=%f\n", pow(x, y));
        break;
    default:
        printf("Ошибка\n");
        break;
    }

    return 0;
}
