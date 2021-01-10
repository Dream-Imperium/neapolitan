#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

size_t
strlen(const char *s)
{
	return c_str_len((char *)s, C_USIZEMAX);
}
