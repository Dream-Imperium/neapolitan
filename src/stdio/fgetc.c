#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
fgetc(FILE *p)
{
	char buf;

	return ((c_ioq_getall(p, &buf, 1) <= 0) ? EOF : buf);
}
