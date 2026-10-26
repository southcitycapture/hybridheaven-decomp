#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};
extern struct func_802441AC_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80133980(u16);
extern s32 func_801C3044(void);


typedef struct {
    u8 pad0[0x9E];
    u16 unk9E;
    u16 unkA0;
    u8 padA2[2];
    u16 unkA4;
} func_80241144_Struct;

void func_802411EC(s32 arg0, s32 arg1);

void func_80241144(func_80241144_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_80133980(arg0->unk9E);
        func_80133980(arg0->unkA0);
        func_8012D918(arg0, 0x2F8, 9, 0, 0);
        *(u16 *)((u8 *)&D_801BBBF0 + 6) = 0;
        *((u8 *)&D_801BBBF0 + 0x3A6) = 0;
        *(u16 *)((u8 *)&D_801BBBF0 + 4) = arg0->unkA4;
        func_8012FE50(9, *(u16 *)((u8 *)&D_801BBBF0 + 4), 1, 1, 1);
        func_80020718(0x14E);
        func_800058DC(arg0, func_802411EC);
    }
}
