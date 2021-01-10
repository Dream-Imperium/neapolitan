#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void
qsort(void *v, size_t m, size_t n, int (*f) (const void *, const void *))
{
	c_std_sort(v, m, n, (ctype_cmpfn)f);
}
