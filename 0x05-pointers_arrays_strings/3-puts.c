#include "main.h"
/**
 * void _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a function that prints a string
 *
 * Return: nothing
 */
void _puts(char *str)
{
for(;*str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
