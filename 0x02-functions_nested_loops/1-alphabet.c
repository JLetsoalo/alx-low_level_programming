#include "main.h"
#include <ctype.h>
/**
 *print_alphabet - print lowercase alphabet
 *Return: always 0
 */

void print_alphabet(void)
{
int alph, small;
for (alph = 'A'; alph <= 'Z'; alph++)
{
small = tolower(alph);
_putchar(small);
}
_putchar('\n');
}
