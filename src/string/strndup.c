#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

char *
strndup(const char *s, size_t len)
{
	return c_str_dup((char *)s, len);
}
