#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always (success)
 *
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
if (n >= 0 && n < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
