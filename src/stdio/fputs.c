#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
fputs(const char *restrict s, FILE *restrict p)
{
	return c_ioq_put(p, (char *)s);
}
