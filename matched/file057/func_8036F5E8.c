#include "context.h"
typedef struct func_8036F5E8_S {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[2];
    s16 unk6;
    u8 pad8[0x30 - 8];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 4;
    u32 b7 : 1;
    u32 b8 : 5;
    u32 b13 : 3;
    u32 b16 : 11;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad34[0x328 - 0x34];
    u8 unk328;
    u8 pad329[0x392 - 0x329];
    u8 unk392;
} func_8036F5E8_S;
typedef struct func_8036F5E8_Obj { u8 pad0[2]; u16 unk2; u16 unk4; } func_8036F5E8_Obj;
typedef struct func_8036F5E8_Arg { u8 pad0[0x5C]; s32 unk5C; u8 pad1[8]; func_8036F5E8_Obj *unk68; } func_8036F5E8_Arg;
extern void func_802237EC();
void func_8036F7D4(void *arg0, s32 arg1);

void func_8036F5E8(void *arg0, s32 arg1) {
    func_8036F5E8_Obj *t0;
    func_8036F5E8_S *v1;
    func_8036F5E8_S *a2;
    s32 sp18;
    extern s32 func_80010550();

    t0 = ((func_8036F5E8_Arg *)arg0)->unk68;
    if (arg0 == DA->unkDC) {
        v1 = (func_8036F5E8_S *)D_801BC03C;
    } else {
        v1 = (func_8036F5E8_S *)D_801BC3D8;
    }
    if (arg0 != DA->unkDC) {
        a2 = (func_8036F5E8_S *)D_801BC03C;
    } else {
        a2 = (func_8036F5E8_S *)D_801BC3D8;
    }
    sp18 = ((func_8036F5E8_Arg *)arg0)->unk5C;
    if (v1->unk2 <= 0 || v1->b1 != 0) {
        func_802233B0(arg0, arg1, a2);
        return;
    }
    if ((DA->unk1031 == 5 || a2->unk2 <= 0 || a2->b1 != 0) && v1->b0 == 0) {
        if (v1->b13 == 5) {
            func_8022397C(arg0);
            return;
        }
        if (v1->b3 != 1 || a2->unk2 <= 0 || a2->b1 != 0) {
            func_80224AC4(arg0, 0);
            func_80010550(arg1, sp18);
            if (!(t0->unk2 & 0x2000)) {
                v1->b27 = 3;
            }
            if ((t0->unk4 & 0x8000) && !a2->b7 && v1->unk6 >= 0x1F) {
                v1->unk328 = 0;
                func_802237EC(arg0);
            } else if (v1->b27 == 3) {
                func_8036F7D4(arg0, arg1);
            }
            v1->unk392 = 0;
        }
    }
}
