#include <ctype.h>

#include "vanilla_cpu.h"

int
toupper(int c)
{
	return islower(c) ? (uchar)c - ('a' - 'A') : c;
}
