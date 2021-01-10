#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

int
strerror_r(int e, char *s, size_t n)
{
	(void)c_std_strerror(e, s, n);
	return 0;
}
