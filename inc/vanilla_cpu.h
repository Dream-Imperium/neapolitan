#ifndef _VANILLACPU_H
#define _VANILLACPU_H
#define va_list __va_list
#include <vanilla/cpu.h>
#undef va_list
#undef va_start
#undef va_arg
#undef va_copy
#undef va_end
#endif
