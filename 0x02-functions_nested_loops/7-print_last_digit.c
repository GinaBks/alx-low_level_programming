#include "main.h"


/**
 * print_last_digit - entry point
 *
 * Description: function that prints the last digit of a number.
 *
 * @a:number to compute last digit
 *
 * Return: last digit
 */


int print_last_digit(int a)
{
	int last_digit;


	last_digit = a % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}


7-main.c
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;


	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
