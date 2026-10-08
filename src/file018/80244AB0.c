#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80244F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802450F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802451EC.s")


extern void func_800058DC(void *, void *);
extern void func_80010550(s32, s32);
extern s32 func_80133A24(s32);
extern void func_8013A334(f32 *, s32, s32, s32);
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern void func_802453E0(void);

void func_80245360(void *arg0, s32 arg1) {
    s32 temp_a2;
    f32 sp18[3];

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8013A334(sp18, arg1, temp_a2, 6);
    D_8025C71C = sp18[0];
    D_8025C720 = sp18[1];
    D_8025C724 = sp18[2];
    func_80010550(arg1, temp_a2);
    if (func_80133A24(0x13F) != 0) {
        func_800058DC(arg0, func_802453E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802453E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802454C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024557C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024564C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245A4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245B90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245EBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80245F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802462CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246AA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246C5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80246F24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024700C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802472C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802474E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802475F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024786C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80247FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802487AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802488D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248938.s")


typedef struct func_80248998_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80248998_StructInner;

typedef struct func_80248998_StructOuter {
    u8 pad0[0x30];
    func_80248998_StructInner *unk30;
} func_80248998_StructOuter;

extern s32 func_80005F6C(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012CF8C(void *, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017B6C0[];
extern f32 D_8025C5DC;
extern u8 func_80248AD0[];

void func_80248998(void *arg0, func_80248998_StructOuter **arg1) {
    f32 fv;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x3D0, 0);
    (*arg1)->unk30->unk24 = 0x100;
    (*arg1)->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
    func_800062F8(*arg1, 0x80000A00);
    fv = D_8025C5DC;
    (*arg1)->unk30->unk18 = fv;
    (*arg1)->unk30->unk1C = fv;
    (*arg1)->unk30->unk20 = fv;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    ((u32 *)arg0)[0x2C / 4] |= 0x20;
    func_800058DC(arg0, func_80248AD0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248B4C.s")


extern u8 D_8025C705;

struct func_80248D10_Struct {
    u8 pad[0x98];
    s16 unk98;
};

void func_80248D10(struct func_80248D10_Struct *arg0) {
    arg0->unk98 = D_8025C705 & 3;
    D_8025C705 += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80248FA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802490C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802491C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_802492E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024951C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80249704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_80249A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024A168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024AAEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024AF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024B2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024B5B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024BCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024C58C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80244AB0/func_8024CA4C.s")

