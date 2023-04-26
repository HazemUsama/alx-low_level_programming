#include <stdio.h>
#include <stdarg.h>
/**
 * print - print whatever format is given
 *
 * @ptr: pointer to the variable
 * @format: what format is the variable
 *
 * Return: 1 if there is something to print otherwise 0
 */
int print(va_list ptr, char format)
{
	char c;
	int i;
	float f;
	char *s;

	switch (format)
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
			return (0);
	}
	return (1);
}
/**
 * print_all - prints anything
 *
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int cnt = 0, flag = 0;

	va_start(ptr, format);

	while (format && format[cnt] != '\0')
	{
		if (flag && (format[cnt] == 'c' || format[cnt] == 'i'
		|| format[cnt] == 'f' || format[cnt] == 's'))
			printf(", ");

		flag += print(ptr, format[cnt]);
		cnt++;
	}

	printf("\n");
	va_end(ptr);

}
