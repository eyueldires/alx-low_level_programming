#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charactor c to stdout
 * @c: the charactor to print
 * Returb: on success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
