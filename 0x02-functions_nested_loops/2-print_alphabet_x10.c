#include "main.h"

/**
 * print_alphabet - function to print alphabet ten times	
 *
 */
void  print_alphabet(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                _putchar(ch);
        }
        _putchar('\n');
}

void  print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
