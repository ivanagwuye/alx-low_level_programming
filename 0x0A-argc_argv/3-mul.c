#include <stdio.h>
#include "main.h"

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (i < 1)
	{
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
		printf("%d\n", sum);
	}
	}
	else
	{
		printf("ERROR\n");
	}

	return (1);
}
