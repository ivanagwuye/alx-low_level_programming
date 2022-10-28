#include "main.h"

/**
* _puts - prints a string, followed by a new line, to stdout
*
* @str: the string to be checked
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
