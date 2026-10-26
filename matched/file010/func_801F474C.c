#include "common.h"
extern s32 func_8012C6B4(s32);
extern void (*D_80216D10[])(void *, s32);


typedef struct func_801F474C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801F474C_StructInner;

typedef struct func_801F474C_StructMid {
    u8 pad[0x2C];
    func_801F474C_StructInner *unk2C;
} func_801F474C_StructMid;

typedef struct func_801F474C_Struct {
    u8 pad[0x24];
    func_801F474C_StructMid *unk24;
} func_801F474C_Struct;

extern void D_801F46DC(func_801F474C_Struct *, s16 *, s16 *, f32, f32);

void func_801F474C(func_801F474C_Struct *arg0, s16 arg1, f32 arg2, f32 arg3) {
    s32 pad[3];
    s8 dir;
    s16 sp28;
    s16 sp26;

    D_801F46DC(arg0, &sp28, &sp26, arg2, arg3);
    if (sp26 < 0x64) {
        dir = 0;
    } else if (sp26 > 0x1000) {
        dir = -1;
    } else {
        dir = 1;
    }
    sp28 += dir * func_8012C6B4(arg1);
    arg0->unk24->unk2C->unk12 = sp28 & 0x1FFF;
}
