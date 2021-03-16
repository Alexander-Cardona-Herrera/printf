#include "holberton.h"

/**
 * string - print a string
 * @aux: Parameters
 * Return: return an integer that counts what it prints
 */
void string(va_list aux)
{
	int i, n;
	char *z;

	z = va_arg(aux, char*);

	for (i = 0; z[i] != '\0'; i++)
	{
		n = z[i];
		write(1, &n, 1);
	}
}
/**
 * character - print a character
 * @aux: Parameters
 * Return: return an integer that counts what it prints
 */
void character(va_list aux)
{
	int z;
	
	z = va_arg(aux, int);
	write(1, &z, 1);
}

/*
 * data - print an integer
 * @aux: Parameters
 * Return: return an integer that counts what it prints

void data(va_list aux)
{
	int z;

	z = va_arg(aux, int);
	printf("%d", z);
}


 * integer - print an integer
 * @aux: Parameters
 * Return: return an integer that counts what it prints
 
void integer(va_list aux)
{
}
*/
 
