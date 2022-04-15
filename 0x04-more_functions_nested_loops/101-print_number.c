#include "main.h"
#include <stdio.h>
/**
 * print_number - A function that prints an integer.
 * Return: Nothing
 */
void print_number(int n)
{
if (n == 0)
_putchar('0');
else if (n < 0)
{
_putchar('-');
print_integer(n * -1);
}
else
print_integer(n, '\n');

}
