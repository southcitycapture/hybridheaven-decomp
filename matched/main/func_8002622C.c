#include "context.h"

struct func_8002622C_Struct {
    s32 unk0;
    u8 unk4;
    u8 pad5[9];
    u8 unkE;
    u8 unkF;
};

extern void func_80026950(s32, void *, s32, s32);
extern s32 D_800498F0;
extern u8 D_800CBBE0[];

void func_8002622C(void) {
    if (((struct func_8002622C_Struct *) D_800CBDA4)->unkE != 0) {
        ((struct func_8002622C_Struct *) D_800CBDA4)->unkF = 1;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, 0, 0x1388);
    }
    ((struct func_8002622C_Struct *) D_800CBDA4)->unk0 = 0;
    ((struct func_8002622C_Struct *) D_800CBDA4)->unk4 = ((struct func_8002622C_Struct *) D_800CBDA4)->unk0;
}
