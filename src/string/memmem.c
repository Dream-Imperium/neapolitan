#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
memmem(const void *h0, size_t k, const void *n0, size_t l)
{
	return c_mem_mem((void *)h0, k, (void *)n0, l);
}
