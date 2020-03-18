#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_op_func(const char *s))(va_list);
int _printc(va_list c);
int _prints(va_list s);
int _printp(__attribute__((unused))va_list c);
int _printd(__attribute__((unused))va_list d);
int _printi(__attribute__((unused))va_list i);
/**
 * struct define_op - Struct to define type of data and its function.
 * @type: formats
 * @f: The function associated
 */
typedef struct format
{
	char *type;
	int (*f)(va_list);
} listype;

#endif
