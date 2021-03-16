#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stddef.h>

/**
 *struct formato - structure
 *@s: string
 *@f:function
 */

typedef struct formato
{
char *s;
void (*f)();
} formatos;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void caracter(va_list aux);
void entero(va_list aux);
void flotante(va_list aux);
void linea(va_list aux);

#endif
