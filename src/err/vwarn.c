#include <err.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

void
vwarn(const char *fmt, va_list ap)
{
	c_err_vwarn((char *)fmt, ap);
}
