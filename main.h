#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

int _printf(const char *format, ...);
/**
 * struct format - Data type of a format.
 * @op: Format.
 * @f: Function.
 *
 */

typedef struct format
{
	char *op;
	int (*f)(va_list print);
} MyPrint;


int _putchar(char c);
int op_character(va_list form);
int op_string(va_list form);
int op_integer(va_list form);
int op_reverse(va_list form);
int op_rot13(va_list form);
int op_percent(va_list form);
int validator(const char *format, va_list print1, MyPrint *ops1);
int op_binary(va_list form);
int op_octal(va_list form);
int op_unsigned_decimal(va_list form);
int op_hex(va_list form);
int op_HEX(va_list form);
int op_SString(va_list form);
int op_address(va_list form);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list print1);
int get_precision(const char *format, int *i, va_list print1);
int get_size(const char *format, int *i);
int op_non_printable(va_list types,int flags, int width, int precision, int size);

#endif
