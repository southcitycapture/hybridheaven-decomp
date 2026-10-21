#include "context.h"
typedef struct func_8024B5B0_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x6];
    u8 unk3A;
    u8 pad3B[0xD];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024B5B0_StructInner;
typedef struct func_8024B5B0_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024B5B0_StructInner *unk30;
} func_8024B5B0_StructObj;
typedef struct func_8024B5B0_StructArg0 {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[0x2];
    s16 unk96;
} func_8024B5B0_StructArg0;
void func_8024B5B0(func_8024B5B0_StructArg0 *arg0, func_8024B5B0_StructObj **arg1);

typedef struct func_8024B2FC_StructA {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    u8 pad96[0x4];
    s16 unk9A;
} func_8024B2FC_StructA;

extern f32 D_8025C640;
extern void func_80248FA0();
extern s32 func_8012AAE8(void *, s32, s32, s32, f32);

void func_8024B2FC(func_8024B2FC_StructA *arg0, func_8024951C_Obj **arg1) {
    s32 s;
    s32 pad;

    func_80248FA0();
    if (arg0->unk9A == 0) {
        D_8025C71C = arg1[0]->unk30->unk4;
        D_8025C720 = arg1[0]->unk30->unk8;
        D_8025C724 = arg1[0]->unk30->unkC;
    }
    for (s = 6; s < 0xB; s++) {
        arg1[s]->unk30->unk4C -= 0x1E;
        arg1[s]->unk30->unk4E += 0x1E;
    }
    if (func_8012AAE8(arg0, *(s32 *)&arg1[1]->unk30->unk4, *(s32 *)&arg1[1]->unk30->unk8, *(s32 *)&arg1[1]->unk30->unkC, D_8025C640) != 0) {
        if (!(arg0->unk94++ & 1)) {
            s = arg0->unk92;
            func_8012C89C(arg0, s, 3, 4);
            arg1[s]->unk30->unk24 = 0x60300;
            arg1[s]->unk30->unk30 = (s32)D_80258FE0 | 0x40000000;
            func_800062F8(arg1[s],0x80000600);
            func_8012D8C8(arg0, 0x3D0, 7, 0x3EE66666, 2, s);
            arg1[s]->unk30->unk18 = 0.5f;
            arg1[s]->unk30->unk1C = 0.5f;
            arg1[s]->unk30->unk20 = 0.5f;
            arg1[s]->unk30->unk48 = 0xFF;
            arg1[s]->unk30->unk49 = 0xFF;
            arg1[s]->unk30->unk4A = 0xFF;
            arg1[s]->unk30->unk4B = 0xFF;
            arg1[s]->unk30->unk4C = 0xFF;
            arg1[s]->unk30->unk4D = 0;
            arg1[s]->unk30->unk4E = 0;
            arg1[s]->unk30->unk4 = arg1[0]->unk30->unk4;
            arg1[s]->unk30->unk8 = arg1[0]->unk30->unk8;
            arg1[s]->unk30->unkC = arg1[0]->unk30->unkC;
            arg0->unk92 = arg0->unk92 + 1;
            if (arg0->unk92 == 0xB) {
                arg0->unk92 = 2;
            }
        }
    } else {
        D_8025C728[arg0->unk90].unk0 = 2;
        func_800058DC(arg0, func_8024B5B0);
    }
}
