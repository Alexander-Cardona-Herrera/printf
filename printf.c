#include "holberton.h"

/**
 * _printf - prints any kind of element
 * @format: reads the string given by the user
 * Return: return the number of prints
 */

int _printf(const char *format, ...)
{
	int i;
	int j;
	int n;

	identificador calls[] = {
		{"s", string},
		{"c", character},
		/*{"d", data},
		{"i", integer},*/
		{NULL, NULL},
	};

	va_list aux;

	va_start(aux, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'c'))
		{
			for (j = 0; calls[j].s != '\0'; j++)
			{
				if (calls[j].s[0] ==  format[i + 1])
				{
					calls[j].f(aux);
				}
			}
		i = i + 2;
		}

		if (format[i] == '%')
		i = i - 1;

		else
			n = format[i];
			write(1, &n, 1);
	}
	va_end(aux);
	return (0);
}
