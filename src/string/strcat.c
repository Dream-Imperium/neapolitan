#include <string.h>

#include "vanilla_cpu.h"

char *
strcat(char *restrict s1, char *restrict s2)
{
	return strncat(s1, s2, C_USIZEMAX);
}
