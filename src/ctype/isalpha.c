#include <ctype.h>

#include "vanilla_cpu.h"

int
isalpha(int c)
{
	return (uchar)c - 'a' < 52;
}
