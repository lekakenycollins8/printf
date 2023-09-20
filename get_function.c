#include "main.h"

/**
 * get_function - Checks for correct specifier
 * @format: String to check
 * Return: pointer to the function
 */

int (*get_function(const char *format))(va_list)
{
	int i;

	func_type Specifier[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_decimal},
		{"i", printf_decimal},
		{NULL, NULL}
	};
	for (i = 0; Specifier[i].id; i++)
	{
		if (*format == *(Specifier[i].id))
		{
			return(Specifier[i].func_ptr);
		}
	}
	return (NULL);
}	
