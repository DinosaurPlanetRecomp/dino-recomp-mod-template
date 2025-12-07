#include "modding.h"
#include "recomputils.h"
#include "recompevents.h"

#include "sys/print.h"

RECOMP_HOOK_RETURN("game_init") void my_game_init_hook(void) {
    recomp_printf("Hello World!\n");
}

RECOMP_ON_GAME_TICK_CALLBACK void my_game_tick_callback(void) {
    // TIP: Enable "In-Game Debug Interface" in the recomp Debug settings menu to see this!
    diPrintf("Hello from game_tick!");
}
