#include "context.h"

typedef struct func_801E2D40_Struct1 {
    u8 pad[0x22];
    u8 flag;
} func_801E2D40_Struct1;
typedef struct func_801E2D40_Struct0 {
    u8 pad[0x20];
    func_801E2D40_Struct1 *items[14];
} func_801E2D40_Struct0;
extern s32 D_801E3D94;
extern s32 D_801E3D98[];
extern s32 D_801E3DC8[];
extern s32 D_801E3DCC;
extern s32 D_801E3DD0[];
extern s32 D_801E3E00;

void func_801E2D40(void) {
    s32 i;

    for (i = 0; i < 14; i++) {
        D_801E3D90[i] = 0;
        D_801E3DC8[i] = 0;
        ((func_801E2D40_Struct0 *)D_8038D8D0)->items[i]->flag = 0;
    }
}
