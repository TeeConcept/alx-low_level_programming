#include <stdio.h>
/**
 * main - Entry pont
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, isPrime;
long int num;
num = 612852475143;
printf("All Prime Factors of %ld are: \n", num);
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
printf("%d ", i);
}
}
}
    return (0);
}
