#include <stdio.h>
/**
 *main - prints hexadecimal base16 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = '0';
int base16 = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (base16 <= 'f')
{
putchar(base16);
base16++;
}
putchar('\n');
return (0);
}
