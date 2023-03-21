#include <stdio.h>
/**
 *main - print certain numbers
 *Return: always zero (blank line)
 */

int main(void)
{
int n;
for (n = '0'; n <= '9'; ++n)
{
putchar(n);
}
putchar('\n');
return (0);
}
