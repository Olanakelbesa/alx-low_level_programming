#include "main.h"
/**
 *  main -  function that checks for alphabetic character
 *  Return: Always 0(success)
 *
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
