#include "context.h"

struct func_80380908_Sub {
    u8 pad0[0x4];
    u16 unk4;
};
struct func_80380908_Obj {
    u8 pad0[0xA4];
    struct func_80380908_Sub *unkA4;
};

extern void func_801471DC(s32 a0);
extern void func_80147DCC(s32 a0);
extern void func_80148E44(void *a0);
extern void func_80148FC4(void *a0, void (*a1)(), s32 a2, s32 a3);
extern void func_8014AB48();

void func_80380908(struct func_80380908_Obj *arg0, s32 arg1) {
    struct func_80380908_Sub *temp_v0;
    s32 temp_v1;

    temp_v0 = arg0->unkA4;
    temp_v1 = temp_v0->unk4;
    if (temp_v1 & 0x4000) {
        func_801471DC((s32)D_8038A9B8);
        func_80147DCC(2);
        func_8037E38C(arg0, arg1);
        func_800058DC(arg0, func_80380584);
        return;
    }
    if (temp_v1 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 4, 1);
    }
}
