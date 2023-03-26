#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints all single digit numbers of base ten
 * with putchar only, but without char.
 */
int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
