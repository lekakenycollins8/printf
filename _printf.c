#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints output according to format
 * @format: character string
 * Return: Characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	int (*func_ptr)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || !format[i + 1])
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] != 'c' && format[i + 1] != 's' && format[i + 1] != '%' && format[i + 1] != 'd' && format[i +1] != 'i')
				{
					j += _putchar(format[i]);
					j += _putchar(format[i + 1]);
					i++;
				}
				else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				{
					func_ptr = printf_decimal;
					j += func_ptr(args);
					i++;
				}
				else
				{
					func_ptr = get_function(&format[i + 1]);
					j += func_ptr(args);
					i++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}
