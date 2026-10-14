#include "context.h"
extern void func_800058DC(void *, void *);
struct func_80241834_StructObj2C {
    u8 pad0[0xC];
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    u16 unk12;
};
struct func_80241834_StructObj1 {
    u8 pad0[0x2C];
    struct func_80241834_StructObj2C *unk2C;
};
struct func_80241834_StructBBBF0 {
    u8 pad0[0xE0];
    struct func_80241834_StructObj1 *unkE0;
};
extern struct func_80241834_StructBBBF0 D_801BBBF0;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern u8 D_80164F40[];

struct func_80241580_StructGlobal {
    u8 pad0[0xE0];
    void *unkE0;
    u8 pad1[0xF32 - 0xE4];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};

struct func_80241580_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    u16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad3[0x8];
    s32 unk30;
    u8 pad4[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80241580_StructA {
    u8 pad0[0x30];
    struct func_80241580_StructB *unk30;
};

extern s32 func_8000C3B0(void *);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_802416D4();

void func_80241580(s32 arg0, struct func_80241580_StructA **arg1) {
    f32 temp_fv0;
    struct func_80241580_StructB *temp_v1;
    struct func_80241580_StructGlobal *g;

    if (((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkE0 != 0) {
        func_80005E44((void *)arg0, &D_80164F40);
        func_80006214((void *)arg0);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF32;
        (*arg1)->unk30->unk4D = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF33;
        (*arg1)->unk30->unk4E = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF34;
        (*arg1)->unk30->unk4F = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF35;
        (*arg1)->unk30->unk20 = 1.0f;
        temp_v1 = (*arg1)->unk30;
        temp_fv0 = temp_v1->unk20;
        temp_v1->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        func_8012C89C(arg0, 0, 0x23A, 2);
        (*arg1)->unk30->unk4 = 35.0f;
        (*arg1)->unk30->unk8 = 5.0f;
        (*arg1)->unk30->unkC = 310.0f;
        (*arg1)->unk30->unk12 = 0;
        func_800058DC((void *)arg0, (void *)func_802416D4);
    }
}
