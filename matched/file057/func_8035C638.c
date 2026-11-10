#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC();
void func_8035C7E8(s32 arg0, s32 arg1);


typedef struct func_8035C638_Copy {
    s32 w0;
    s32 w4;
    s32 w8;
} func_8035C638_Copy;
typedef struct func_8035C638_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035C638_Leaf;
typedef struct func_8035C638_Mid {
    u8 pad0[0x2C];
    func_8035C638_Leaf *unk2C;
} func_8035C638_Mid;
typedef struct func_8035C638_Obj {
    u8 pad0[0x24];
    func_8035C638_Mid *unk24;
} func_8035C638_Obj;
typedef struct func_8035C638_Globals {
    u8 pad0[0xDC];
    func_8035C638_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035C638_Obj *unkEC;
    u8 padF0[0x1038 - 0xF0];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_8035C638_Globals;
typedef struct func_8035C638_Arg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x6C - 0x10];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x80 - 0x78];
    f32 unk80;
    f32 unk84;
    f32 unk88;
} func_8035C638_Arg;
typedef struct func_8035C638_A1 {
    u8 pad0[0x320];
    u8 unk320;
    u8 pad321[0x365 - 0x321];
    u8 unk365;
    u8 pad366[0x368 - 0x366];
    f32 unk368;
    u8 pad36C[0x370 - 0x36C];
    f32 unk370;
} func_8035C638_A1;
typedef struct func_8035C638_V1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x392 - 0x2DA];
    u8 unk392;
} func_8035C638_V1;
#define G8 ((func_8035C638_Globals *)D_801BBBF0)
extern s32 func_8001EF38(f32, f32, void *);
extern void func_803671A0(void *, void *, func_8035C638_Copy, s32);
extern u8 D_801BCC25[];
void func_8035C638(func_8035C638_Arg *arg0);

void func_8035C638(func_8035C638_Arg *arg0) {
    func_8035C638_Obj *s0;
    func_8035C638_V1 *v1;
    func_8035C638_A1 *a1;
    s32 pad0;
    s32 pad1;
    s32 pad2;
    s32 pad3;
    s16 sp2A;
    func_8035C638_Obj *dc;

    a1 = (func_8035C638_A1 *)arg0->unkC;
    dc = G8->unkDC;
    if ((s32)dc != (s32)a1) {
        s0 = dc;
    } else {
        s0 = G8->unkEC;
    }
    v1 = ((s32)dc == (s32)a1) ? (func_8035C638_V1 *)D_801BC03C : (func_8035C638_V1 *)D_801BC3D8;
    a1 = ((s32)dc != (s32)a1) ? (func_8035C638_A1 *)D_801BC03C : (func_8035C638_A1 *)D_801BC3D8;
    v1->unk392 = 0;
    sp2A = s0->unk24->unk2C->unk12;
    G8->unk1038 = arg0->unk80 - arg0->unk6C;
    G8->unk103C = arg0->unk84 - arg0->unk70;
    G8->unk1040 = arg0->unk88 - arg0->unk74;
    a1->unk320 = ((s16)((sp2A - func_8001EF38(G8->unk1038, G8->unk1040, D_801BBBF0)) + 0x400) & 0x1FFF) / 2048;
    if (v1->unk2D8 == 0xC || (v1->unk2D8 == 0x13 && v1->unk2D9 < 5)) {
        func_803671A0(s0, a1, *(func_8035C638_Copy *)(D_801BCC25 + 3), 10);
        a1->unk368 = a1->unk368 * 3.0f;
        a1->unk370 = a1->unk370 * 3.0f;
    } else {
        a1->unk365 = 0;
        a1->unk370 = 0.0f;
        a1->unk368 = 0.0f;
    }
    func_800058DC(s0, func_8035C7E8);
}
