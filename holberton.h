#ifndef PRINTF_H
#define PRINTF_H
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *struct formato - structure
 *@s: string
 *@f:function
 */

typedef struct formato
{
char *s;
void (*f)();
} identificador;

int _printf(const char *format, ...);
void string(va_list aux, int *x);
void character(va_list aux, int *x);
void integer(va_list aux, int *x);
int _pow(int x, int y);
int conteo(int n);

#endif
