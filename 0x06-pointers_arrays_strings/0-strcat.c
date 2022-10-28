#include "main.h"
#include <stdio.h>

/**
* _strcat - function that appends the source string, and
* results a pointer to the resulting string destination
* @dest: string to be appended to
* @src: string to append
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
* another method using pointer notation
*
* char *_strcat(char *dest, char *src)
* {
*        int i = 0;
*	int j = 0;
*	while (*(dest + i))
*	   i++;
*
*	while (*(src + j))
*	{
*	   *(dest+i) = *(src+j);
*	   i++;
*	   j++;
*	}	*(dest+i) = '\0';
*
*	return (dest);
* }
*/
