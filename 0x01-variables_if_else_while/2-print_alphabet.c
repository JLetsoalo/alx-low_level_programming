#include <stdio.h>
#include <ctype.h>
/**
 *main - outputs lower-case alphabets
 *Return: always 0 (success)
 */

int main(void)
{
for (int alph = 'A'; alph <= 'Z'; ++alph)
{
int small = tolower(alph);
putchar(small);
}
return (0);
}
