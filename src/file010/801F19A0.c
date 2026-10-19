#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F19A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F1D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F1FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2438.s")


extern void func_800058DC(s32, void *);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
extern void func_801F290C();

void func_801F28C4(s32 arg0, s32 arg1) {
    func_80020718(0x1FC);
    func_801518D4(0, 7, 6);
    func_800058DC(arg0, func_801F290C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F290C.s")


struct func_801F2A20_Struct30 {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801F2A20_Struct24 {
    u8 pad0[0x30];
    struct func_801F2A20_Struct30 *unk30;
};
struct func_801F2A20_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
    u8 pad14[4];
    u32 unk18;
};
struct func_801F2A20_Arg0 {
    u8 pad0[0x24];
    struct func_801F2A20_Struct24 *unk24;
    u8 pad28[0x10];
    struct func_801F2A20_Struct38 *unk38;
};
struct func_801F2A20_Arg1 {
    struct func_801F2A20_Struct24 *unk0;
    struct func_801F2A20_Struct24 *unk4;
};
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);
extern u8 func_801F1D74[];

void func_801F2A20(struct func_801F2A20_Arg0 *arg0, struct func_801F2A20_Arg1 *arg1) {
    struct func_801F2A20_Struct30 *p;
    u32 v;

    p = arg0->unk24->unk30;
    v = arg0->unk38->unk10;

    if (func_8012AAE8(arg0, p->unk4, (f32)((f64)(f32)(s16)(v >> 16) + 0.5), p->unkC, (f32)(v & 0xFFFF)) == 0) {
        arg0->unk24->unk30->unk8 = (f32)((f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5);
        func_800058DC((s32)arg0, func_801F1D74);
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8;
    }
}


struct func_801F2B44_Struct1 {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[4];
    s32 unkC;
};
struct func_801F2B44_Struct2 {
    u8 pad0[8];
    f32 unk8;
};
struct func_801F2B44_Struct3 {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u8 pad14[4];
    u32 unk18;
};
struct func_801F2B44_Struct4 {
    u8 pad0[0x30];
    void *unk30;
};
struct func_801F2B44_Struct0 {
    u8 pad0[0x24];
    struct func_801F2B44_Struct4 *unk24;
    u8 pad28[0x10];
    struct func_801F2B44_Struct3 *unk38;
};

void func_801F2B44(struct func_801F2B44_Struct0 *arg0, void *arg1) {
    struct func_801F2B44_Struct1 *v = (struct func_801F2B44_Struct1 *)arg0->unk24->unk30;
    if (func_8012AAE8(arg0, v->unk4, (f32)(((f64)(f32)arg0->unk38->unk8 / 10.0) + 0.5), v->unkC, (f32)(arg0->unk38->unk10 & 0xFFFF)) == 0) {
        ((struct func_801F2B44_Struct2 *)arg0->unk24->unk30)->unk8 = (f32)(((f64)(f32)arg0->unk38->unk8 / 10.0) + 0.5);
        func_800058DC((s32)arg0, func_801F1D74);
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        void **p = (void **)arg1;
        ((struct func_801F2B44_Struct2 *)((struct func_801F2B44_Struct4 *)p[1])->unk30)->unk8 = ((struct func_801F2B44_Struct2 *)((struct func_801F2B44_Struct4 *)p[0])->unk30)->unk8;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2C74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2FF0.s")


extern u16 D_801BBBF4;
extern void func_801F34FC();

void func_801F3430(void *arg0, void *arg1) {
    if (D_801BBBF4 == 0xD) {
        if ((f64)*(f32 *)(*(u8 **)(*(u8 **)((u8 *)arg0 + 0x24) + 0x30) + 8) == ((f64)(f32)*(s16 *)(*(u8 **)((u8 *)arg0 + 0x38) + 8) / 10.0 + 0.5)) {
            func_80020718(0x1FC);
            func_801518D4(0, 7, 6);
        }
    } else {
        func_80020718(0x1FC);
        func_801518D4(0, 7, 6);
    }
    func_800058DC(arg0, func_801F34FC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F34FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F3610.s")


struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};

struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};

struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};

struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};

struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};

extern struct func_801F38B8_Base D_801BBBF0;

void func_801F38B8(f32 arg0) {
    struct func_801F38B8_Lo *temp_v0;

    temp_v0 = D_801BBBF0.unkDC->unk64;
    if (temp_v0 != NULL) {
        temp_v0->unk24->unk30->unk8 = D_801BBBF0.unkE0->unk2C->unk8;
    }
}

