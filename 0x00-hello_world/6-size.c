#include <stdio.h>

/**
 * main - Entry poin
 *
 * prints the size of various types
 *
 *Retrun: 0
 */
int main(void)
{
    printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
    return (0);
}
