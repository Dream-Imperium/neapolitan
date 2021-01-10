#include <ctype.h>

#include "vanilla_cpu.h"

int
isspace(int c)
{
	return (uchar)c == ' ' || (uchar)c - '\t' < 5;
}
