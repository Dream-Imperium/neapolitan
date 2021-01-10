#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

vlong
atoll(const char *s)
{
	return c_std_strtovl((char *)s, 10, C_VLONGMIN, C_VLONGMAX, nil, nil);
}
