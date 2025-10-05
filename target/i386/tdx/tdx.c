#include "cpu.h"
#include "qemu/log.h"
#include "qemu/osdep.h"

#ifdef CONFIG_TDX

void tdx_hello(void) { qemu_log("TDX: Hello world from CONFIG_TDX build\n"); }

#endif
