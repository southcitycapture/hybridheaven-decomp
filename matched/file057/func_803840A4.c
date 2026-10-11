#include "context.h"

typedef struct func_803840A4_Globals {
    u16 unk0;
    u8 pad2[6];
    u16 unk8;
    u8 pad10[0x36];
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u16 unk46;
} func_803840A4_Globals;

typedef struct func_803840A4_Obj {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
    u16 unk9A;
    u8 pad9C[4];
    s8 unkA0;
    u8 padA1[8];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_803840A4_Obj;

extern func_803840A4_Globals D_8017DC40;
extern void func_80384514(void);
extern void func_80381F40(void *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, u8 *a7);
extern void func_80384228(void *, s32);
extern s8 func_80376D48(void);
extern void func_801460C8(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_803840A4(func_803840A4_Obj *arg0, s32 arg1) {
    s8 sp57;
    s8 temp_v0;

    arg0->unk90 = D_8017DC40.unk0;
    arg0->unk92 = D_8017DC40.unk8;
    arg0->unk94 = D_8017DC40.unk40;
    arg0->unk96 = D_8017DC40.unk42;
    arg0->unk98 = D_8017DC40.unk46;
    arg0->unk9A = D_8017DC40.unk44;
    temp_v0 = func_80376D48();
    arg0->unkA0 = temp_v0;
    if (!(temp_v0 & 0xFF)) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_80384514);
        return;
    }
    arg0->unkA9 = 0;
    func_801460C8(arg0, &sp57, 0x24, 0x56, 0xF0, 0x64, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_80381F40(arg0, 0xA6, 0x58, 0xFF, 0xFF, 0xFF, 0x18, &sp57);
    func_80381F40(arg0, 0x73, 0x58, 0xC0, 0xC0, 0xC0, 0xC, &sp57);
    arg0->unkB0 = 0xA;
    func_800058DC(arg0, func_80384228);
}
