#include <unistd.h>

/**
*_putchar-writes the character c to stdout
*Return : on success 1;
*On error, -1  is returned, and errno is set approipriately.
*/

int _putcher(char c)
{

	return(write(1,&c,1));

}
