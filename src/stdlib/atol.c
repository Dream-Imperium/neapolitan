#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

long
atol(const char *s)
{
	return c_std_strtovl((char *)s, 10, C_LONGMIN, C_LONGMAX, nil, nil);
}
