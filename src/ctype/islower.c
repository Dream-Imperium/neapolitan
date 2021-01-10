#include <ctype.h>

#include "vanilla_cpu.h"

int
islower(int c)
{
	return (uchar)c - 'a' < 26;
}
