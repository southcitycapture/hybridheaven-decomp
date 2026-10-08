#include "context.h"

struct func_80240B84_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern s32 func_8012A564(void *, s32);
extern void func_801FBB30(void);
extern void func_801268F4(s32);
extern void func_801339D0(s32);
extern void func_80240BE8(void);

void func_80240B84(struct func_80240B84_Struct *arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x41700000) != 0) {
        func_801FBB30();
        arg0->unk90 = 0x46;
        func_801268F4(0);
        func_801339D0(4);
        func_800058DC(arg0, &func_80240BE8);
    }
}
