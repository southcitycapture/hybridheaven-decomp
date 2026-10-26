#include "common.h"
#define ZQ(a, l) a##_##l
#define ZP(a, l) ZQ(a, l)
#define zA_325 func_801C9328_ctx325
typedef struct func_801C5F04_StructNode {
    u8 pad[0x10];
    struct func_801C5F04_StructNode *next;
    u8 pad14[0xE];
    u8 active;
} func_801C5F04_StructNode;
extern func_801C5F04_StructNode *D_801CFD88[];
extern u8 *D_801CFD90[];
typedef struct func_801C659C_Obj30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8 pad12[6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
} func_801C659C_Obj30;
typedef struct func_801C659C_Obj {
    u8 pad[0x30];
    func_801C659C_Obj30 *unk30;
} func_801C659C_Obj;
extern void (*D_801CCB04)(void *, s32, u8);

#undef ZP
#undef ZQ

typedef struct func_801C63CC_StructB {
    u8 pad0[0x4B];
    u8 unk4B;
} func_801C63CC_StructB;

typedef struct func_801C63CC_StructA {
    u8 pad0[0x10];
    struct func_801C63CC_StructA *unk10;
    u8 pad14[0x1C];
    func_801C63CC_StructB *unk30;
} func_801C63CC_StructA;

typedef struct func_801C63CC_StructC {
    u8 pad0[0x10];
    s16 unk10;
} func_801C63CC_StructC;

typedef struct func_801C63CC_StructD {
    u8 pad0[0x30];
    func_801C63CC_StructC *unk30;
} func_801C63CC_StructD;

extern struct func_801C659C_Obj *D_801CFD80[];
extern f32 func_8001EB64(s16, s32);

void func_801C63CC(u8 arg0) {
    s32 a1;
    s32 v0;
    u8 a0;
    u8 i;
    func_801C63CC_StructA *p;

    a1 = ((func_801C63CC_StructD *)D_801CFD80[arg0])->unk30->unk10;
    if (a1 & 0x1000) {
        a1 = (s16)((a1 & 0x1FFF) - 0x2000);
    } else {
        a1 = (s16)(a1 & 0x1FFF);
    }
    v0 = (a1 < 0) ? -a1 : a1;
    if (v0 < 0x800) {
        a0 = 0;
    } else {
        a0 = (u32)(-func_8001EB64(a1, a1) * 255.0f);
    }
    p = (func_801C63CC_StructA *)D_801CFD88[arg0];
    i = 0;
    do {
        p = p->unk10;
        i++;
        p->unk30->unk4B = a0;
        p = p->unk10;
    } while (i < 5);
    p = (func_801C63CC_StructA *)D_801CFD90[arg0];
    i = 0;
    do {
        p->unk30->unk4B = a0;
        i++;
        p = p->unk10;
    } while (i < 4);
}
