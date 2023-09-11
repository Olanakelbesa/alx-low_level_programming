#include<stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always (success)
 *
 */
int main(void)
{
int n, m;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
if (m != n && m > n)
{
putchar('0' + n);
putchar('0' + m);
if(n >= 0 && n <= 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
