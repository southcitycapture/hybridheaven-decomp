#include "context.h"

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

typedef struct func_80249A58_StructArg0 {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[0x2];
    s16 unk96;
} func_80249A58_StructArg0;

typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;

extern void func_8012D8C8(void *, s32, s32, s32, s32, s32);
extern u8 D_80258FE0[];
extern u8 D_80259098[];
extern func_80249A58_StructTbl D_8025C728[];
extern void func_8024A168();
extern f32 D_8025C5E8;

void func_80249A58(func_80249A58_StructArg0 *arg0, func_80249A58_StructObj **arg1) {
#define sp3C ((s32)D_80259098 | 0x40000000)
#define sp38 ((s32)D_80258FE0 | 0x40000000)
    f32 f;
    s32 pad;

    func_8012C89C(arg0, 1, 3, 4);
    func_8012CF8C(arg0, (s32)arg1[1]->unk30 + 0x40, 0x3D0, 5);
    arg1[1]->unk30->unk3A = 0;
    arg1[1]->unk30->unk24 = 0x300;
    arg1[1]->unk30->unk30 = sp3C;
    func_800062F8(arg1[1], 0x80000A00);
    arg1[1]->unk30->unk18 = 0.0f;
    arg1[1]->unk30->unk1C = 0.0f;
    arg1[1]->unk30->unk20 = 0.0f;
    arg1[1]->unk30->unk48 = 0xFF;
    arg1[1]->unk30->unk49 = 0xFF;
    arg1[1]->unk30->unk4A = 0xFF;
    arg1[1]->unk30->unk4B = 0xFF;
    arg1[1]->unk30->unk4C = 0xFF;
    arg1[1]->unk30->unk4D = 0;
    arg1[1]->unk30->unk4E = 0;

    func_8012C89C(arg0, 0, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[0]->unk30 + 0x40, 0x3D0, 2);
    arg1[0]->unk30->unk3A = 0;
    arg1[0]->unk30->unk24 = 0x300;
    arg1[0]->unk30->unk30 = sp38;
    func_800062F8(arg1[0], 0x800005EF);
    arg1[0]->unk30->unk18 = 0.0f;
    arg1[0]->unk30->unk1C = 0.0f;
    arg1[0]->unk30->unk20 = 0.0f;
    arg1[0]->unk30->unk48 = 0xFF;
    arg1[0]->unk30->unk49 = 0xFF;
    arg1[0]->unk30->unk4A = 0xFF;
    arg1[0]->unk30->unk4B = 0xFF;
    arg1[0]->unk30->unk4C = 0xFF;
    arg1[0]->unk30->unk4D = 0;
    arg1[0]->unk30->unk4E = 0;
    arg1[0]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[0]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[0]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[0]->unk30->unk10 = 0;
    arg1[0]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[0]->unk30->unk14 = 0;
    arg1[2]->unk22 = 1;

    func_8012C89C(arg0, 2, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[2]->unk30 + 0x40, 0x3D0, 3);
    arg1[2]->unk30->unk3A = 0;
    arg1[2]->unk30->unk24 = 0x300;
    arg1[2]->unk30->unk30 = sp38;
    func_800062F8(arg1[2], 0x800005F0);
    arg1[2]->unk30->unk18 = 0.0f;
    arg1[2]->unk30->unk1C = 0.0f;
    arg1[2]->unk30->unk20 = 0.0f;
    arg1[2]->unk30->unk48 = 0xFF;
    arg1[2]->unk30->unk49 = 0xFF;
    arg1[2]->unk30->unk4A = 0xFF;
    arg1[2]->unk30->unk4B = 0xFF;
    arg1[2]->unk30->unk4C = 0xFF;
    arg1[2]->unk30->unk4D = 0;
    arg1[2]->unk30->unk4E = 0;
    arg1[2]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[2]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[2]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[2]->unk30->unk14 = 0;
    arg1[2]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[2]->unk30->unk14 = 0;
    arg1[3]->unk22 = 1;

    func_8012C89C(arg0, 3, 3, 2);
    func_8012CF8C(arg0, (s32)arg1[3]->unk30 + 0x40, 0x3D0, 4);
    arg1[3]->unk30->unk3A = 0;
    arg1[3]->unk30->unk24 = 0x300;
    arg1[3]->unk30->unk30 = sp3C;
    func_800062F8(arg1[3], 0x80000A00);
    arg1[3]->unk30->unk18 = 0.0f;
    arg1[3]->unk30->unk1C = 0.0f;
    arg1[3]->unk30->unk20 = 0.0f;
    arg1[3]->unk30->unk48 = 0xFF;
    arg1[3]->unk30->unk49 = 0xFF;
    arg1[3]->unk30->unk4A = 0xFF;
    arg1[3]->unk30->unk4B = 0xFF;
    arg1[3]->unk30->unk4C = 0xFF;
    arg1[3]->unk30->unk4D = 0;
    arg1[3]->unk30->unk4E = 0;
    arg1[3]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[3]->unk30->unk8 = arg1[1]->unk30->unk8;
    arg1[3]->unk30->unkC = arg1[1]->unk30->unkC;
    arg1[3]->unk30->unk10 = arg1[1]->unk30->unk10;
    arg1[3]->unk30->unk12 = arg1[1]->unk30->unk12;
    arg1[3]->unk30->unk14 = arg1[1]->unk30->unk14;

    func_8012C89C(arg0, 4, 3, 2);
    func_8012D8C8(arg0, 0x3D0, 9, 0x3F000000, 2, 4);
    arg1[4]->unk30->unk24 = 0x80300;
    arg1[4]->unk30->unk30 = sp38;
    func_800062F8(arg1[4], 0x80000600);
    f = D_8025C5E8;
    arg1[4]->unk30->unk18 = f;
    arg1[4]->unk30->unk1C = f;
    arg1[4]->unk30->unk20 = f;
    arg1[4]->unk30->unk48 = 0xFF;
    arg1[4]->unk30->unk49 = 0xFF;
    arg1[4]->unk30->unk4A = 0xFF;
    arg1[4]->unk30->unk4B = 0xFF;
    arg1[4]->unk30->unk4C = 0xFF;
    arg1[4]->unk30->unk4D = 0;
    arg1[4]->unk30->unk4E = 0;
    arg1[4]->unk30->unk4 = arg1[1]->unk30->unk4;
    arg1[4]->unk30->unk8 = arg1[1]->unk30->unk8 + 13.0f;
    arg1[4]->unk30->unkC = arg1[1]->unk30->unkC;
    arg0->unk92 = 0x40;
    D_8025C728[arg0->unk90].unk0 = 2;
    arg0->unk96 = 6;
    func_802490C4((func_802490C4_Struct *)arg0);
    func_800058DC(arg0, func_8024A168);
}
