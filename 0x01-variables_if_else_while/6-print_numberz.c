#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints all single digit numbers of base ten.
 */
int main(void)
{
	for (unsigned char num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
