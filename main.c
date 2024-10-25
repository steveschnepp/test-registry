#include <stdio.h>

#include "file.h"

void main(void) {
    for (const struct init_struct *ptr = &__start_init; ptr != &__stop_init; ptr++) {
        printf("hook for %s: ", ptr->name);
        ptr->hook();
        printf(".\n");
    }
}