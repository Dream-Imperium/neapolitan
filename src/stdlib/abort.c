#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void
abort(void)
{
	c_std_abort();
	for (;;) ;
}
