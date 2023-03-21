#include <stdio.h>
/**
 *main - prints out numbers 0 to 9
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = 0;
while (n < 10)
{
printf("%d", n);
n++;
}
putchar('\n');
return (0);
}
