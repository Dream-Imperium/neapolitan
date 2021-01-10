#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

char *
strrchr(const char *s, int c)
{
	return c_str_rchr((char *)s, C_USIZEMAX, c);
}
