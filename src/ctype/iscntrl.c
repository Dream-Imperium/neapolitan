#include <ctype.h>

#include "vanilla_cpu.h"

int
iscntrl(int c)
{
	return (uchar)c < 32 || (uchar)c == '\x7F';
}
