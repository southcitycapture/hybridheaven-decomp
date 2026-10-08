#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA13C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA1C4.s")


extern s8 D_8021B0D0;
extern s16 D_8021B0D2;

struct func_801FA220_Struct_Inner {
    u8 pad[0x10];
    u32 unk10;
};

struct func_801FA220_Struct {
    u8 pad[0x38];
    struct func_801FA220_Struct_Inner *unk38;
};

void func_801FA220(struct func_801FA220_Struct *arg0) {
    D_8021B0D2 = arg0->unk38->unk10 >> 0x10;
    D_8021B0D0 = arg0->unk38->unk10 & 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA248.s")


struct func_801FA29C_Inner {
    u8 pad0[0xB];
    u8 unkB;
};

struct func_801FA29C_Struct {
    u8 pad0[0x10];
    struct func_801FA29C_Struct *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FA29C_Inner *unk30;
};

void func_801FA29C(struct func_801FA29C_Struct *arg0) {
    s16 temp_v0;

    if (arg0 != NULL) {
        do {
            temp_v0 = arg0->unk30->unkB - 0x11;
            if (temp_v0 < 0) {
                arg0->unk22 = 0;
            }
            arg0->unk30->unkB = (u8) temp_v0;
            arg0 = arg0->unk10;
        } while (arg0 != NULL);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA2E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA410.s")


extern void func_801FAAB8(void);
extern void func_801FAE08(void);

struct func_801FA51C_Struct {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
};

s32 func_801FA51C(struct func_801FA51C_Struct *arg0) {
    if (arg0 != NULL) {
        func_800058DC(arg0->unkAC, (void *) func_801FAAB8);
        func_800058DC(arg0->unkB0, (void *) func_801FAE08);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA570.s")


extern s32 func_800058DC(s32, void *);
extern s32 D_802170C0;
extern s32 func_801FB13C(void);

s32 func_801FA5C4(void) {
    if (D_802170C0 != 0) {
        func_800058DC(D_802170C0, func_801FB13C);
        return 1;
    }
    return 0;
}


typedef struct func_801FA600_Struct {
    u8 pad[0x38];
    struct func_801FA600_Struct2 *unk38;
} func_801FA600_Struct;

typedef struct func_801FA600_Struct2 {
    u8 pad[0x10];
    u32 unk10;
} func_801FA600_Struct2;

s32 func_801FA600(func_801FA600_Struct *arg0) {
    if (arg0 != NULL) {
        return (arg0->unk38->unk10 >> 0x18) & 0xFF;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA6B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA6FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA864.s")


extern s32 D_802170B0;
extern void func_80126EAC(void);

void func_801FA870(s32 arg0, s32 arg1) {
    D_802170B0 = 0;
    func_800058DC(arg0, func_80126EAC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FA8A0.s")


struct func_801FAAA4_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801FAAA4_Struct {
    u8 pad0[0x24];
    struct func_801FAAA4_Struct_Inner *unk24;
    u8 pad1[0x3C - 0x28];
    u16 unk3C;
};

void func_801FAAA4(struct func_801FAAA4_Struct *arg0, s32 arg1) {
    arg0->unk24->unk22 = 0;
    arg0->unk3C = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FAAB8.s")


struct func_801FAB94_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_801FAB94_Struct {
    u8 pad[0x30];
    struct func_801FAB94_Inner *unk30;
};

void func_801FAB94(s32 arg0, struct func_801FAB94_Struct **arg1) {
    s16 var_v0;

    var_v0 = (*arg1)->unk30->unk4B - 0xA;
    if (var_v0 < 0x64) {
        var_v0 = 0x64;
    }
    (*arg1)->unk30->unk4B = (u8) var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FABC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FAC3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FADFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FAE08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FAE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FAE64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FB100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FB13C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FB188.s")


struct func_801FB2FC_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
};

struct func_801FB2FC_Obj {
    u8 pad0[0x30];
    struct func_801FB2FC_Sub *unk30;
};

extern void func_80005700(s32);
extern s32 func_801FA248(void *, s32);
extern f64 D_80218E50;

void func_801FB2FC(s32 arg0, struct func_801FB2FC_Obj **arg1) {
    f64 scale;
    struct func_801FB2FC_Sub *temp_v0;

    scale = D_80218E50;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * scale);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C * scale);
    if (func_801FA248(*arg1, 2) == 0) {
        func_80005700(arg0);
    }
}


struct func_801FB374_Struct {
    u8 pad0[0x90];
    u8 unk90;
};

struct func_801FB374_Arg1 {
    s32 unk0;
    s32 unk4;
};

extern s32 func_80126A0C(void *, s32, s32);
extern void func_80116E80(s32);
extern void func_80145310(s32, s32, s32);
extern void func_80146208(void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801FB488(void);

void func_801FB374(struct func_801FB374_Struct *arg0, struct func_801FB374_Arg1 *arg1) {
    u8 sp47;

    if (func_80126A0C(arg0, 0x112, 0) != 0) {
        func_80116E80(0x200);
        func_80146208(arg0, &sp47, 0x66, 0x78, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 0);
        func_80146208(arg0, &sp47, 0x66, 0xB8, 0x96, 0x10, 0x20, 0, 0, 0xFF, 0x20D, 1);
        func_80145310(arg1->unk0, 0, 0);
        func_80145310(arg1->unk4, 0, 0);
        arg0->unk90 = 0;
        func_800058DC((s32)arg0, (void *)func_801FB488);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FB488.s")


extern s32 D_802170B4;
extern void func_801FA624(s32);

struct func_801FB554_Inner {
    u8 pad0[0x9];
    u8 unk9;
    u8 unkA;
};

struct func_801FB554_Sub {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FB554_Inner *unk30;
};

struct func_801FB554_Args {
    struct func_801FB554_Sub *unk0;
    struct func_801FB554_Sub *unk4;
};

struct func_801FB554_Obj {
    u8 pad0[0x24];
    void *unk24;
};

void func_801FB554(struct func_801FB554_Obj *arg0, struct func_801FB554_Args *arg1) {
    func_801FA29C((struct func_801FA29C_Struct *) arg0->unk24);
    arg1->unk0->unk30->unkA = (u8) (arg1->unk0->unk30->unkA + 0xF);
    arg1->unk0->unk30->unk9 = arg1->unk0->unk30->unkA;
    arg1->unk4->unk30->unkA = (u8) (arg1->unk4->unk30->unkA + 0xF);
    arg1->unk4->unk30->unk9 = arg1->unk4->unk30->unkA;
    if (arg1->unk0->unk22 == 0) {
        D_802170B4 = 0;
        func_80005700((s32) arg0);
        func_801FA624(0x112);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FB5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FB910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FBA3C.s")

