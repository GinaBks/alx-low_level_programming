#include "main.h"


/**
  * print_times_table - printsthe times inputed
  * starting with 0.
  *@n: the value of the timea table printed
  */


void print_times_table(int n)
{


	int num, mult, prod;


	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (mult = 1; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * mult;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}


100-main.c
#include "main.h"


/**
 * main - check the code.
 *
 * Return: Always 0.
 */


int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}
