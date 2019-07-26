#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - entry point
 * description: function that prints anything.
 * @format: list of params
 */

void print_all(const char * const format, ...)
{
	va_list pf;
	char *point;
	int c = 0;

	va_start(pf, format);

	while (format && format[c])
	{
		switch (format[c])
			{
			case 'c':
				printf("%c", va_arg(pf, int));
				break;
			case 'i':
				printf("%i", va_arg(pf, int));
				break;
			case 'f':
				printf("%f", va_arg(pf, double));
				break;
			case 's':
				point = va_arg(pf, char *);
				if (point != NULL)
				{
					printf("%s", point);
					break;
				}
				printf("%p", point);
				break;
			default:
				c++;
				continue;
			}
			if (format[c + 1] != '\0')
				printf(", ");
			c++;
	}
	printf("\n");
	va_end(pf);
}
