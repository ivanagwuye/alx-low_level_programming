#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
*
* Return: always 0 (success)
*/

int main(void)
{
	int c;
	char d;

	for (c = 48; c < 58; c++)
	{
	putchar(c);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
	putchar(d);
	}
	putchar('\n');

	return (0);
}
