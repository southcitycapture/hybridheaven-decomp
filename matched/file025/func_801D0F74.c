#include "common.h"
extern s32 D_801DB084;
extern s32 D_801DB088;
typedef struct func_801D0DFC_StructData {
    u16 unk0;
    u8 pad2[2];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    s32 unk28;
    u16 unk2C;
} func_801D0DFC_StructData;
typedef struct func_801D0DFC_StructObj {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801D0DFC_StructData *unk2C;
    s32 unk30;
} func_801D0DFC_StructObj;
extern func_801D0DFC_StructObj *D_801DB09C;
extern s32 D_801DB0A0;
extern s32 D_801DB0A4;
extern s32 D_801DB0A8;
extern s32 D_801DB0B0;
extern s32 D_801E1334;
extern u8 D_801E1338;
struct func_801D1220_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D1220_Struct D_801E1348;
extern void func_800058DC(void *arg0, void *arg1);
void func_801D12B8(void *arg0);


struct func_801D0F74_StructA {
    s32 a;
    s32 b;
    s32 c;
};

struct func_801D0F74_StructB {
    f32 a;
    f32 b;
    f32 c;
};

struct func_801D0F74_StructQ {
    u8 pad[0x76];
    u8 u76;
};

struct func_801D0F74_StructT {
    u8 pad[0x5C];
    struct func_801D0F74_StructQ *u5C;
};

struct func_801D0F74_StructY {
    u8 pad[0x5C];
    struct func_801D0F74_StructA u5C;
};

struct func_801D0F74_StructX {
    u8 pad[0x2C];
    struct func_801D0F74_StructY *u2C;
};

struct func_801D0F74_StructR {
    u8 pad[4];
    struct func_801D0F74_StructX *u4;
};
extern void func_80006214();
extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, struct func_801D0F74_StructB, u32);
extern void func_8013A28C(void *, struct func_801D0F74_StructA);
extern void func_801CC6F4(s32);
extern u8 D_8008DA88[];
extern u8 D_801BC025[];
extern u8 D_801D0F74[];

void func_801D0F74(struct func_801D0F74_StructT *arg0, struct func_801D0F74_StructR *arg1) {
    struct func_801D0F74_StructB *p;
    struct func_801D0F74_StructQ *q;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, D_801D0F74);
        return;
    }
    if (D_801DB084 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D0F74_StructA *)D_801DB084);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB084 = 0;
    }
    p = (struct func_801D0F74_StructB *)D_801DB088;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB088 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB0A8 = 1;
        } else {
            D_801DB0A8 = 0;
        }
        *(struct func_801D0F74_StructA *)&D_801E1348 = *(struct func_801D0F74_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D0F74_StructA *)&D_801E1338 = *(struct func_801D0F74_StructA *)&D_801BC025[3];
    }
    if (D_801DB0A0 != 0) {
        D_801DB09C->unk22 = D_801DB0A4;
    }
    if (D_801E1334 != 0) {
        func_801D12B8(arg0);
    }
    func_801CC6F4(D_801DB0B0);
}
