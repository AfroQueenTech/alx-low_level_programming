#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that assigns a random number to a variable n.
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("'%d' is positive");
	else if (n == 0)
		printf("'%d' is zero");
	else
		printf("'%d' is negative");
	return (0);
