#include <stdarg.h>
#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
fclose(FILE *p)
{
	int r;

	r = (c_ioq_flush(p) | c_sys_close(p->fd)) ? EOF : 0;
	c_ioq_free(p);
	return r;
}
