#include "common.h"
typedef struct func_801CA274_StructD {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA274_StructD;
typedef struct func_801CA274_StructE {
    u8 pad[0x2C];
    func_801CA274_StructD *unk2C;
} func_801CA274_StructE;
extern struct func_801CA274_StructE *D_801BBCD8;
extern u8 D_801D9908[];
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern s32 func_80005E44(s32, void *);
void func_80006214(s32 arg0);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_8012CF8C(void *, u8 *, s32, s32);
struct func_801CA510_Node {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
};
struct func_801CA510_Inner {
    u8 pad0[0x30];
    struct func_801CA510_Node *unk30;
};
struct func_801CA510_Outer {
    u8 pad0[0xB0];
    u16 unkB0;
    u16 unkB2;
};
void func_801CA510(struct func_801CA510_Outer *arg0, struct func_801CA510_Inner **arg1);


typedef struct func_801CA274_StructC {
    s16 unk0;
    u8 pad2[2];
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
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801CA274_StructC;

typedef struct func_801CA274_StructB {
    u8 pad[0x30];
    func_801CA274_StructC *unk30;
} func_801CA274_StructB;

typedef struct func_801CA274_StructA {
    u8 pad[0x90];
    f32 unk90, unk94, unk98, unk9C, unkA0, unkA4, unkA8;
} func_801CA274_StructA;

extern u8 D_801DA8F0[];

void func_801CA274(func_801CA274_StructA *arg0, func_801CA274_StructB **arg1)
{
    short new_var;
    f32 deltaX;
    f32 deltaZ;

    func_80005E44((s32) arg0, D_801DA8F0);
    func_80006214((s32) arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unkA0;
    (*arg1)->unk30->unk20 = arg0->unkA4;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = (u32) (arg0->unkA8 * 255.0f);
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    deltaX = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    deltaZ = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    new_var = func_8001EF38(deltaX, deltaZ) + 0x1000;
    (*arg1)->unk30->unk12 = new_var & 0x1FFF;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34,
                                        func_8002FC20((deltaX * deltaX) + (deltaZ * deltaZ))) & 0x1FFF;
    func_800058DC((s32) arg0, (void (*)(void)) func_801CA510);
}
