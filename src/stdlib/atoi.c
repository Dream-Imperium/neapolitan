#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

int
atoi(const char *s)
{
	return c_std_strtovl((char *)s, 10, C_INTMIN, C_INTMAX, nil, nil);
}
