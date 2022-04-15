#include <stdio.h>
#include <math.h>

/**
 * main - Entry pont
 * Return: Always 0 (Success)
 */

int main(void)
{
long n, maxt;
long number = 612852475143;
double square = sqrt(number);
for(n = 1; n <= square; n++)
{
if (number % n == 0)
{
maxt = number / n;
}
}
printf("%ld\n", maxt);

return (0);
}
