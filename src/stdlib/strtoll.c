#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

vlong
strtoll(const char *restrict s, char **restrict e, int b)
{
	return c_std_strtovl((char *)s, b, C_VLONGMIN, C_VLONGMAX, e, nil);
}
