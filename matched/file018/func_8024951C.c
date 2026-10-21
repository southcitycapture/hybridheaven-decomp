#include "context.h"
void func_80248D34(func_80248D34_Struct *arg0);
extern u8 D_80258FE0[];
extern func_80249A58_StructTbl D_8025C728[];

extern f32 D_8025C5E4;
extern u8 func_80249704[];

void func_8024951C(func_8024951C_StructA *arg0, func_8024951C_Obj **arg1) {
    f32 k;
    s32 t;
    s32 sp34;
    f32 sp28[3];

    t = arg0->unk92;
    arg0->unk92 = t - 1;
    if (t == 0) {
        arg0->unk2C |= 0x20;
        if (D_8025C6F0 != NULL) {
            sp34 = *(s32 *)(D_8025C6F0 + 0x5C);
            func_80006214(D_8025C6F0);
            func_8013A334(sp28, (s32)arg1, sp34, 6);
            func_80006214(arg0);
        }
        func_8012C89C(arg0, 0, 3, 4);
        func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x3D0, 6);
        (*arg1)->unk30->unk24 = 0x60300;
        (*arg1)->unk30->unk30 = (s32)D_80258FE0 | 0x40000000;
        func_800062F8(*arg1, 0x80000600);
        k = D_8025C5E4;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = k;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk48 = 0xFF;
        (*arg1)->unk30->unk49 = 0xFF;
        (*arg1)->unk30->unk4A = 0xFF;
        (*arg1)->unk30->unk4B = 0xFF;
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0;
        (*arg1)->unk30->unk4 = sp28[0];
        (*arg1)->unk30->unk8 = sp28[1];
        (*arg1)->unk30->unkC = sp28[2];
        D_8025C728[arg0->unk90].unk0 = 1;
        arg0->unk92 = 2;
        arg0->unk94 = 0;
        func_80248D34((void *)arg0);
        func_800058DC(arg0, func_80249704);
    }
}
