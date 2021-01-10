#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
realloc(void *p, size_t n)
{
	return c_std_realloc(p, n, sizeof(uchar));
}
