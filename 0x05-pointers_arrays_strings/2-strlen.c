#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: character that return length of string
 *
 * Return: Nothing
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
