#include "context.h"
void func_80248D10(struct func_80248D10_Struct *arg0);
typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;
extern func_80249A58_StructTbl D_8025C728[];
typedef struct func_8024951C_S30 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x8];
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
} func_8024951C_S30;
typedef struct func_8024951C_Obj {
    u8 pad0[0x30];
    func_8024951C_S30 *unk30;
} func_8024951C_Obj;
typedef struct func_8024951C_StructA {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x60];
    s16 unk90;
    s16 unk92;
    s16 unk94;
} func_8024951C_StructA;
void func_8024951C(func_8024951C_StructA *arg0, func_8024951C_Obj **arg1);

typedef struct func_802492E8_StructObj {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
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
} func_802492E8_StructObj;
typedef struct func_802492E8_StructMid {
    u8 pad0[0x30];
    func_802492E8_StructObj *unk30;
} func_802492E8_StructMid;
typedef struct func_802492E8_StructA1 {
    u8 pad0[0x4];
    func_802492E8_StructMid *unk4;
} func_802492E8_StructA1;
typedef struct func_802492E8_StructEnt {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_802492E8_StructEnt;
typedef struct func_802492E8_StructA0 {
    u8 pad0[0x35];
    u8 unk35;
    u8 pad36[0x5A];
    s16 unk90;
    s16 unk92;
} func_802492E8_StructA0;
extern void func_80005700(void *);
extern f32 D_8025C5E0;
extern void D_800062F8(void *, s32);

void func_802492E8(func_802492E8_StructA0 *arg0, func_802492E8_StructA1 *arg1) {
    s32 i;
    f32 k;
    s32 c;
    func_802492E8_StructEnt *e;

    arg0->unk35 = D_801BBBF0.unk104;
    D_801BBBF0.unk104 = D_801BBBF0.unk104 + 1;
    func_8001F74C();
    i = 0;
    for (i = 0; i != 0xB; ) {
        if (func_80005F6C(arg0, D_80164F40) == 0) {
            func_80005700(arg0);
            D_8025C728[arg0->unk90].unk0 = 0;
            return;
        }
        i++;
    }
    func_80006214(arg0);
    func_8012C89C(arg0, 1, 3, 2);
    func_8012CF8C(arg0, (s32)arg1->unk4->unk30 + 0x40, 0x3D0, 0);
    arg1->unk4->unk30->unk24 = 0x100;
    arg1->unk4->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
    D_800062F8(arg1->unk4, 0x80000A00);
    k = D_8025C5E0;
    arg1->unk4->unk30->unk18 = k;
    arg1->unk4->unk30->unk1C = k;
    arg1->unk4->unk30->unk20 = k;
    arg1->unk4->unk30->unk10 = 0x1800;
    arg1->unk4->unk30->unk48 = 0xFF;
    arg1->unk4->unk30->unk49 = 0;
    arg1->unk4->unk30->unk4A = 0;
    arg1->unk4->unk30->unk4B = 0xFF;
    c = arg0->unk90;
    e = (func_802492E8_StructEnt *)((u8 *)D_8025C728 + c * 0x14);
    arg1->unk4->unk30->unk4 = e->unk4;
    arg1->unk4->unk30->unk8 = e->unk8;
    arg1->unk4->unk30->unkC = e->unkC;
    arg1->unk4->unk30->unk12 = e->unk10;
    func_80248D10((void *)arg0);
    arg0->unk92 = 8;
    func_800058DC(arg0, func_8024951C);
}
