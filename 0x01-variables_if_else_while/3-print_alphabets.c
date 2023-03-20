#include <stdio.h>
#include <ctype.h>
/**
 *main - outputs lower & upper-case alphabets
 *Return: always 0 (success)
 */

int main(void)
{
int alph, small;
for (alph = 'A'; alph <= 'Z'; ++alph)
{
small = tolower(alph);
putchar(small);
}
for (alph = 'A'; alph <= 'Z'; ++alph)
{
putchar(alph);
}
putchar('\n');
return (0);
}
