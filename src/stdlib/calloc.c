#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
calloc(size_t m, size_t n)
{
	return c_std_calloc(m, n);
}
