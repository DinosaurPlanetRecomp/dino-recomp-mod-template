#include "modding.h"
#include "imports.h"

RECOMP_CALLBACK("*", recomp_on_game_init) void my_game_init_callback() {
    recomp_printf("Hello World!\n");
}
