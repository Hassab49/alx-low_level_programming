#include <unistd.h>
#include "main.h"

/**
 * putchar - write the characcter c to stdout
 * @c : the character to print
 *
 * Return : on success 1.
 * on error -1 is returned and erro is set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

