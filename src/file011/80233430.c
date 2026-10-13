#include "common.h"

extern s32 D_801BBC2C;
extern s32 D_8023E3B8;
extern s32 D_8023E3BC;
extern s32 D_8023E3C0;
extern s32 D_8024086C;
extern s32 D_80240870;
extern s32 func_80005670();
extern s32 func_80005700();
extern s32 func_80226980(u8);
extern s32 func_80235EB4();
extern s32 func_80236A48();
extern s32 func_80236C9C(void);
extern s8 D_801BCC21;
extern s8 D_8023E3B0;
extern s8 func_802242D0(s32);
extern u8 D_80181D78[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8023E3A0;
extern u8 D_8023E3AC;
extern u8 D_8023E3B4;
extern u8 D_8023E3D8[];
extern u8 D_80240550[];
extern u8 D_80240558[];
extern u8 D_80240578[];
extern u8 D_802407E0[];
extern u8 D_802407E8[];
extern u8 D_80240828[];
extern u8 D_8038CD70[];
extern u8 D_8038CE18[];
extern u8 D_8038CEC0[];
extern u8 func_80006214();
extern u8 func_802362B8(void *arg0);
extern void func_800023EC();
extern void func_800058DC();
extern void func_80006088(s32);
extern void func_8001B204(s32, s16, s16, void *, s32, s32, s32);
extern void func_80020744(s32);
extern void func_800317D0(void *, void *, s32);
extern void func_8013CD04(void *, u8, s32, void *);
extern void func_801451C0(s32, s32);
extern void func_80145310(s32, s32, s32);
extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);
extern void func_80146178(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80146208(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80147218(void *);
extern void func_80147D60(s32, s32);
extern void func_80235AD4(s32);
extern void func_80235AF8(s32);
extern void func_80235B1C(s32);
extern void func_80235FF8(void *, s32 *, s32);
extern void func_80236BC8(s32);
extern void func_80237250();
extern void func_8023748C();
extern void func_80237694();
extern void func_80237768();
extern void func_80237834();
extern void func_80237880();
extern void func_80237EC8();
extern void func_80238928();
extern void func_80238E60();
extern void func_80239048();
extern void func_80239A18();
extern void func_80239DFC();
extern void func_8023A09C();
extern void func_8023A154();
extern void func_8023B86C(void);
extern void func_80376CCC();

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80233430.s")


typedef struct func_80234450_Struct {
    u8 pad[0x8];
    u8 unk8;
    u8 pad2[0x3];
} func_80234450_Struct;

void func_80234450(void) {
    func_80234450_Struct *base;
    s32 var_v0;

    base = (func_80234450_Struct *)D_802407E8;
    for (var_v0 = 0; var_v0 < 5; var_v0 = (var_v0 + 1) & 0xFF) {
        base[var_v0].unk8 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023448C.s")



s32 func_802345B0(s32 arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5) {
    s8 sp3F;
    u8 sp3E;

    sp3F = 0;
    sp3E = func_80006214();
    func_80146208(arg0, &sp3F, 0x26, (s16) (arg3 + 0x6C), arg4 + 0x7A, 0x68, 0x10, 0, 0, 0xFF, 0x220, arg2);
    func_801451C0(arg1[sp3E], arg5);
    return arg1[sp3E];
}


void func_80234664(void) {
}


struct func_8023466C_Struct {
    u8 pad[0xA3];
    s8 unkA3;
    u8 unkA4;
    s8 unkA5;
};


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


struct func_80234E30_Struct {
    u8 pad[0xA3];
    s8 unkA3;
};

struct func_80234E30_Node {
    u8 pad[0x10];
    struct func_80234E30_Node *unk10;
};


void func_80234E30(struct func_80234E30_Struct *arg0, struct func_80234E30_Node *arg1) {
    s32 var_s0;
    s8 var_v0;

    var_v0 = arg0->unkA3;
    var_s0 = 0;
    if (var_v0 > 0) {
        do {
            if (D_802407E8[var_s0 * 0xC + 8] == 0) {
                func_80145310((s32)arg1, 2, 0xE);
                var_v0 = arg0->unkA3;
            }
            var_s0 = (var_s0 + 1) & 0xFF;
            arg1 = arg1->unk10;
        } while (var_s0 < var_v0);
    }
}


void func_80234ECC(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80234ED4.s")


typedef struct func_80235394_Entry {
    s16 unk0;
    s16 unk2;
    s32 unk4;
} func_80235394_Entry;

typedef struct func_80235394_Struct {
    u8 pad0[0xA2];
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
} func_80235394_Struct;

#define ARG0_80235394 ((func_80235394_Struct *)arg0)

struct func_802380EC_Struct;
extern struct func_802348C8_StructNode **D_80240864;
extern struct func_802348C8_StructNode **D_80240868;

void func_80235394(struct func_802380EC_Struct *arg0, s32 arg1, s32 arg2) {
    s16 x;
    s16 b;
    s16 mid;
    s16 off;
    s16 step;
    s16 pos;
    s8 i;
    s8 r;
    s32 stride;
    s16 half;

    x = D_80240864[0]->unk30->unk0;
    half = D_80240864[0]->unk30->unk4 / 2;
    if (ARG0_80235394->unkA3 == 1) {
        b = D_80240864[0]->unk30->unk0;
    } else {
        b = D_80240864[1]->unk30->unk0;
    }
    mid = (x + b) / 2 + half;
    off = x + half - mid;
    if (mid == 160) {
        for (i = 0; i < ARG0_80235394->unkA4; i++) {
            func_80006088(((s32 *)D_8024086C)[i]);
            func_80006088(((s32 *)D_80240870)[i]);
        }
        ARG0_80235394->unkA4 = ARG0_80235394->unkA3;
        r = func_80006214(arg0);
        D_8024086C = (r - ARG0_80235394->unkA4 * 2) * 4 + arg1;
        D_80240870 = (r - ARG0_80235394->unkA4) * 4 + arg1;
        ARG0_80235394->unkA2 = 0;
        func_800317D0(D_802407E8, D_80240828, 60);
        return;
    }
    func_80147D60(10, mid);
    step = (160 - mid) / 3;
    if ((step < 0 ? -step : step) < 10) {
        step = step / (step < 0 ? -step : step) * 10;
    }
    stride = 12;
    for (i = 0; i < ARG0_80235394->unkA4; i++) {
        ((struct func_802348C8_StructNode **)D_8024086C)[i]->unk30->unk0 += step;
        ((struct func_802348C8_StructNode **)D_80240870)[i]->unk30->unk0 += step;
        if ((u8)arg2 & 1) {
            ((func_80235394_Entry *)(D_80240828 + i * stride))->unk0 += step;
            func_8001B204((u8)(i + 5), ((func_80235394_Entry *)(D_80240828 + i * stride))->unk0 + 1000,
                          ((func_80235394_Entry *)(D_80240828 + i * stride))->unk2, D_80240550, 0x82, 4,
                          ((func_80235394_Entry *)(D_80240828 + i * stride))->unk4);
        }
    }
    i = 0;
    stride = 12;
    if (ARG0_80235394->unkA3 > 0) {
        pos = mid + step;
        do {
            D_80240864[i]->unk30->unk0 += step;
            D_80240868[i]->unk30->unk0 += step;
            if (pos >= 0x97 && pos < 0xAA) {
                if (i == 1) {
                    off *= -1;
                }
                D_80240864[i]->unk30->unk0 = off - half + 160;
                D_80240868[i]->unk30->unk0 = off - D_80240868[i]->unk30->unk4 / 2 + 160;
                if ((u8)arg2 & 2) {
                    ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk0 = 160 - step;
                }
            }
            if ((u8)arg2 & 2) {
                ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk0 += step;
                func_8001B204((u8)i, ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk0 + 1000,
                              ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk2, D_80240558, 0x82, 4,
                              ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk4);
            }
            i++;
        } while (i < ARG0_80235394->unkA3);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802358A0.s")


void func_80235AD4(s32 arg0) {
    func_80145310(arg0, 1, 3);
}


void func_80235AF8(s32 arg0) {
    func_80145310(arg0, 2, 4);
}


void func_80235B1C(s32 arg0) {
    func_80145310(arg0, 2, 14);
}


typedef struct func_80235B40_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
} func_80235B40_Struct;


void func_80235B40(func_80235B40_Struct *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s8 var_s1;

    var_s1 = 0;
    if (arg0->unkA4 > 0) {
        do {
            if (var_s1 == arg0->unkA5) {
                temp_s0 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0), 1);
                func_80235AD4(*(s32 *)(D_8024086C + temp_s0));
            } else {
                temp_s0_2 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0_2), 2);
                func_80235AF8(*(s32 *)(D_8024086C + temp_s0_2));
            }
            var_s1 += 1;
        } while (var_s1 < arg0->unkA4);
    }
}


typedef struct func_80235C1C_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
} func_80235C1C_Struct;


void func_80235C1C(func_80235C1C_Struct *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s8 var_s1;

    var_s1 = 0;
    if (arg0->unkA4 > 0) {
        do {
            if (var_s1 == arg0->unkA5) {
                temp_s0 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0), 1);
                func_80235AD4(*(s32 *)(D_8024086C + temp_s0));
            } else if (D_802407E0[var_s1] != 0) {
                temp_s0_2 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0_2), 2);
                func_80235B1C(*(s32 *)(D_8024086C + temp_s0_2));
            } else {
                temp_s0_3 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0_3), 2);
                func_80235AF8(*(s32 *)(D_8024086C + temp_s0_3));
            }
            var_s1 += 1;
        } while (var_s1 < arg0->unkA4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80235E00.s")



struct func_80235E54_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
};

