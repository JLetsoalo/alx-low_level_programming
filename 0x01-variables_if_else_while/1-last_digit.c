#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - outputs last digit of variable n
 *Return: always 0 (success)
 */
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %d", n);
printf(" is %d", last_digit);
printf(" and is greater than 5\n");
}
else if (last_digit == 0)
printf("Last digit of %d", n);
printf(" is %d", last_digit);
printf(" and is zero\n");
else
{
printf("Last digit of %d", n);
printf(" is %d", last_digit);
printf(" and is less than 6\n");
}
return (0);
}
