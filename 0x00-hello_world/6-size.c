#include<stdio.h>
/**
 *  *  *  * main - Entry point
 *   *   *   *   *
 *    *    *    *    * Return: always 0
 */

int main(void)
{

	int intType;
	long int lInt;
	long long int lLIn;
	char charType;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lInt));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lLIn));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
