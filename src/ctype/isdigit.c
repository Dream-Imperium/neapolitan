#include <ctype.h>

#include "vanilla_cpu.h"

int
isdigit(int c)
{
	return (uchar)c - '0' < 10;
}
