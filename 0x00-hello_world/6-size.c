#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char characterName;
	int integerValue;
	long longIntegerValue;
	long long lLongIntegerValue;
	float floatNumber;


	printf("Size of a char: %ld byte(s)\n", sizeof(characterName));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerValue));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntegerValue));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lLongIntegerValue));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatNumber));

	return (0);
}
