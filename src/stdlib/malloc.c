#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
malloc(size_t n)
{
	return c_std_alloc(n, sizeof(uchar));
}
