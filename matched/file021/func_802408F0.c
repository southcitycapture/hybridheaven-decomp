#include "context.h"
void func_80240C74(s32 arg0, s32 arg1);
extern void func_800058DC(void *, void *);

extern s32 func_80133A24(s32);
extern void func_801339D0(s32);
extern void func_801FBB30();
extern void func_80240968();
extern s32 D_801BBCCC;

struct func_802408F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
};

void func_802408F0(struct func_802408F0_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x1A0) == 0) {
        func_800058DC(arg0, func_80240C74);
        return;
    }
    if (D_801BBCCC != 0) {
        func_801339D0(0x1A0);
        func_801FBB30();
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80240968);
    }
}
