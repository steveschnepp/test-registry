#include <stdio.h>

#include "file.h"

static void hook(void) {
    puts(__FILE__);
}

INIT_HOOK(file1, hook);
