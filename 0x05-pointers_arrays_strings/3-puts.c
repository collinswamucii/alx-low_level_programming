#include "main.h"

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: string to be output
 */

void _puts(char *str)
{
	while (*str)
	{
		_puts(*str++);
	}
	
	_puts('\n');
}
