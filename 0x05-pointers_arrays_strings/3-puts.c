#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: a function that prints a string
 *
 * Return: nothing
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
