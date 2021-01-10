#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
memrchr(const void *s, int c, size_t n)
{
	return c_mem_rchr((void *)s, n, c);
}
