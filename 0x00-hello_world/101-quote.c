#include <unistd.h>

/**
 * main - program entry point which prints pre-defined input
 * followed by a new line
 *
 * Return: 1
 */

int main(void)
{
	char *p = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, p, strlen(p));
	
	return (1);
}
