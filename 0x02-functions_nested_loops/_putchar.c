#include<unistd.h>
/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0(success)
 *
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}

