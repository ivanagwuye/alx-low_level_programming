#include "main.h"
#include <stdio.h>

/**
* main - prints the program
* @argc: argument to be counted
* @argv: argument vector
* Return - Always 0 (success)

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	return (0);
}
