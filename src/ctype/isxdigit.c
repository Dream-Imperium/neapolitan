#include <ctype.h>

#include "vanilla_cpu.h"

int
isxdigit(int c)
{
	return isdigit(c) || ((uchar)c | 32) - 'a' < 6;
}
