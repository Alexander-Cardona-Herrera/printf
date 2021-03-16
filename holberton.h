#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

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

void _printf(const char *format, ...);
void string(va_list aux);
void character(va_list aux);
void data(va_list aux);
void integer(va_list aux);

#endif
