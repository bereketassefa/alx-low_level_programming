#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int n, tf;
tf = 0;
while (tf < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
tf++;
_putchar('\n');
}
}
