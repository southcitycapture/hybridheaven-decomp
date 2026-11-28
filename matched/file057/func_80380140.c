#include "common.h"
extern void (*D_803897C0)(void *);
extern s32 func_80006214(void *);


typedef struct func_80380140_StructV { s32 w[5]; } func_80380140_StructV;
typedef struct func_80380140_StructQ { s32 w[4]; } func_80380140_StructQ;
typedef struct func_80380140_StructT { s32 w[3]; } func_80380140_StructT;
typedef struct func_80380140_StructC {
    u8 pad0[4]; f32 unk4, unk8, unkC; u8 pad1[8];
    f32 unk18, unk1C, unk20; s32 unk24; u8 pad2[8]; s32 unk30;
    u8 pad3[0x14]; u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
} func_80380140_StructC;
typedef struct func_80380140_StructB { u8 pad[0x30]; func_80380140_StructC *unk30; } func_80380140_StructB;
typedef struct func_80380140_StructA {
    u8 pad[0x24]; func_80380140_StructB *unk24; u8 pad1[4]; s32 unk2C;
    u8 pad2[0xC]; s16 unk3C; u8 unk3E, pad3; f32 unk40, unk44, unk48;
    u8 pad4[0x44]; u8 unk90, unk91; s16 unk92;
} func_80380140_StructA;
typedef struct func_80380140_StructE {
    u8 pad[2]; u16 unk2, unk4, unk6, unk8, unkA, unkC; u8 padE[2]; s32 unk10, unk14, unk18;
} func_80380140_StructE;
extern func_80380140_StructA *func_8012C4D0(s32, func_80380140_StructV, s32);
extern void func_80005E44(void *, func_80380140_StructQ *);
extern void func_8001F74C(void *);
extern void func_8012C89C(void *, s32, u16, u16);
extern void func_8012CF8C(void *, void *, u16, u16);
extern void func_8012D814(void *, u32, u16, f32, s32);
extern func_80380140_StructV D_803897F4;
extern func_80380140_StructQ D_80164F40;
extern u8 D_80175D98[];
extern s32 D_801BBC2C;

s32 func_80380140(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, s8 arg14, f32 arg15, u8 arg16, u8 arg17) {
    func_80380140_StructA *s0;
    func_80380140_StructE *s1;
    func_80380140_StructT sp3C;
    s32 id;

    s0 = func_8012C4D0(D_801BBC2C, D_803897F4, 4);
    if (s0 != NULL) {
        s0->unk40 = arg3;
        s0->unk44 = arg4;
        s0->unk48 = arg5;
        s0->unk3E = (u32)arg6;
        s0->unk92 = arg14;
        s0->unk91 = arg17;
        s0->unk90 = arg16;
        s0->unk3C = 0;
        s0->unk2C |= 0x60;
        *(func_80380140_StructQ *)&sp3C = D_80164F40;
        s1 = (func_80380140_StructE *)(D_80175D98 + arg16 * 0x1C);
        sp3C.w[1] = s1->unk10;
        func_80005E44(s0, (func_80380140_StructQ *)&sp3C);
        func_80006214(s0);
        s0->unk24->unk30->unk4 = arg0;
        s0->unk24->unk30->unk8 = arg1;
        s0->unk24->unk30->unkC = arg2;
        s0->unk24->unk30->unk18 = arg15;
        s0->unk24->unk30->unk1C = arg15;
        s0->unk24->unk30->unk20 = arg15;
        s0->unk24->unk30->unk48 = arg7;
        s0->unk24->unk30->unk49 = arg8;
        s0->unk24->unk30->unk4A = arg9;
        s0->unk24->unk30->unk4B = arg13;
        s0->unk24->unk30->unk4C = arg10;
        s0->unk24->unk30->unk4D = arg11;
        s0->unk24->unk30->unk4E = arg12;
        func_8012C89C(s0, 0, s1->unk2, s1->unk4);
        id = s1->unk6;
        if (id != 0) {
            if (arg17 & 1) {
                func_8012D814(s0, id | 0, s1->unk8, 1.0f, 1);
            } else {
                func_8012D814(s0, id | 0, s1->unk8, 1.0f, 0);
            }
        }
        if (s1->unkA != 0) {
            func_8012CF8C(s0, (u8 *)s0->unk24->unk30 + 0x40, s1->unkA, s1->unkC);
        }
        s0->unk24->unk30->unk24 = s1->unk14;
        s0->unk24->unk30->unk30 = s1->unk18 | 0x40000000;
        func_8001F74C(s0);
        return 1;
    }
    return 0;
}
