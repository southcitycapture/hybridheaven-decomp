#include "common.h"
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;
extern func_802474E4_StructMid *D_801BBCD0;
extern u8 D_80258FE0[];
typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;
extern func_80249A58_StructTbl D_8025C728[];
extern void func_800058DC(void *, void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_8012C89C(void *, s32, s32, s32);
extern void func_8012D8C8(void *, s32, s32, s32, s32, s32);
typedef struct func_80249A58_StructArg0 {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[0x2];
    s16 unk96;
} func_80249A58_StructArg0;
typedef struct func_80249A58_StructInner {
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
} func_80249A58_StructInner;
typedef struct func_80249A58_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80249A58_StructInner *unk30;
} func_80249A58_StructObj;
void func_80249A58(func_80249A58_StructArg0 *arg0, func_80249A58_StructObj **arg1);


typedef struct func_80249704_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80249704_StructInner;
typedef struct func_80249704_StructObj {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
    func_80249704_StructInner *unk30;
} func_80249704_StructObj;
typedef struct func_80249704_StructArg0 {
    u8 pad0[0x24];
    func_80249704_StructObj *unk24;
    u8 pad28[0x68];
    s16 unk90;
    s16 unk92;
    s16 unk94;
} func_80249704_StructArg0;
typedef struct func_80249704_StructGlob {
    u8 pad0[0x24];
    func_80249704_StructObj *unk24;
} func_80249704_StructGlob;
extern void func_80248FA0();
extern s32 func_8012AAE8(void *, s32, s32, s32, f32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern func_80249704_StructGlob *D_8025C6EC;
extern s8 D_8025C6FD;
extern s16 D_8025C7E2;

void func_80249704(func_80249704_StructArg0 *arg0, func_80249704_StructObj **arg1) {
    func_80249704_StructObj **p;
    s32 i;

    func_80248FA0();
    for (i = 6; i < 11; i++) {
        arg1[i]->unk30->unk4C -= 0x1E;
        arg1[i]->unk30->unk4E += 0x1E;
    }
    if ((D_801BBCD0->unk2C->unk4 - arg1[0]->unk30->unk4) * (D_801BBCD0->unk2C->unk4 - arg1[0]->unk30->unk4) + (D_801BBCD0->unk2C->unkC - arg1[0]->unk30->unkC) * (D_801BBCD0->unk2C->unkC - arg1[0]->unk30->unkC) < 100.0f) {
        func_8037BB4C(arg0->unk24->unk30->unk12, 2.0f, 2.0f, D_8025C7E2);
    }
    if (D_8025C6EC != NULL && (D_8025C6EC->unk24->unk2C->unk4 - arg1[0]->unk30->unk4) * (D_8025C6EC->unk24->unk2C->unk4 - arg1[0]->unk30->unk4) + (D_8025C6EC->unk24->unk2C->unkC - arg1[0]->unk30->unkC) * (D_8025C6EC->unk24->unk2C->unkC - arg1[0]->unk30->unkC) < 400.0f) {
        D_8025C6FD = 1;
    }
    if (func_8012AAE8(arg0, ((s32 *)arg1[1]->unk30)[1], ((s32 *)arg1[1]->unk30)[2], ((s32 *)arg1[1]->unk30)[3], 8.0f) != 0) {
        if (!(arg0->unk94++ & 1)) {
            i = arg0->unk92;
            func_8012C89C(arg0, i, 3, 4);
            p = (func_80249704_StructObj **)((u8 *)arg1 + i * 4);
            (*p)->unk30->unk24 = 0x60300;
            (*p)->unk30->unk30 = (s32)D_80258FE0 | 0x40000000;
            func_800062F8(*p, 0x80000600);
            func_8012D8C8(arg0, 0x3D0, 7, 0x3EE66666, 2, i);
            (*p)->unk30->unk18 = 0.5f;
            (*p)->unk30->unk1C = 0.5f;
            (*p)->unk30->unk20 = 0.5f;
            (*p)->unk30->unk48 = 0xFF;
            (*p)->unk30->unk49 = 0xFF;
            (*p)->unk30->unk4A = 0xFF;
            (*p)->unk30->unk4B = 0xFF;
            (*p)->unk30->unk4C = 0xFF;
            (*p)->unk30->unk4D = 0;
            (*p)->unk30->unk4E = 0;
            (*p)->unk30->unk4 = arg1[0]->unk30->unk4;
            (*p)->unk30->unk8 = arg1[0]->unk30->unk8;
            (*p)->unk30->unkC = arg1[0]->unk30->unkC;
            arg0->unk92 = arg0->unk92 + 1;
            if (arg0->unk92 == 0xB) {
                arg0->unk92 = 2;
            }
        }
    } else {
        D_8025C728[arg0->unk90].unk0 = 2;
        func_800058DC(arg0, (void *)func_80249A58);
    }
}
