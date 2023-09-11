#include<stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always (success)
 *
 */
int main(void)
{
int n, m, l;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
for (l = 0; l < 10; l++)
{
if (l != m && l != n && l > m && m != n && m > n)
{
putchar('0' + n);
putchar('0' + m);
putchar('0' + l);
if (n >= 0 && n < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

