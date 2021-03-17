#include "holberton.h"

/**
 * _printf - prints any kind of element
 * @format: reads the string given by the user
 * Return: return the number of prints
 */

int _printf(const char *format, ...)
{
	int i, j, n, q;
	int *p;

	q = 0;
	p = &q;

	identificador calls[] = {
		{"s", string},
		{"c", character},
		{"d", integer},
		{"i", integer},
		{NULL, NULL},
	};

	va_list aux;

	va_start(aux, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'c' 
			|| format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			for (j = 0; calls[j].s != NULL; j++)
			{
				if (calls[j].s[0] ==  format[i + 1])
					calls[j].f(aux);
			}
		i = i + 2;
		}
		n = format[i];
		write(1, &n, 1);
		q++;
	}
	va_end(aux);
	return (*p);
}
