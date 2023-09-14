#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
