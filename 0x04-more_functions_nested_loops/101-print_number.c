#include "main.h"

void print_integer(int m)
{
int i = 1000000000;

for (; i >= 1; i /= 10)
if (m / i != 0)
{
_putchar((m / i) % 10 + '0');
}
}
