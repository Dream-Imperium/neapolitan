#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
memset(void *s, int c, size_t n)
{
	return c_mem_set(s, n, c);
}