void func_80235E54(struct func_80235E54_Struct *arg0, s8 arg1)
{
  int new_var;
  if (!D_802407E8)
  {
  }
  new_var = 1;
 ;
  loop_1:
  if ((*((((u8 *) D_802407E8) + ((arg1 * 3) * 4)) + 8)) > 0)
  {
    arg0->unkA5 = arg1;
    return;
  }

  if (arg1 < (arg0->unkA4 - new_var))
  {
    arg1 = (s8) ((0, arg1 + 1));
    goto loop_1;
  }
}

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


typedef struct func_802365E0_Struct {
    u8 pad0[0xA3];
    s8 unkA3;
    u8 pad1[0x3];
    u8 unkA7;
    u8 pad2[0x2];
    u8 unkAA;
    u8 pad3[0x5];
    void *unkB0;
} func_802365E0_Struct;

void func_802365E0(func_802365E0_Struct *arg0, s32 arg1) {
    arg0->unkAA = 2;
    arg0->unkB0 = D_8038CD70;
    arg0->unkA7 = D_8038CD70[0];
    arg0->unkA3 = func_802362B8(arg0);
    func_80234ED4(arg0, arg1, 0, 1, 2);
}


typedef struct func_80236640_Struct {
    u8 pad0[0xA3];
    s8 unkA3;
    u8 pad1[0x3];
    u8 unkA7;
    u8 pad2[0x2];
    u8 unkAA;
    u8 pad3[0x5];
    void *unkB0;
} func_80236640_Struct;

