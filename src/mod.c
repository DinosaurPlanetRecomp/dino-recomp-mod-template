#include "modding.h"
#include "recomputils.h"

RECOMP_HOOK_RETURN("game_init") void my_game_init_hook() {
    recomp_printf("Hello World!\n");
}
