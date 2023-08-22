#include "main.h"
#include <unistd.h>
/**
*_putchar - write function that check for uppercase character
*Return: On Successs 1.
*On error, -1 is returned, and error is set approprietly
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
