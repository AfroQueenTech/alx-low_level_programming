#include <stdio.h>
/**
 * main - Entry point
 * Program that prints the size of various types.
 * Return: Always 0 (Success)
 */
int main(void)
	{
		char charType;
		int intType;
		long int longIntType;
		long long int longLongIntType;
		float floatType;

		printf("Size of a char: %c byte(s)\n", sizeof(charType))
		printf("Size of an int: %d byte(s)\n", sizeof(intType))
		printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType))
		printf("Size of a long long int: %lld byte(s)\n", sizeof(longLongIntType))
		printf("Size of a float: %f byte(s)\n", sizeof(floatType))

		return (0);
	}
