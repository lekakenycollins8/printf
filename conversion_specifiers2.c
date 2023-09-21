#include "main.h"

int power(int base, int exp);
/**
 * printf_decimal - prints a decimal number
 * @args: the argument (decimal)
 *
 * Return: the number of digits printed
 */

int printf_decimal(va_list args)
{
	int printed = 0;
	int num_digits = 0;
	int digit;
	int num = va_arg(args, int);
	int temp = num;

	if (num < 0)
	{
		_putchar('-');
		printed++;
		num = -num;
	}
	while (temp > 0)
	{
		temp /= 10;
		num_digits++;
	}
	while (num_digits > 0)
	{
		digit = num / power(10, num_digits - 1);
		_putchar('0' + digit);
		printed++;
		num %= power(10, num_digits - 1);
		num_digits--;
	}
	return (printed);
}

/**
 * power - Helper function to calculate power
 * @base: Base integer
 * @exp: exponent
 * Return: power
 */

int power(int base, int exp)
{
	int result = 1;
	int i;

	for (i = 0; i < exp; i++)
	{
		result *=base;
	}
	return (result);
}
