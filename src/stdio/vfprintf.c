#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
vfprintf(FILE *restrict fp, const char *restrict s, va_list ap)
{
	return (int)c_ioq_vfmt(fp, (char *)s, ap);
}
