#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination value
 * @src: source value
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int k, r;

k = 0;
r = 0;

while (dest[k] != '\0')
{
	k++;
}

while (src[r] != '\0')
{
	dest[k] = src[r];
	k++;
	r++;
}
dest[k] = '\0';
return (dest);
}

