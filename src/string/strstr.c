#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

char *
strstr(const char *h, const char *n)
{
	return c_str_str((char *)h, C_USIZEMAX, (char *)n);
}
