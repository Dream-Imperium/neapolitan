#include <string.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"

char *
strerror(int e)
{
	static char buf[C_ERRSIZ];

	(void)strerror_r(e, buf, sizeof(buf));
	return buf;
}
