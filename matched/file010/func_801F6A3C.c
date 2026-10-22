#include "context.h"

typedef struct func_801F6A3C_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0x10];
    u8 unkAE;
    u8 unkAF;
} func_801F6A3C_Struct;
typedef struct func_801F6A3C_StructPos {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F6A3C_StructPos;

void func_801F6A3C(func_801F6A3C_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F6A3C_StructPos *temp_v0;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((void *)arg0) != 0) {
        if (func_801F4514((void *)arg0, (f32)(u32)arg0->unk9C) != 0) {
            if (arg0->unk9D == 0) {
                sp2C->unk78 = 1;
                func_801F3B6C((struct func_801F3B6C_A *)arg0);
            }
            if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFF8, 10) == 0) {
                D_801F474C(arg0, (s16)(arg0->unk90 * 3), ((func_801F6A3C_StructPos *)D_801BBCD0->unk2C)->unk4, ((func_801F6A3C_StructPos *)D_801BBCD0->unk2C)->unkC);
                arg0->unk9D = 1;
                goto end;
            }
        } else {
            if (arg0->unk9D == 1U) {
                sp2C->unk78 = 1;
            }
            if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFE8, 10) == 0) {
                func_801F42E4((func_801F42E4_Struct *)arg0, arg0->unk9A);
                D_801F474C(arg0, arg0->unk90, (f32)arg0->unk94, (f32)arg0->unk96);
                arg0->unk9D = 0;
end:
                func_80010550(arg1, sp2C);
            }
        }
    }
}
