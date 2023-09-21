#include "main.h"

/**
 * printf_char - Prints a character
 * @args: argument
 * Return: character to be printed
 */

int printf_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * printf_string - Prints a string
 * @args: type of argument
 * Return: String
 */

int printf_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}

/**
 * printf_percent - Prints the character '%'
 * @args: type of argument
 * Return: character '%'
 */

int printf_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
