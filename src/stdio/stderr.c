#include <stdio.h>

#include "vanilla_cpu.h"
#include "vanilla_dat.h"
#include "vanilla_fns.h"

static uchar buf[C_ERRSIZ];
static ctype_ioq ioq = c_ioq_INIT(2, buf, &c_sys_write);
void *stderr = &ioq;
