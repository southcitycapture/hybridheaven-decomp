#include "context.h"

struct func_801FA8A0_Struct4 { s32 a, b, c, d; };
struct func_801FA8A0_Q {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; s16 unk10; s16 unk12; s16 unk14; u8 pad16[2];
    f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30; u8 pad34[0x4B - 0x34]; u8 unk4B;
};
struct func_801FA8A0_Outer {
    u8 pad0[0x30]; struct func_801FA8A0_Q *unk30;
};
struct func_801FA8A0_H {
    u8 pad0[0x30]; struct func_801FA8A0_Q *unk30;
};
struct func_801FA8A0_G { u8 pad0[0x24]; struct func_801FA8A0_H *unk24; };
struct func_801FA8A0_Obj {
    u8 pad0[0x72]; u16 unk72; u8 pad74[0x92 - 0x74]; s16 unk92;
};

extern s32 func_80126B14(void *, void *, u16, s32);
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);
extern void func_80145390(s32);
extern u8 D_80216F30[];
extern f32 D_80218E0C;
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_80145310(s32, s32, s32);
struct func_801FAAA4_Struct;
void func_801FAAA4(struct func_801FAAA4_Struct *arg0, s32 arg1);

void func_801FA8A0(struct func_801FA8A0_Obj *arg0, struct func_801FA8A0_Outer **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(struct func_801FA6FC_Local *)&sp28 = D_80164F40;
    if (func_80126B14(arg0, func_80126EAC,arg0->unk72, 0x227) != 0) {
        func_8001F74C(arg0);
        sp28.a[1] =0x80000600;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C((s32)arg0, 0, 0x227, 2);
        func_8012D8C8(arg0, 0x227, 1, 0.1f, 1, 0);
        k = D_80218E0C;
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32)D_80216F30 | 0x40000000;
        (*arg1)->unk30->unk4 = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unk4;
        (*arg1)->unk30->unk8 = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unk8;
        (*arg1)->unk30->unkC = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unkC;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = 0.0f;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk10 = 0;
        (*arg1)->unk30->unk12 = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unk12;
        (*arg1)->unk30->unk14 = 0;
        func_80145310((s32)*arg1, 3, 3);
        (*arg1)->unk30->unk4B = 0x96;
        arg0->unk92 = -0x800;
        func_80145390(0x1800);
        func_800058DC((s32)arg0, func_801FAAA4);
    }
}
