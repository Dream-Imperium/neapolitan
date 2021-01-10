#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
memchr(const void *s, int c, size_t n)
{
	return c_mem_chr((void *)s, n, c);
}
