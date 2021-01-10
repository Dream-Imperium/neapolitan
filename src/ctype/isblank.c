#include <ctype.h>

#include "vanilla_cpu.h"

int
isblank(int c)
{
	return (uchar)c == ' ' || (uchar)c == '\t';
}
