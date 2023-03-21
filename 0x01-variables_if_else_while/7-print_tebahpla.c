#include <ctype.h>
#include <stdio.h>
/**
 *main - print alphabets in reverse
 *Return: always 0 (success)
 */

int main(void)
{
int alph, small;
for (alph = 'Z'; alph >= 'A'; --alph)
{
small = tolower(alph);
putchar(small);
}
putchar('\n');
return (0);
}
