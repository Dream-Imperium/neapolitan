#include <ctype.h>

#include "vanilla_cpu.h"

int
isprint(int c)
{
	return (uchar)c - ' ' < 95;
}
