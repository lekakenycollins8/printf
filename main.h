#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct function_type - type of structure
 * @id: pointer to argument
 * @func_ptr: function pointer associated with argument
 */

typedef struct function_type
{
	char *id;
	int (*func_ptr)(va_list);
} func_type;

int _putchar(char c);
int printf_char(va_list args);
int printf_string(va_list args);
int printf_percent(va_list args);
int printf_decimal(va_list args);
int (*get_function(const char *format))(va_list);
int _printf(const char *format, ...);

#endif /* MAIN_H */
