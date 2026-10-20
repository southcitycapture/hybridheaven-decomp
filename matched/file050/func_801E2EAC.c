#include "context.h"
extern s32 D_8038D8CC;
extern s32 D_801E3A8C;
extern s32 D_801E3B00[];
extern void func_8012CF8C(s32, s32, s32, s32);

s32 func_801E2EAC(s32 arg0) {
    if (D_801E3D90[arg0] != 0) {
        func_8012CF8C(D_8038D8CC, *(s32 *)(((s32 *)D_8038D8D0)[arg0 + 8] + 0x30) + 0x40, 0x46F, D_801E3B00[D_801E3DC8[arg0]]);
        D_801E3DC8[arg0] += 1;
        D_801E3DC8[arg0] %= D_801E3A8C;
    }
}
