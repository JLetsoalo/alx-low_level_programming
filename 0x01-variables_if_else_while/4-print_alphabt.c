#include <stdio.h>
/**
 *main - prints out alphabets except for q and e
 *Return: always 0 (successful)
 */

int main(void)
{
char alph = 'a';
while (alph <= 'z'7)
{
if ((alph != 'q') && (alph != 'e'))
{
putchar(alph);
}
alph++;
}
putchar('\n');
return (0);
}
