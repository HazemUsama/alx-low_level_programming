#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * 
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int cnt = 0, flag = 0;
	char c;
	int i;
	float f;
	char *s;

	va_start(ptr, format);
	
	while (format[cnt] != '\0')
	{
		if (flag)
			printf(", ");

		flag = 1;
		switch(format[cnt])
		{
			case 'c':
				c = va_arg(ptr, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ptr, int);
				printf("%i", i);
				break;
			case 'f':
				f = va_arg(ptr, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ptr, char *);
				printf("%s", s ? s : "(nil)");
				break;
			default:
				flag = 0;
		}
		cnt++;
	}

	printf("\n");
	va_end(ptr);

}
