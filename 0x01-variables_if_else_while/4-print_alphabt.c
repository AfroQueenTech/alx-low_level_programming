#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints the alphabet in lowercase except letters e and q.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'd' || 'e' < letter < 'q' ||
			letter >= 'r'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
