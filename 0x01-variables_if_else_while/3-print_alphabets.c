#include <stdio.h>

/**
* main - prints the alphabets in lowercase, and then in uppercase, followed by a new line
*
* Return: Always 0 (success)
*/

int main(void)
{
	char c;
	char d;
	for (c = 'a'; c <= 'z'; c++)
		{
		putchar(c);
		}
	for (d = 'A'; c <= 'Z'; c++)
		{
		putchar(d);
		}
		putchar('\n');

	return (0);

}
