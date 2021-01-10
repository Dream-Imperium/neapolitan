#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"
#include "__int__.h"

#define GETOP(a) \
(((a) & C_ORDWR) ? nil : ((a) & C_OWRITE) ? c_sys_write : c_sys_read)

FILE *
fdopen(int fd, const char *restrict m)
{
	uint mode;

	if ((mode = __stdio_filestrmode(m)) == (uint)-1) {
		errno = C_EINVAL;
		return nil;
	}

	return c_ioq_alloc(fd, C_BIOSIZ, GETOP(mode));
}
