#include "context.h"
struct func_80251DB4_Struct_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x4B - 0x10];
    u8 unk4B;
};
struct func_80251DB4_Struct_Node {
    u8 pad[0x30];
    struct func_80251DB4_Struct_Obj *unk30;
};
struct func_80251DB4_Struct_Arg0 {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
};
void func_80251DB4(struct func_80251DB4_Struct_Arg0 *arg0, struct func_80251DB4_Struct_Node **arg1);
typedef struct func_80251BEC_StructO {
    u8 pad0[4];
    f32 unk4; f32 unk8; f32 unkC;
    u8 pad1[8];
    f32 unk18; f32 unk1C; f32 unk20;
    u32 unk24;
    u8 pad2[8];
    u32 unk30;
    u8 pad3[0x14];
    u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E;
} func_80251BEC_StructO;
typedef struct func_80251BEC_StructN { u8 pad[0x30]; func_80251BEC_StructO *unk30; } func_80251BEC_StructN;
typedef struct func_80251BEC_StructA { u8 pad[0x90]; f32 unk90; f32 unk94; f32 unk98; } func_80251BEC_StructA;
extern void func_8012CF8C(void *, s32, s32, s32);
extern s32 func_801302CC();
extern u8 D_80254C18[];
extern f32 D_8025A250;
extern f32 D_8025A254;
void func_80251BEC(func_80251BEC_StructA *arg0, func_80251BEC_StructN **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;
    *(func_8024E43C_StructV *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 5);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x28C, 2);
    k = D_8025A250;
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80254C18 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0x80;
    (*arg1)->unk30->unk4D = 0x80;
    (*arg1)->unk30->unk4E = 0x80;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    if (func_801302CC() == 0) {
        (*arg1)->unk30->unk18 = D_8025A254;
    } else {
        (*arg1)->unk30->unk18 = 0.25f;
    }
    func_800058DC(arg0, (void *)func_80251DB4);
}
