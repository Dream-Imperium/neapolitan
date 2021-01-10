#include <string.h>

#include "vanilla_cpu.h"

char *
strdup(const char *s)
{
	return strndup(s, C_USIZEMAX);
}
