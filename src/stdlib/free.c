#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void
free(void *p)
{
	(void)c_std_free_(p);
}
