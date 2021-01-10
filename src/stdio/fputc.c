#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
fputc(int c, FILE *p)
{
	return c_ioq_nput(p, (char *)&c, 1);
}
