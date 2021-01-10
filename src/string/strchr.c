#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

char *
strchr(const char *s, int c)
{
	return c_str_chr((char *)s, C_USIZEMAX, c);
}
