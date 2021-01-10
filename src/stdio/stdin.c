#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

static uchar buf[C_BIOSIZ];
static ctype_ioq ioq = c_ioq_INIT(0, buf, &c_sys_read);
void *stdin = &ioq;
