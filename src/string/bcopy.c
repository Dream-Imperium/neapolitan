#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void
bcopy(const void *s1, void *s2, size_t n)
{
	(void)c_mem_cpy(s2, n, (void *)s1);
}
