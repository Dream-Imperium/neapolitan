#include <string.h>
// #include <limits.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

char *
stpcpy(char *restrict s1, const char *restrict s2)
{
	return stpncpy(s1, s2, C_USIZEMAX);
}
