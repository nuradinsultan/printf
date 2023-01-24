#include "main.h"
/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_write_char(s);
	return (1);
}

/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_write_char(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_write_char(s[i]);
		return (len);
	}
}

/**
 * printf_37 - prints the char 37.
 * Return: 1.
 */
int printf_37(void)
{
	_write_char(37);
	return (1);
}
