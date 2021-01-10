#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

size_t
fwrite(const void *restrict p, size_t m, size_t n, FILE *restrict fp)
{
	size r;

	if (C_OFLW_UM(usize, m, n))
		return 0;

	if ((r = c_ioq_nput(fp, (char *)p, m * n)) < 0)
		return 0;

	return r;
}
