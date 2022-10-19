#ifndef MAIN_H
#define MAIN_H
extern int _putchar(char x);
extern void print_alphabet(void)
{
  char i;
  for (i = 'a'; i <= 'z'; i++)
  {
      _putchar(i);
  }
  _putchar('\n');
}
#endif
