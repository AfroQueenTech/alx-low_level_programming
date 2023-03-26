#include <stdio>
/**
 * main - Entry point
 * Return: 0
 * Program that prints all the numbers of base 16 in lowercase.
 */
int main(void)
{
	int num, letter;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (letter= 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
