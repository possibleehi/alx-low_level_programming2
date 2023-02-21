#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *@n: The number to be checked
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */
int main(void)
{
int r;
 r = print_sign(98);
 _putchar(',');
 _putchar(' ');
 _putchar(r + '0');
 _putchar('\n');
 r = print_sign(0);
 _putchar(',');
 _putchar(' ');
 _putchar(r + '0');
 _putchar('\n');
 r = print_sign(0xff);
 _putchar(',');
 _putchar(' ');
 _putchar(r + '0');
 _putchar('\n');
 r = print_sign(-1);
 _putchar(',');
 _putchar(' ');
 _putchar(r + '0');
 _putchar('\n');
 return (0);
}
