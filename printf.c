#include "holberton.h"

/**
 * int _printf - prints any kind of element
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
		{"d", data},
		{"i", integer},
		{NULL, NULL},
	};

	va_list aux;
	va_start(aux, format);

	for (i = 0; format [i] != '\0'; i++)
	{
		if (format [i] == '%' && format[i + 1] == 's')
		{
			for (j=0; imp[j].s != '\0'; j++)
			{
				if (imp [j].s[0] ==  format [i + 1])
				{
					imp[j].f(aux);
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
}

void linea(va_list aux)
{
  int i,n;
  char *z;
  
  z = va_arg(aux, char*);

  for (i = 0;z[i] != '\0'; i++)
	{
	  n = z[i];
	  write(1, &n, 1);
	}
}

void caracter(va_list aux)
{
  int z;
  
  z = va_arg(aux, int);
  write(1, &z, 1);
}

void entero(va_list aux)
{
  int z;

  z = va_arg(aux, int);
  printf("%d", z);
}

int main(void)
{
	_printf("Let's try to printf a %s%s simple sentence. %c\n", "fucking","fucking", 'T');
	return (0);
}