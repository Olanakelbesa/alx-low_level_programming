#include<stdio.h>
/**
 * main - Print all the letters except q and e
 * Return: Always (Success)
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'q' || c == 'e')
{
putchar('\0');
}
else
putchar(c);
}
putchar('\n');
return (0);
}
