#include "main.h"
#include <unistd.h>

/**
 * print_to_98 - main function
 *
 * @n: character to compare.
 *
 * Return: the last digit of the number
 *
 */
void print_to_98(int n) {
    int i;

    if (n <= 98) {
        for (i = n; i < 98; i++) {
            putchar(i + '0');
            putchar(',');
            putchar(' ');
        }
    } else {
        for (i = n; i > 98; i--) {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
        }
    }

    putchar('9');
    putchar('8');
    putchar('\n');
}

