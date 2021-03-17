#include "holberton.h"

/**
 * string - print a string
 * @aux: Parameters
 * @x: counter
 * Return: return an integer that counts what it prints
 */
void string(va_list aux, int *x)
{
	int i, n;
	char *z;

	if (va_arg(aux, char*) == NULL)
	{
		z = "(null)";
	}
	else
	{
		z = va_arg(aux, char*);
	}
	for (i = 0; z[i] != '\0'; i++)
	{
		n = z[i];
		write(1, &n, 1);
		*(x) = *x + 1;
	}
}
/**
 * character - print a character
 * @aux: Parameters
 * @x: counter
 * Return: return an integer that counts what it prints
 */
void character(va_list aux, int *x)
{
	int z;

	z = va_arg(aux, int);
	write(1, &z, 1);
	*(x) = *x + 1;
}

/**
 * integer - print an integer
 * @aux: Parameters
 * @x: counter
 * Return: return an integer that counts what it prints
 */
void integer(va_list aux, int *x)
{
	int n, a, i;
	char p = '-';
	char rep;

	n = va_arg(aux, int);

	if (n < 0)
	{
		a = -n;

		write(1, &p, 1);
		*(x) = *x + 1;
	}
	else
		a = n;

	for (i = 1; i <= conteo(a); i++)
	{
		rep = ((a / (_pow(10, conteo(a) - i))) % 10) + 48;
		write(1, &rep, 1);
		*(x) = *x + 1;
	}
}
/**
 * conteo - count
 * @n: integer
 * Return: n caracters of the integer
 */
int conteo(int n)
{
	int x = 1;
	int y = 10;

	if (n < 0)
		n = -n;

	while (y <= n)
	{
		x++;
		y = y * 10;
	}
	return (x);
}
/**
 * _pow - potenciation
 * @x: integer
 * @y: integer
 * Return: exponential number
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}
