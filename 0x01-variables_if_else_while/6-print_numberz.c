#include <stdio.h>
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
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
