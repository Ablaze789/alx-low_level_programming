#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <ctype.h>
extern int _putchar(char c)
{
  putchar(c); 
}
extern int _isupper(int c)
{
  int a;
  if (isupper(c))
  {
    a = 1;
    putchar(a);
  }else{
    a = 0;
    putchar(a);
  }
}
  int 
#endif
