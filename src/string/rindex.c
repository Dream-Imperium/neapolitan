#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

char *
rindex(const char *s, int c)
{
	return strrchr(s, c);
}
