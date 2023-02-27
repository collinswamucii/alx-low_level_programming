#include "main.h"

/**
 * _strlen - string length
 * @s: string to get length of
 * Return: Length of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	
	return (length);
}

