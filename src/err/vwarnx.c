#include <err.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

void
vwarnx(const char *fmt, va_list ap)
{
	c_err_vwarnx((char *)fmt, ap);
}
