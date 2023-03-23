#include "main.h"
#include <ctype.h>
/**
 *print_alphabet - print lowercase alphabet
 *Return: always 0
 */

void print_alphabet(void)
{
char alph;
alph = 'a';
while (alph <= 'z');
_putchar(alph);
alph++;
}
_putchar('\n');
}
