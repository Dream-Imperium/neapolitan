#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

size_t
strnlen(const char *s, size_t n)
{
	return c_str_len((char *)s, n);
}