void func_80236640(func_80236640_Struct *arg0, s32 arg1) {
    arg0->unkAA = 3;
    arg0->unkB0 = D_8038CE18;
    arg0->unkA7 = D_8038CE18[0];
    arg0->unkA3 = func_802362B8(arg0);
    func_80234ED4(arg0, arg1, 0, 1, 2);
}


typedef struct func_802366A0_Struct {
    u8 pad0[0xA3];
    s8 unkA3;
    u8 pad1[0x3];
    u8 unkA7;
    u8 pad2[0x2];
    u8 unkAA;
    u8 pad3[0x5];
    void *unkB0;
} func_802366A0_Struct;

void func_802366A0(func_802366A0_Struct *arg0, s32 arg1) {
    arg0->unkAA = 4;
    arg0->unkB0 = D_8038CEC0;
    arg0->unkA7 = D_8038CEC0[0];
    arg0->unkA3 = func_802362B8(arg0);
    func_80234ED4(arg0, arg1, 0, 1, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236700.s")



s32 func_80236744(s32 arg0) {
    if (D_8023E3BC == 0) {
        D_8023E3BC = func_80005670(arg0, D_8023E3D8);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236788.s")


void func_80236A3C(void) {
    D_8023E3B0 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236A48.s")

extern void (*D_80216D10[])(void *, s32);


s32 func_80236BA4(void) {
    if (D_8023E3B4 != 0) {
        return 1;
    }
    return 0;
}



void func_80236BC8(s32 arg0) {
    s32 *p = &arg0;
    D_8023E3B4 = arg0;
}


typedef struct func_80236BD8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80236BD8_Struct;

s32 func_8012C4D0(s32, func_80236BD8_Struct, s32); /* extern */
extern func_80236BD8_Struct D_8023E3EC;

s32 func_80236BD8(void) {
    if (D_8023E3C0 == 0) {
        D_8023E3C0 = func_8012C4D0(D_801BBC2C, D_8023E3EC, 3);
        return 1;
    }
    return 0;
}



s32 func_80236C60(void) {
    if (D_8023E3C0 != 0) {
        func_800058DC(D_8023E3C0, func_80237880);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80236CC0.s")


typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;

extern s32 func_80234CE8(func_80237004_Struct *);
extern void func_8023448C(func_80237004_Struct *, s32 *, s32, s16, s32, s32, s32);
extern struct func_802387D4_Glob D_801BBBF0;

void func_80237004(func_80237004_Struct *arg0, s32 *arg1) {
    s8 sp5F;
    s8 sp58[7];
    s8 sp57;
    s8 i;
    s32 off;
    s32 a0;

    sp5F = 0;
    func_80234450();
    if (*(u8 *)((u8 *)&D_801BBBF0 + 0x1030) == 0) {
        a0 = *(s32 *)((u8 *)&D_801BBBF0 + 0xDC);
    } else {
        a0 = *(s32 *)((u8 *)&D_801BBBF0 + 0xEC);
    }
    arg0->unkA8 = func_802242D0(a0);
    arg0->unkA9 = func_80234CE8(arg0);
    func_80146208((s32)arg0, &sp5F, 0xE6, 0x85, 0x72, 0x20, 0x20, 0x20, 0, 0xFF, 0x220, 0x15);
    func_80146208((s32)arg0, &sp5F, 0x66, 0x9C, 0x72, 0x20, 0x20, 0, 0, 0xFF, 0x220, 0x15);
    func_80234828((func_80234828_Struct0 *)arg0, (func_80234828_Struct1 *)arg1);
    arg0->unkA4 = 2;
    sp57 = func_80006214(arg0);
    for (i = 0; i < arg0->unkA4; i++) {
        func_8023448C(arg0, arg1, 1, i * 0x8C - 0x46, 0, 1, 7);
    }
    off = sp57 * 4;
    func_80234D70((func_80234D70_Struct *)arg0, *(func_80234D70_Struct2 **)((u8 *)arg1 + off));
    D_8024086C = (u32)off + (u32)arg1;
    sp57 = func_80006214(arg0);
    func_802345B0((s32)arg0, arg1, 4, -0x46, 0, 1);
    func_802345B0((s32)arg0, arg1, 3, 0x46, 0, 1);
    off = sp57 * 4;
    func_80234DD4((func_80234DD4_Struct *)arg0, *(func_80234DD4_Struct1 **)((u8 *)arg1 + off));
    D_80240870 = (u32)off + (u32)arg1;
    arg0->unkA2 = 0;
    func_800058DC(arg0, func_80237250);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023748C.s")



struct func_80237630_Struct {
    u8 pad0[0x91];
    s8 unk91;
    u8 pad1[0x6];
    s32 unk98;
    s32 unk9C;
    u8 pad2[0xA];
    s8 unkAA;
};

void func_80237630(struct func_80237630_Struct *arg0, s32 arg1) {
    struct func_80237630_Struct *temp_v0;
    s32 sp20;
    s32 sp1C;

    sp20 = arg0->unk98;
    sp1C = arg0->unk9C;
    temp_v0 = (struct func_80237630_Struct *) func_80005670(arg0, D_80181D78);
    temp_v0->unk91 = arg0->unkAA;
    temp_v0->unk98 = sp20;
    temp_v0->unk9C = sp1C;
    func_800058DC(arg0, func_80237694);
}


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

extern void func_80236700(func_802380EC_Struct *, s32);
extern void func_80234724(func_802380EC_Struct *, s32, s32);

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


struct func_802387D4_Struct0 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x74];
    struct func_802387D4_Struct1 *unk9C;
    u8 pad2[0x8];
    u8 unkA8;
    u8 pad3[3];
    u16 unkAC;
};
struct func_802387D4_Struct1 {
    u8 pad[0x38];
    u32 unk38;
};
struct func_802387D4_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xC];
    s32 unkEC;
    u8 pad2[0xF40];
    u8 unk1030;
};

void func_802387D4(struct func_802387D4_Struct0 *arg0, s32 *arg1) {
    s32 a0;
    s8 sp4B;
    struct func_802387D4_Struct1 *sp44;

    sp4B = 0;
    sp44 = arg0->unk9C;
    if (arg0->unk24 == 0) {
        func_80146208(arg0, &sp4B, 0x66, 0x78, 0x7A, 0x50, 0x10, 0, 0, 0xFF, 0x220, 0x16);
    }
    if (arg0->unkAC < 0x11) {
        func_801453CC(arg0->unk24, 0x300, 4, 0xB, 1, 4, 3);
        return;
    }
    func_80020744(0x276);
    if (D_801BBBF0.unk1030 == 0) {
        a0 = D_801BBBF0.unkEC;
    } else {
        a0 = D_801BBBF0.unkDC;
    }
    arg0->unkA8 = func_802242D0(a0);
    if (arg0->unkA8 == 0 && (sp44->unk38 >> 31) == 0 && func_80236348((void *)arg0) == 0) {
        func_800058DC(arg0, func_80239048);
        return;
    }
    func_80006088(*arg1);
    func_800058DC(arg0, func_80238928);
}


typedef struct func_80238928_Struct98 {
    u8 pad[0x38];
    u32 unk38;
} func_80238928_Struct98;

typedef struct func_80238928_Struct {
    u8 pad0[0x98];
    func_80238928_Struct98 *unk98;
    u8 pad1[0x6];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    s8 unkA5;
} func_80238928_Struct;


void func_80238928(func_80238928_Struct *arg0, s32 *arg1) {
    u8 a;
    u8 b;
    u8 c;
    s16 sp5A;
    s8 sp59;
    func_80238928_Struct98 *sp54;
    s32 *p;
    u8 sp4F;
    s8 i;

    sp59 = 0;
    sp54 = arg0->unk98;
    if ((s32)sp54 == (s32)&D_801BBBF0 + 0x44C) {
        sp4F = 0;
    } else {
        sp4F = 1;
    }
    sp5A = func_80006214(arg0);
    if (func_80236348((struct func_80236348_StructArg *)arg0) != 0) {
        func_80146208((s32)arg0, &sp59, 0xE6, 0x90, 0x7E, 8, 8, 8, 0, 0xFF, 0x209, 6);
        func_80146208((s32)arg0, &sp59, 0x66, 0xA8, 0x7E, 8, 8, 0, 0, 0xFF, 0x209, 6);
        arg0->unkA4 = 2;
    } else {
        func_80146208((s32)arg0, &sp59, 0xE6, 0x90, 0x90, 8, 8, 8, 0, 0xFF, 0x209, 6);
        func_80146208((s32)arg0, &sp59, 0x66, 0xA8, 0x90, 8, 8, 0, 0, 0xFF, 0x209, 6);
        func_80146208((s32)arg0, &sp59, 0x66, 0x9C, 0x7E, 8, 8, 0, 0, 0xFF, 0x209, 5);
        arg0->unkA4 = 3;
    }
    for (i = 0; i < arg0->unkA4; i++) {
        if (i == 1 && func_80226980(sp4F) != 0) {
            D_802407E0[i] = 1;
        } else {
            D_802407E0[i] = 0;
        }
    }
    p = (s32 *)((s32)arg1 + sp5A * 4);
    for (i = 0; i < arg0->unkA4; i++) {
        if (D_802407E0[i] != 0) {
            func_80145310(p[i], 0xF, 2);
        } else {
            func_80145310(p[i], 1, 3);
        }
    }
    sp5A = func_80006214(arg0);
    if (func_80236348((struct func_80236348_StructArg *)arg0) != 0) {
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, -0x46, 0, 2, 4);
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0x46, 0, 2, 4);
    } else {
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, -0x46, 0x14, 2, 4);
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0x46, 0x14, 2, 4);
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0, -0x14, 2, 4);
    }
    a = 0xD;
    b = 0xE;
    c = 0xC;
    if (sp54->unk38 >> 31) {
        a = 0x11;
        b = 0x12;
        c = 0x10;
    } else {
        a = 0xD;
        b = 0xE;
        c = 0xC;
    }
    if (func_80236348((struct func_80236348_StructArg *)arg0) != 0) {
        func_802345B0((s32)arg0, arg1, 0xF, -0x46, 0, 2);
        func_802345B0((s32)arg0, arg1, 0xE, 0x46, 0, 2);
    } else {
        func_802345B0((s32)arg0, arg1, a, -0x46, 0x14, 2);
        func_802345B0((s32)arg0, arg1, b, 0x46, 0x14, 2);
        func_802345B0((s32)arg0, arg1, c, 0, -0x14, 2);
    }
    D_8024086C = (s32)(arg1 + sp5A);
    D_80240870 = (s32)(arg1 + (arg0->unkA4 + sp5A));
    arg0->unkA2 = 0;
    arg0->unkA5 = 3;
    func_80235C1C((func_80235C1C_Struct *)arg0);
    func_800058DC(arg0, func_80238E60);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80238E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802393F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_802397A8.s")



