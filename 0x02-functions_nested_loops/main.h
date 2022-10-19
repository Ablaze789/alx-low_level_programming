#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
void _putchar(char x)
{
    putchar(x);
}
void print_alphabet(void)
{
    char i;
    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}
#endif
