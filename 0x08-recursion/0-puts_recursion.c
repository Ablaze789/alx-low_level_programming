#include "main.h"

/**
 *_puts_recursion - a function that prints a string, followed by a new line.
 *@s: string to print
 *Return: void
 */

void _puts_recursion(char *s)
{
  int i;
  
  i = 1;
  _putchar("%c", s(i));
  i ++;
  if (s(i) != '\0')
  {
    _puts_recursion(s);
  }
  else
  {
    _putchar("\n");
  }
}
