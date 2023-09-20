#include "main.h"

/**
 * printf_decimal - prints a decimal number
 * @args: the argument (decimal)
 *
 * Return: the number of digits printed
 */

int printf_decimal(va_list args)
{
	int value = va_arg(args, int);
	int length = 0;
	int countn = 1;
	int temp = value;

	if (value < 0)
	{
		temp = -temp;
	}
	else
	{
		length += _putchar('-');
	}
	if (temp == 0)
	{
		length += _putchar('0');
		return (length);
	}
	while (temp > 9)
	{
		temp /= 10;
		countn *= 10;
	}
	while (countn > 0)
	{
		length += _putchar((value / countn) + '0');
		value %= countn;
		countn /= 10;
	}
	return (length);
}
