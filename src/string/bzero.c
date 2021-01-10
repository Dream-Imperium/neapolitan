#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void
bzero(void *s, size_t n)
{
	(void)c_mem_set(s, n, 0);
}
