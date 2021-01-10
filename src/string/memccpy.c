#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	return c_mem_ccpy(s1, n, (void *)s2, c);
}
