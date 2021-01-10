#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

char *
index(const char *s, int c)
{
	return strchr(s, c);
}