struct func_802398FC_Part {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad1[0x6];
    u16 unkC;
};

struct func_802398FC_Struct {
    u8 pad0[0x94];
    struct func_802398FC_Part *unk94;
    u8 pad1[0xD];
    s8 unkA5;
};

void func_802398FC(struct func_802398FC_Struct *arg0, s32 *arg1) {
    struct func_802398FC_Part *sp24;
    u16 sp22;
    s32 var_v0;

    sp24 = arg0->unk94;
    sp22 = sp24->unkC;
    func_80235FF8(arg0, arg1, 0xF);
    if (sp22 & 0x100) {
        arg0->unkA5--;
        func_80020744(0x300);
        if (arg0->unkA5 < 0) {
            arg0->unkA5 = 1;
        }
    } else if (sp22 & 0x200) {
        func_80020744(0x300);
        arg0->unkA5++;
    }
    arg0->unkA5 = arg0->unkA5 % 2;
    func_8023466C((struct func_8023466C_Struct *) arg0, arg1);
    var_v0 = sp24->unk4;
    if (var_v0 & 0x4000) {
        func_80147218(arg0);
        arg0->unkA5 = 0;
        func_800058DC(arg0, func_80238928);
        var_v0 = sp24->unk4;
    }
    if (var_v0 & 0x8000) {
        func_80020744(0x104);
        func_800058DC(arg0, func_80239A18);
    }
}


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



