#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80244C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802453F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802453FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80245588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80245758.s")


extern void func_800058DC(void *arg0, void *arg1);
extern void func_802459C8(void);

void func_80245988(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = ((u16 *)arg0)[0x3C / 2];
    ((u16 *)arg0)[0x3C / 2] = temp_v0 + 1;
    if (temp_v0 == 0xA0) {
        ((u16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_802459C8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802459C8.s")


struct func_80245BCC_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
};

extern s32 func_801C3B5C();
extern void func_801C2F0C(s32, void *);
extern void func_80246598(void *, s32);
extern void func_8024770C(void);
extern void func_80245C60(void);
extern void *D_8025A2A4;

void func_80245BCC(void *arg0, s32 arg1) {
    struct func_80245BCC_Struct sp18;

    if (func_801C3B5C() == 4) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x04100022;
        sp18.unkC = 6;
        sp18.unk8 = 1.5f;
        func_801C2F0C(5, &sp18);
        func_800058DC(D_8025A2A4, func_8024770C);
        ((s16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_80245C60);
    }
    func_80246598(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80245C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80245CE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80245E8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802461CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802463EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_8024666C.s")


struct func_802466A4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_802466A4_Obj {
    u8 pad[0x2C];
    struct func_802466A4_Sub *unk2C;
};

struct func_802466A4_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern s32 func_8013A1B4(void **, struct func_802466A4_Vec, s32);
extern struct func_802466A4_Vec D_8025294C;
extern f32 D_80258BB0;
extern void func_80246760(void);

void func_802466A4(void *arg0, void **arg1) {
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk4 = -278.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk8 = -125.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unkC = D_80258BB0;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk12 = 0x1000;
    func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
    *(s16 *) ((u8 *) arg0 + 0x90) = 0;
    func_800058DC(arg0, func_80246760);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802467FC.s")


struct func_80246874_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    s16 unk90;
};

extern s32 func_80133A24(s32);
extern void func_801339D0(s32);
extern void func_80246920(void);
extern void func_802469F8(void);
extern struct func_802466A4_Vec D_8025297C;

void func_80246874(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((struct func_80246874_Obj *) arg0)->unk5C;
    if (func_80010550(arg1, temp) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            func_8013A1B4((void **) arg1, D_8025297C, 0xFFFFFF);
            func_800058DC(arg0, func_802469F8);
            return;
        }
        ((struct func_80246874_Obj *) arg0)->unk90 = 0;
        func_800058DC(arg0, func_80246920);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802469F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246A44.s")


struct func_80246B38_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    s16 unk90;
};

struct func_80246B38_StructB {
    u8 pad0[0x38];
    f32 unk38;
};

struct func_80246B38_StructA {
    u8 pad0[0x2C];
    struct func_80246B38_StructB *unk2C;
};

extern struct func_80246B38_StructA *D_801BBCD8;
extern void func_80246C20(void);
extern void func_80020718(s32);

void func_80246B38(struct func_80246B38_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            arg0->unk90 = 0;
            func_80011198(arg1, temp_a1);
            func_80020718(0x667);
            func_800058DC(arg0, func_80246C20);
            return;
        }
        func_8013A1B4((void **)arg1, D_8025294C, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246C20.s")


extern void func_80246D34(void);

struct func_80246CDC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
};

void func_80246CDC(struct func_80246CDC_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        arg0->unk90 = 0;
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_80246D34);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802470E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_8024714C.s")


struct func_80247184_Arg0 {
    u8 pad0[0x92];
    s16 unk92;
};

extern struct func_802466A4_Vec D_802529AC;
extern void func_8024723C(void);

void func_80247184(void *arg0, struct func_802466A4_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -300.0f;
    (*arg1)->unk2C->unk8 = -114.0f;
    (*arg1)->unk2C->unkC = 378.0f;
    (*arg1)->unk2C->unk12 = 0;
    func_8013A1B4((void **)arg1, D_802529AC, 0xFFFFFF);
    ((struct func_80247184_Arg0 *)arg0)->unk92 = 0;
    func_800058DC(arg0, (void *)func_8024723C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_8024723C.s")


extern s32 func_80010550(s32, s32);
extern s32 func_80011198(s32, s32);
extern void func_802472D4(void);

void func_80247284(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550(arg1, temp_a1) != 0) {
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_802472D4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802472D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80247380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80247498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80247568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_8024763C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_8024770C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802477B0.s")

