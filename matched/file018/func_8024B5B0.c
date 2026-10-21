#include "context.h"




extern void func_8024BCE4();
extern f32 D_8025C644;

void func_8024B5B0(func_8024B5B0_StructArg0 *arg0, func_8024B5B0_StructObj **arg1) {
#define sp3C ((s32)D_80259098 | 0x40000000)
#define sp38 ((s32)D_80258FE0 | 0x40000000)
    f32 f;
    s32 pad;

    func_8012C89C(arg0, 1, 3, 4);
    func_8012CF8C(arg0, (s32)arg1[1]->unk30 + 0x40, 0x3D0, 5);
    arg1[1]->unk30->unk3A = 0;
    arg1[1]->unk30->unk24 = 0x300;
    arg1[1]->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
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
    arg1[2]->unk30->unk3A = 0;

    func_8012C89C(arg0, 2, 0x3D0, 1);
    func_8012CF8C(arg0, (s32)arg1[2]->unk30 + 0x40, 0x3D0, 3);
    arg1[2]->unk30->unk24 = 0x300;
    arg1[2]->unk30->unk30 = sp38;
    func_800062F8(arg1[2], 0x800005F0);
    arg1[2]->unk30->unk3A = 0;
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
    f = D_8025C644;
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
    func_800058DC(arg0, func_8024BCE4);
}
