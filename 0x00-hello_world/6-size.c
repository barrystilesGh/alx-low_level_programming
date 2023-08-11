#include<stdio.h>
/**
*main-Entry Point
*
*Return: 0 Always (Success);
*/
int main(void)
{
	int i;
	char d;
	float f;
	long long int l;
	long int c;

	printf("Size of a char: %d byte(s)\n", sizeof(d));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(l));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
