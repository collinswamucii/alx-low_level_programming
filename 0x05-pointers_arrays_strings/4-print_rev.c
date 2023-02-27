#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s) {
    int len = strlen(s);
    char reversed[len+1];
    for (int i = 0; i < len; i++) {
        reversed[i] = s[len-1-i];
    }
    reversed[len] = '\0';
    printf("%s\n", reversed);
}

