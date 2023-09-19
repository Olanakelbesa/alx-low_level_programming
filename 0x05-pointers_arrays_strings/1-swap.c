#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * @a: an integer swap pointer
 * @b: an integer swap pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
