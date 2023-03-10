#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the input/argument oassed
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
	{
		num *= -1;
	}

	_putchar(num + '0');

	return (num);
}
