#include "common.h"

typedef struct func_801C4E6C_StructV { s32 w[4]; } func_801C4E6C_StructV;
extern func_801C4E6C_StructV D_801DA3A0[];
typedef struct func_801C4E6C_StructG { u32 w0, w1; } func_801C4E6C_StructG;
extern func_801C4E6C_StructG D_801DA400[];
extern u8 D_801DA4D4[];
extern void *D_8038D8CC;
extern u8 D_801DF7A0[];
typedef struct func_801C4E6C_Entry {
    s32 unk0;
    u8 pad4[4];
    func_801C4E6C_StructV a[6];
    func_801C4E6C_StructV b[6];
    func_801C4E6C_StructG c[40];
    func_801C4E6C_StructG d[40];
} func_801C4E6C_Entry;
#define ENT ((func_801C4E6C_Entry *)D_801DF7A0)
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
typedef struct func_801C4E6C_Struct {
    u8 pad[0x90];
    f32 x, y, z, angle;
    u16 index;
} func_801C4E6C_Struct;
typedef struct func_801C4E6C_Struct3 {
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
} func_801C4E6C_Struct3;
typedef struct func_801C4E6C_Struct2 {
    u8 pad0[0x30];
    func_801C4E6C_Struct3 *unk30;
} func_801C4E6C_Struct2;
extern void func_801C51A0();
void func_801C4E6C(func_801C4E6C_Struct *arg0, func_801C4E6C_Struct2 **arg1) {
    func_801C4E6C_Entry *e;
    s32 i;
    s32 index;
    u8 *buf;
    f32 sc;

    func_80005E44(arg0, D_801DA4D4);
    func_80006214(arg0);
    buf = (*arg1)->unk30->unk40;
    func_8012CF8C(D_8038D8CC, buf, 0x462, 0);
    sc = 0.100000001f;
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = 0;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    (*arg1)->unk30->unk4 = arg0->x;
    (*arg1)->unk30->unk8 = arg0->y;
    (*arg1)->unk30->unkC = arg0->z;
    (*arg1)->unk30->unk12 = (s32)((arg0->angle * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = sc;
    (*arg1)->unk30->unk1C = sc;
    (*arg1)->unk30->unk20 = sc;
    index = arg0->index;
    for (i = 0; i < 6; i++) {
        ENT[index].a[i] = D_801DA3A0[i];
        ENT[index].b[i] = D_801DA3A0[i];
    }
    for (i = 0; i < 40; i++) {
        ENT[index].c[i] = D_801DA400[i];
        ENT[index].d[i] = D_801DA400[i];
    }
    e = &ENT[index];
    e->c[1].w1 = (u32)e->a;
    e->c[1].w0 = 0x0100600C;
    e->d[1].w1 = (u32)e->b;
    e->d[1].w0 = 0x0100600C;
    e->unk0 = 0;
    (*arg1)->unk30->unk28 = e->c;
    func_800058DC(arg0, func_801C51A0);
}