struct func_80239DFC_Inner {
    u8 pad[0x74];
    u8 unk74;
};

struct func_80239DFC_Struct {
    u8 pad0[0x90];
    struct func_80239DFC_Inner *unk90;
    u8 pad1[0x11];
    u8 unkA5;
    u8 pad2[0x6];
    u16 unkAC;
};

void func_80239DFC(struct func_80239DFC_Struct *arg0, s32 arg1) {
    u8 *var_a0;
    struct func_80239DFC_Inner *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk90;
    temp_v1 = temp_v0->unk74;
    var_a0 = ((temp_v1 == 0) || (temp_v1 == 2)) ? D_801BC03C : D_801BC3D8;
    if (arg0->unkAC >= 0x20) {
        var_a0[0x2D8] = 0xA;
        func_8013CD04(var_a0, arg0->unkA5, 0, arg0);
        func_800058DC(arg0, &func_8023A09C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80239E80.s")


typedef struct func_80239FA0_Struct {
    u8 pad[0xAC];
    u16 unkAC;
} func_80239FA0_Struct;

void func_80239FA0(func_80239FA0_Struct *arg0, s32 arg1) {
    arg0->unkAC = arg0->unkAC + 1;
}


struct func_80239FB4_Part {
    u8 pad[0xB];
    u8 unkB;
};

struct func_80239FB4_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80239FB4_Part *unk30;
};

struct func_80239FB4_Arg1 {
    struct func_80239FB4_Node *unk0;
    struct func_80239FB4_Node *unk4;
};

struct func_80239FB4_Arg0 {
    u8 pad[0xA4];
    s8 unkA4;
};


void func_80239FB4(struct func_80239FB4_Arg0 *arg0, struct func_80239FB4_Arg1 *arg1)
{
  s32 temp_v0;
  s8 var_a2;
  u8 temp_v1;
  arg1->unk4->unk22 = 0;
 arg1->unk0->unk22 = arg1->unk4->unk22; var_a2 = 0; if (arg0->unkA4 > 0) { do {
      temp_v0 = var_a2 * 4;
      var_a2 += 1;
      (*((struct func_80239FB4_Node **) (D_8024086C + temp_v0)))->unk30->unkB -= 0x10;
      (*((struct func_80239FB4_Node **) (D_80240870 + temp_v0)))->unk30->unkB -= 0x10;
    }
    while (var_a2 < arg0->unkA4);
  }
  temp_v1 = (*((struct func_80239FB4_Node **) D_8024086C))->unk30->unkB;
  if (temp_v1 < 0x11)
  {
    func_800058DC(arg0, func_8023A154, var_a2, &D_8024086C);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_8023A09C.s")



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


typedef struct func_8023A154_Struct90 {
    u8 pad[0x74];
    u8 unk74;
} func_8023A154_Struct90;

typedef struct func_8023A154_Struct98 {
    u8 pad[0x31];
    u8 unk31;
} func_8023A154_Struct98;

typedef struct func_8023A154_Struct {
    u8 pad[0x90];
    func_8023A154_Struct90 *unk90;
    u8 pad2[0x4];
    func_8023A154_Struct98 *unk98;
} func_8023A154_Struct;


void func_8023A154(func_8023A154_Struct *arg0, s32 arg1) {
    s32 temp_a1;
    func_8023A154_Struct98 *temp_v0;
    func_8023A154_Struct90 *temp_v1;

    temp_v0 = arg0->unk98;
    temp_v1 = arg0->unk90;
    D_801BCC21 = 5;
    temp_v0->unk31 = temp_v0->unk31 & 0xFFF8;
    temp_a1 = temp_v1->unk74;
    if (temp_a1 == 0 || temp_a1 == 1 || temp_a1 == 2) {
        func_800023EC(arg0);
        D_8023E3A0 = 0;
        D_8023E3B8 = 0;
    }
    func_80005700(arg0);
}


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

