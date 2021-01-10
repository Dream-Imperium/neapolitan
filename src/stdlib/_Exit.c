#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void
_Exit(int r)
{
	c_std_exit(r);
	for (;;) ;
}
