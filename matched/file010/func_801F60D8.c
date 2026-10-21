#include "context.h"
s32 func_801F3FFC(struct func_801F3FFC_Arg *arg0, f32 arg1);
void func_801F42E4(func_801F42E4_Struct *arg0, u16 arg1);
void func_801F4A48(func_801F4A48_Struct *arg0);
void func_801F5230(struct func_801F5230_StructArg *arg0);
s32 func_801F55EC(func_801F55EC_Struct *arg0);
extern s32 func_801F5630();
typedef struct func_801F63E0_Struct3 { s32 w0; s32 w1; s32 w2; } func_801F63E0_Struct3;
extern void func_801F74FC();
extern s32 D_8012CE9C(s32, s32, func_801F63E0_Struct3, s32);
typedef struct func_801F74FC_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
} func_801F74FC_Obj;
void func_801F74FC(func_801F74FC_Obj *arg0, s32 arg1);
extern s32 func_8012C6B4(s32);

typedef struct func_801F60D8_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[1];
    u8 unk93;
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 pad9C[0xAE - 0x9C];
    u8 unkAE;
    s8 unkAF;
} func_801F60D8_Obj;

extern void func_801F3B6C();
extern void D_801F474C(void *, s32, f32, f32);
extern void func_801F62DC();
extern func_801F63E0_Struct3 D_8021AFE8;

void func_801F60D8(func_801F60D8_Obj *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C = arg0->unk5C;
    struct func_801F3FFC_Node *q;

    if (func_801F5630() && func_801F55EC((func_801F55EC_Struct *)arg0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((struct func_801F5230_StructArg *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFE8, 10) == 0) {
            func_801F4A48((func_801F4A48_Struct *)arg0);
            if (arg0->unk93 != 0) {
                q = D_801BBCD0->unk2C;
                D_801F474C(arg0, arg0->unk90, *(f32 *)((u8 *)q + 4), *(f32 *)((u8 *)q + 0xC));
                if ((arg0->unk3C++ % 60) == 0 && func_8012C6B4(3) < 2) {
                    sp2C->unk78 = 1;
                    func_801F3B6C(arg0);
                    func_800058DC(arg0, (s32)func_801F62DC);
                }
            } else {
                func_801F42E4((func_801F42E4_Struct *)arg0, arg0->unk9A);
                D_801F474C(arg0, arg0->unk90, (f32)arg0->unk94, (f32)arg0->unk96);
            }
            func_80010550(arg1, sp2C);
        }
    }
}
