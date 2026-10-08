#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80233430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023448C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802345B0.s")

void func_80234664(void) {
}


struct func_8023466C_Struct {
    u8 pad[0xA3];
    s8 unkA3;
    u8 unkA4;
    s8 unkA5;
};

extern void func_80145310(s32, s32, s32);
extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);

void func_8023466C(struct func_8023466C_Struct *arg0, s32 *arg1) {
    s8 var_s0;

    var_s0 = 0;
    if (arg0->unkA3 > 0) {
        do {
            if (var_s0 == arg0->unkA5) {
                func_801453CC(arg1[var_s0], 0x200, 4, 0xB, 1, 4, 3);
            } else {
                func_80145310(arg1[var_s0], 0xD, 0xD);
            }
            var_s0 += 1;
        } while (var_s0 < arg0->unkA3);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234724.s")



typedef struct func_80234828_Struct0 {
    u8 pad0[0xA9];
    u8 unkA9;
} func_80234828_Struct0;

typedef struct func_80234828_Struct1 {
    s32 unk0;
    s32 unk4;
} func_80234828_Struct1;

void func_80234828(func_80234828_Struct0 *arg0, func_80234828_Struct1 *arg1) {
    if (arg0->unkA9 & 1) {
        func_80145310(arg1->unk4, 1, 3);
    } else {
        func_80145310(arg1->unk4, 0xF, 2);
    }
    if (arg0->unkA9 & 2) {
        func_80145310(arg1->unk0, 1, 3);
        return;
    }
    func_80145310(arg1->unk0, 0xF, 2);
}


struct func_802348C8_StructPart {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

struct func_802348C8_StructNode {
    u8 pad0[0x30];
    struct func_802348C8_StructPart *unk30;
};

struct func_802348C8_StructArg {
    struct func_802348C8_StructNode *unk0;
    struct func_802348C8_StructNode *unk4;
};

void func_802348C8(struct func_802348C8_StructArg *arg0, s16 arg1, s16 arg2) {
    struct func_802348C8_StructPart *temp_v0;
    struct func_802348C8_StructPart *temp_v1;

    temp_v0 = arg0->unk0->unk30;
    temp_v0->unk0 = (arg1 - (temp_v0->unk4 / 2)) + 0xA0;
    temp_v1 = arg0->unk4->unk30;
    temp_v1->unk0 = (arg2 - (temp_v1->unk4 / 2)) + 0xA0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234CE8.s")


struct func_80234D2C_StructPart {
    u8 pad[4];
    s16 unk4;
    s16 unk6;
};

struct func_80234D2C_StructArg {
    u8 pad0[0x98];
    struct func_80234D2C_StructPart *unk98;
    u8 pad1[0x5];
    s8 unkA1;
    u8 pad2[0x7];
    u8 unkA9;
};

s32 func_80234D2C(struct func_80234D2C_StructArg *arg0) {
    struct func_80234D2C_StructPart *temp_v0;

    temp_v0 = arg0->unk98;
    if ((temp_v0->unk6 == temp_v0->unk4) && (arg0->unkA1 >= 0) && (arg0->unkA9 & 1)) {
        return 1;
    }
    return 0;
}


typedef struct func_80234D70_Struct {
    u8 pad[0xA9];
    u8 unkA9;
} func_80234D70_Struct;

typedef struct func_80234D70_Struct2 {
    u8 pad[0x10];
    s32 unk10;
} func_80234D70_Struct2;

void func_80234D70(func_80234D70_Struct *arg0, func_80234D70_Struct2 *arg1) {
    s32 var_v0;

    var_v0 = arg0->unkA9;
    if (!(var_v0 & 1)) {
        func_80145310(arg1->unk10, 8, 9);
        var_v0 = arg0->unkA9;
    }
    if (!(var_v0 & 2)) {
        func_80145310((s32)arg1, 8, 9);
    }
}


typedef struct func_80234DD4_Struct {
    u8 pad[0xA9];
    u8 unkA9;
} func_80234DD4_Struct;

typedef struct func_80234DD4_Struct1 {
    u8 pad[0x10];
    s32 unk10;
} func_80234DD4_Struct1;

void func_80234DD4(func_80234DD4_Struct *arg0, func_80234DD4_Struct1 *arg1) {
    s32 var_v0;

    var_v0 = arg0->unkA9;
    if (!(var_v0 & 1)) {
        func_801451C0(arg1->unk10, 2);
        var_v0 = arg0->unkA9;
    }
    if (!(var_v0 & 2)) {
        func_801451C0((s32)arg1, 2);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234E30.s")

void func_80234ECC(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802358A0.s")


void func_80235AD4(s32 arg0) {
    func_80145310(arg0, 1, 3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235B1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235C1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235E00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235E54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235FF8.s")


u8 func_802362B8(void *arg0) {
    u8 spC[10];
    s32 var_v1;
    u8 var_v0;

    var_v0 = ((u8 *) arg0)[0xA7];
    for (var_v1 = 1; var_v1 < 0xA; var_v1 = (var_v1 + 1) & 0xFF) {
        if ((s32) var_v0 < 5) {
            spC[var_v1] = var_v0;
            var_v0 = 0;
        } else {
            var_v0 = (var_v0 - 5) & 0xFF;
            spC[var_v1] = 5;
        }
    }
    return spC[(s8) ((u8 *) arg0)[0xA1]];
}


struct func_80236320_Struct98 {
    u8 pad[6];
    s16 unk6;
};

struct func_80236320_Struct {
    u8 pad[0x98];
    struct func_80236320_Struct98 *unk98;
};

s32 func_80236320(struct func_80236320_Struct *arg0) {
    struct func_80236320_Struct98 *temp_v0;
    s32 ret;

    temp_v0 = arg0->unk98;
    ret = 0;
    if (temp_v0->unk6 >= 0xC8) {
        return 1;
    }
    return ret;
}


struct func_80236348_StructNode {
    u8 pad0[0x30];
    u32 unk30;
};

struct func_80236348_StructArg {
    u8 pad0[0x98];
    struct func_80236348_StructNode *unk98;
};

s32 func_80236348(struct func_80236348_StructArg *arg0) {
    struct func_80236348_StructNode *node;

    node = arg0->unk98;
    if (((u32) (node->unk30 << 0xB) >> 0x1E) != 0) {
        return 1;
    }
    return 0;
}


struct func_80236374_StructInner {
    u8 pad[0x38];
    s32 unk38;
};

struct func_80236374_StructArg {
    u8 pad[0x98];
    struct func_80236374_StructInner *unk98;
};

s32 func_80236374(struct func_80236374_StructArg *arg0) {
    struct func_80236374_StructInner *temp_v0;

    temp_v0 = arg0->unk98;
    if (((u32) temp_v0->unk38 >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023639C.s")


extern u8 D_8023E3A0;

s32 func_802363D8(void) {
    if (D_8023E3A0 != 0) {
        return 0;
    }
    D_8023E3A0 = 1;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023644C.s")


typedef struct func_8023648C_Struct {
    u8 pad[0xA3];
    s8 unkA3;
} func_8023648C_Struct;

typedef struct func_8023648C_Struct3 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
} func_8023648C_Struct3;

extern void func_80234ED4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4);
extern u8 D_8023E3AC;
extern func_8023648C_Struct3 D_8023E4F0;

void func_8023648C(func_8023648C_Struct *arg0, s32 arg1) {
    func_8023648C_Struct3 sp24;

    sp24 = D_8023E4F0;
    if ((s32) D_8023E3AC >= 2) {
        arg0->unkA3 = 3;
    } else {
        arg0->unkA3 = 2;
    }
    func_80234ED4(arg0, arg1, &sp24, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802364E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802365E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802366A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236700.s")


extern s32 func_80005670();
extern s32 D_8023E3BC;
extern u8 D_8023E3D8[];

s32 func_80236744(s32 arg0) {
    if (D_8023E3BC == 0) {
        D_8023E3BC = func_80005670(arg0, D_8023E3D8);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236BC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236BD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023748C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237630.s")


typedef struct func_80237694_Struct {
    u8 pad0[0x8];
    s32 unk8;
    u8 pad1[0x8C];
    void *unk98;
    u8 pad2[0x6];
    u8 unkA2;
    u8 pad3[0x8];
    s8 unkAB;
    u8 pad4[0x4];
    void *unkB0;
} func_80237694_Struct;

typedef struct func_80237694_Struct2 {
    u8 pad0[0x31];
    u8 unk31_hi : 1;
    u8 unk31_mid : 4;
    u8 unk31_lo : 3;
} func_80237694_Struct2;

extern void func_800058DC();
extern s32 func_80236A48();
extern void func_80236BC8(s32);
extern s32 func_80236C9C(void);
extern void func_80376CCC();
extern u8 D_8038CD70[];
extern void func_8023748C(void);
extern void func_80237768(void);
extern void func_8023B86C(void);

void func_80237694(func_80237694_Struct *arg0, s32 arg1) {
    func_80237694_Struct2 *temp_a2;

    temp_a2 = arg0->unk98;
    if (arg0->unkAB != 0) {
        arg0->unkB0 = D_8038CD70;
        func_80376CCC(temp_a2);
        temp_a2->unk31_lo = 0;
        temp_a2->unk31_hi = 1;
        func_800058DC(arg0, func_80237768, temp_a2);
        return;
    }
    if (arg0->unk8 == 0 && func_80236A48(arg0) != 0) {
        func_80236BC8(1);
        arg0->unkA2 = 0;
        if (func_80236C9C() != 0) {
            func_800058DC(arg0, func_8023B86C);
            return;
        }
        func_800058DC(arg0, func_8023748C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237768.s")


extern void func_80146178(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237834(void);

void func_802377CC(s32 arg0, s32 arg1) {
    u8 sp3F;

    func_80146178(arg0, &sp3F, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0);
    func_800058DC(arg0, func_80237834);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802378DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237EC8.s")


typedef struct func_802380EC_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_802380EC_Part;

typedef struct func_802380EC_Struct {
    u8 pad0[0x94];
    func_802380EC_Part *unk94;
    u8 pad1[0xA];
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    u8 pad2[6];
    u16 unkAC;
} func_802380EC_Struct;

typedef struct func_802380EC_Table {
    s16 unk0;
    s16 unk2;
    s32 unk4;
} func_802380EC_Table;

extern s32 func_80235EB4(void);
extern void func_80020744(s32);
extern void func_80236700(func_802380EC_Struct *, s32);
extern void func_80234724(func_802380EC_Struct *, s32, s32);
extern void func_80235394(func_802380EC_Struct *, s32, s32);
extern void func_8001B204(s32, s16, s16, void *, s32, s32, s32);
extern u8 D_80240578[];
extern u8 D_80240828[];
extern void func_80237EC8(void);
extern void func_80239DFC(void);

void func_802380EC(func_802380EC_Struct *arg0, s32 arg1) {
    func_802380EC_Part *temp_v1;
    func_802380EC_Table *temp_v0_2;
    s8 temp_v1_2;
    s32 temp_v0;

    temp_v1 = arg0->unk94;
    if (arg0->unkA2 == 0) {
        if (func_80235EB4() == 0) {
            if ((temp_v1->unkC & 0x200) || (temp_v0 = temp_v1->unk4, (temp_v0 & 0x4000))) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                func_80236700(arg0, arg1);
            } else if ((temp_v0 & 0x8000) && (arg0->unkA5 < arg0->unkA4)) {
                func_80020744(0x104);
                temp_v1_2 = arg0->unkA5;
                arg0->unkAC = 0;
                temp_v0_2 = (func_802380EC_Table *) (D_80240828 + (temp_v1_2 * 0xC));
                func_8001B204(temp_v1_2 & 0xFF, temp_v0_2->unk0 + 0x3E8, temp_v0_2->unk2, D_80240578, 8, 4, temp_v0_2->unk4);
                func_800058DC(arg0, func_80239DFC);
            }
            func_80234724(arg0, arg1, 1);
        }
    }
    if (arg0->unkA2 == 1) {
        func_80235394(arg0, arg1, 1);
        arg0->unkA5 = 1;
        if (arg0->unkA2 == 0) {
            func_800058DC(arg0, func_80237EC8);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80238254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80238484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802387D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80238928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80238E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802393F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802397A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802398FC.s")


typedef struct func_80239A18_Struct {
    u8 pad0[0x98];
    struct func_80239A18_Struct2 *unk98;
    u8 pad1[0x9];
    s8 unkA5;
    u8 pad2[0xA];
    void *unkB0;
} func_80239A18_Struct;

typedef struct func_80239A18_Struct2 {
    u8 pad0[0x2D4];
    void *unk2D4;
    u8 unk2D8;
    s8 unk2D9;
} func_80239A18_Struct2;

extern void func_8023A09C(void);

void func_80239A18(func_80239A18_Struct *arg0, s32 arg1) {
    func_80239A18_Struct2 *temp_v0;

    temp_v0 = arg0->unk98;
    temp_v0->unk2D4 = arg0->unkB0;
    temp_v0->unk2D9 = arg0->unkA5;
    temp_v0->unk2D8 = 0xE;
    func_800058DC(arg0, func_8023A09C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239E80.s")


typedef struct func_80239FA0_Struct {
    u8 pad[0xAC];
    u16 unkAC;
} func_80239FA0_Struct;

void func_80239FA0(func_80239FA0_Struct *arg0, s32 arg1) {
    arg0->unkAC = arg0->unkAC + 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239FB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023A09C.s")


extern void func_800023EC();
extern void func_80005700(void *);
extern s32 D_8023E3B8;

typedef struct func_8023A0EC_Inner {
    u8 pad[0x74];
    u8 unk74;
} func_8023A0EC_Inner;

typedef struct func_8023A0EC_Struct {
    u8 pad[0x90];
    func_8023A0EC_Inner *unk90;
} func_8023A0EC_Struct;

void func_8023A0EC(func_8023A0EC_Struct *arg0, s32 arg1) {
    func_8023A0EC_Inner *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk90;
    temp_v1 = temp_v0->unk74;
    if (temp_v1 == 0 || temp_v1 == 1 || temp_v1 == 2) {
        func_800023EC();
        D_8023E3A0 = 0;
        D_8023E3B8 = 0;
    }
    D_8023E3BC = 0;
    func_80005700(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023A154.s")


s32 func_8023A1D4(u8 *arg0) {
    s32 var_v1;
    u8 *var_v0;

    var_v0 = arg0;
    var_v1 = 0;
    if (*arg0 != 0) {
        do {
            var_v0++;
            var_v1++;
        } while (*var_v0 != 0);
    }
    return var_v1;
}

