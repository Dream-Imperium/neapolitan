#include <ctype.h>

#include "vanilla_cpu.h"

int
isgraph(int c)
{
	return (uchar)c - '!' < 94;
}
