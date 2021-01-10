#include <ctype.h>

#include "vanilla_cpu.h"

int
isupper(int c)
{
	return (uchar)c - 'A' < 26;
}
