#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
fflush(FILE *p)
{
	return c_ioq_flush(p);
}
