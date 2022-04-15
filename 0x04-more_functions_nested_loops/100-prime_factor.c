#include <stdio.h>
/**
 * main - Entry pont
 * Return: int
 */

int main(void)
{
unsigned long i, j, isPrime;
num = 612852475143;

for(i=2; i<=num; i++)
{
if(num%i == 0)
{
isPrime = 1;
for(j=2; j <= i/2; j++)
{
if(i%j == 0)
{
isPrime = 0;
break;
}
}
if(isPrime==1)
{
printf("%d\n", i);
}
}
}
    return (0);
}
