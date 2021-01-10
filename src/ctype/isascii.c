#include <ctype.h>

#include "vanilla_cpu.h"

int
isascii(int c)
{
	return (uint)c < 128;
}
