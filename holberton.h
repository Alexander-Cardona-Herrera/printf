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

int _printf(const char *format, ...);
int string(va_list aux);
int character(va_list aux);
int data(va_list aux);
int integer(va_list aux);

#endif
