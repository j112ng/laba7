#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h> 

int main()
{
    setlocale(LC_ALL, "RUS");

    char c;

    printf("Введите один символ: ");
    scanf("%c", &c);

 
    if (isdigit(c)) {
        printf("Это цифра\n");
    }
   
    else if (isalpha(c)) {
        printf("Это буква\n");
    }
    else {
        printf("Это другой символ\n");
    }

    return 0;
}