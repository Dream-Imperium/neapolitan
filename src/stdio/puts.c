#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
puts(const char *s)
{
	return c_ioq_fmt(ioq1, "%s\n", (char *)s);
}
