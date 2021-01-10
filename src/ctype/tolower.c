#include <ctype.h>

#include "vanilla_cpu.h"

int
tolower(int c)
{
	return isupper(c) ? (uchar)c + ('a' - 'A') : c;
}
