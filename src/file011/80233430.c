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
#define func_80235EB4 func_80235EB4__decl
extern s32 func_80235EB4();
extern s32 func_80236A48();
extern s32 func_80236C9C(void);
extern s8 D_801BCC21;
extern s8 D_8023E3B0;
extern s8 func_802242D0(s32);
extern u8 D_80181D78[];
extern u8 D_801BBC06[];
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

#define func_802380EC_Part func_802380EC_Part__func_80234724
#define func_802380EC_Struct func_802380EC_Struct__func_80234724
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

typedef struct func_80234724_StructNode {
    u8 pad[0x22];
    u8 unk22;
} func_80234724_StructNode;

typedef struct func_80234724_StructPair {
    func_80234724_StructNode *unk0;
    func_80234724_StructNode *unk4;
} func_80234724_StructPair;

typedef struct func_80234724_StructState {
    u8 pad[0xA0];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
} func_80234724_StructState;

void func_80234724(arg0, arg1, arg2)
struct func_802380EC_Struct *arg0;
s32 arg1;
s8 arg2;
{
    func_80234724_StructPair *pair = (func_80234724_StructPair *)arg1;
    func_80234724_StructState *state = (func_80234724_StructState *)arg0;

    if (state->unkA2 != 0) {
        pair->unk4->unk22 = 0;
        pair->unk0->unk22 = pair->unk4->unk22;
        goto end;
    }
    {
        if (arg2 != -1) {
            if (arg2 != 0) {
                if (arg2 != 1) goto end;
                goto case1;
            }
            goto case0;
        }
        goto caseM1;
        if (arg2 != 1) goto end;
        goto case1;
    case0:
        pair->unk0->unk22 = 1;
        pair->unk4->unk22 = 1;
        goto end;
    caseM1:
        pair->unk0->unk22 = 0;
        pair->unk4->unk22 = 1;
        goto end;
    case1:
        if (state->unkA0 == state->unkA1) {
            pair->unk0->unk22 = 1;
            pair->unk4->unk22 = 0;
        } else {
            pair->unk0->unk22 = 1;
            pair->unk4->unk22 = 1;
        }
    }
end:
    func_80145310((s32)pair->unk0, 1, 3);
    func_80145310((s32)pair->unk4, 1, 3);
}
#undef func_802380EC_Part
#undef func_802380EC_Struct



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

#define func_8023A1D4 func_8023A1D4__func_80234AFC
extern s32 func_8023A1D4(u8 *arg0);
#ifndef ARG0_80235394
#endif

typedef struct func_80234AFC_Item {
    u8 unk0;
    u8 pad[3];
    s32 ***unk4;
} func_80234AFC_Item;
typedef struct func_80234AFC_Ent {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    u8 unk8;
    u8 pad[3];
} func_80234AFC_Ent;
typedef struct func_80234AFC_Obj {
    u8 pad[0xA1];
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad2[0xC];
    u8 *unkB0;
} func_80234AFC_Obj;
typedef struct func_80234AFC_Tgt {
    u8 pad[0x22];
    u8 unk22;
} func_80234AFC_Tgt;

#define FUNC_80234AFC_E ((func_80234AFC_Ent *)D_802407E8 + i)

void func_80234AFC(func_80234AFC_Obj *arg0, func_80234AFC_Tgt **arg1) {
    s8 h;
    s8 r;
    s8 sp7D;
    u8 i;
    u8 k;
    s16 x;
    s16 y;
    func_80234AFC_Item *base;
    func_80234AFC_Item *it;

    sp7D = 0;
    base = (func_80234AFC_Item *)(arg0->unkB0 + 4);
    for (i = 0; i < arg0->unkA3; i++) {
        k = arg0->unkA1 * 5 + i - 5;
        it = (func_80234AFC_Item *)((u8 *)base + (k << 3));
        FUNC_80234AFC_E->unk4 = (s32)**it->unk4;
        FUNC_80234AFC_E->unk8 = it->unk0;
        h = func_8023A1D4((u8 *)**it->unk4) / 2;
        x = arg0->unkA2 * -0x118 + 0xA0;
        y = arg0->unkA3 * -9 + i * 0x12 + 0x85;
        r = func_80006214(arg0);
        FUNC_80234AFC_E->unk0 = x;
        FUNC_80234AFC_E->unk2 = y;
        func_80146208((s32)arg0, &sp7D, 0x26, (s16)(x * 1), y, h * 8, 0x10, 0, 0, 0xFF, 0x220, 3);
        arg1[r]->unk22 = 0;
    }
}
#undef FUNC_80234AFC_E
#undef func_8023A1D4

#define func_80237004_Struct func_80237004_Struct__func_80234CE8
typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;

struct func_80237004_Struct;

typedef struct func_80234CE8_StructInner {
    u8 pad[0x33];
    s8 unk33 : 1;
    u8 pad2[4];
    u32 unk38;
} func_80234CE8_StructInner;

s32 func_80234CE8(struct func_80237004_Struct *arg0) {
    u8 var_v1;
    func_80234CE8_StructInner *temp_v0;

    temp_v0 = *(func_80234CE8_StructInner **)((u8 *)arg0 + 0x98);
    var_v1 = 0;
    if ((temp_v0->unk38 >> 31) == 0) {
        var_v1 = 2;
    }
    if ((((u8 *)arg0)[0xA8] != 0) && !temp_v0->unk33) {
        var_v1 = (var_v1 | 1) & 0xFF;
    }
    return var_v1;
}
#undef func_80237004_Struct


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

#define D_801BBBF0 D_801BBBF0__func_802358A0
extern u8 D_801BBBF0[];

struct func_802358A0_Struct {
    u8 pad[0xA1];
    s8 unkA1;
    u8 pad2[2];
    s8 unkA4;
    s8 unkA5;
};
struct func_802358A0_Ent {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    u8 unk8;
    u8 pad[3];
};
extern u8 D_80240560[];
extern u8 D_80240568[];

void func_802358A0(struct func_802358A0_Struct *arg0) {
    s8 i;
    s32 off;
    struct func_802358A0_Ent *e;
    struct func_802358A0_Ent *e2;

    for (i = 0; i < arg0->unkA4; i++) {
        if (i == arg0->unkA5) {
            off = i * 4;
            func_801451C0(*(s32 *)(D_80240870 + off), 1);
            func_80145310(*(s32 *)(D_8024086C + off), 1, 7);
            if (func_80234D2C((void *)arg0) != 0) {
                func_801453CC(*(s32 *)(D_8024086C + off), 0, *((u8 *)&D_801BBBF0 + 0x1030), 1, 0x1B, 7, 0x1B);
            }
            if (arg0->unkA1 > 0) {
                e = (struct func_802358A0_Ent *)D_802407E8 + i;
                func_8001B204(i & 0xFF, e->unk0 + 0x3E8, e->unk2, D_80240560, 0xFF, 4, e->unk4);
            }
        } else {
            off = i * 4;
            e2 = (struct func_802358A0_Ent *)D_802407E8 + i;
            if (e2->unk8 == 0) {
                func_80145310(*(s32 *)(D_8024086C + off), 2, 0xE);
            } else {
                func_801451C0(*(s32 *)(D_80240870 + off), 2);
                func_80145310(*(s32 *)(D_8024086C + off), 8, 9);
                if (arg0->unkA1 > 0) {
                    e2 = (struct func_802358A0_Ent *)D_802407E8 + i;
                    func_8001B204(i & 0xFF, e2->unk0 + 0x3E8, e2->unk2, D_80240568, 0x82, 4, e2->unk4);
                }
            }
        }
    }
}
#undef D_801BBBF0


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


typedef struct func_80235D48_Inner {
    u8 pad[0xC];
    u16 unkC;
} func_80235D48_Inner;

typedef struct func_80235D48_Struct {
    u8 pad[0x94];
    func_80235D48_Inner *unk94;
    u8 pad2[0xA4 - 0x98];
    s8 unkA4;
    s8 unkA5;
} func_80235D48_Struct;

s32 func_80235D48(arg0)
func_80235D48_Struct *arg0;
{
    func_80235D48_Inner *inner;
    s8 a3 = 0;
    s8 a2 = 0;
    s32 v;
    extern void func_802358A0();
    inner = arg0->unk94;
    v = inner->unkC;
    if (v & 0x800) {
        a3 = 1;
        if (arg0->unkA5 > 0) {
            a2 = -1;
        }
    } else if (v & 0x400) {
        a3 = 1;
        if (arg0->unkA5 < arg0->unkA4 - 1) {
            a2 = 1;
        }
    }
    if (a2 != 0) {
        func_80020744(0x300);
    }
    arg0->unkA5 = arg0->unkA5 + a2;
    func_802358A0(arg0);
    return a3;
}


typedef struct func_80235E00_Struct {
    u8 pad[0xA5];
    s8 unkA5;
} func_80235E00_Struct;

void func_80235E00(func_80235E00_Struct *arg0, s8 arg1)
{
  if (D_802407E8)
  {
  }
  loop:
  if (((s32) D_802407E8[(arg1 * 12) + 8]) > 0)
  {
    arg0->unkA5 = arg1;
    return;
  }

  if (arg1 > 0)
  {
    arg1--;
    goto loop;
  }
}



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

#undef func_80235EB4
typedef struct func_80235EB4_Inner { u8 pad[0xC]; u16 unkC; } func_80235EB4_Inner;
typedef struct func_80235EB4_Struct {
    u8 pad[0x94];
    func_80235EB4_Inner *unk94;
    u8 pad2[0xA4 - 0x98];
    s8 unkA4;
    s8 unkA5;
} func_80235EB4_Struct;
#define func_80235E00 func_80235E00__decl701
extern void func_80235E00(func_80235EB4_Struct *, s8);
#define func_802358A0 func_802358A0__decl648
extern void func_802358A0(func_80235EB4_Struct *);

s32 func_80235EB4(func_80235EB4_Struct *arg0) {
    u8 pa[4];
    s8 sp1B;
    s8 padv;
    s8 sp19;
    u8 i;
    s32 f;
    func_80235EB4_Inner *p;

    p = arg0->unk94;
    sp1B = 0;
    if (((func_80234450_Struct *)D_802407E8)[arg0->unkA5].unk8 == 0) {
        for (i = 0; i < arg0->unkA4; i++) {
            if (((func_80234450_Struct *)D_802407E8)[i].unk8 > 0) {
                arg0->unkA5 = i;
                break;
            }
            arg0->unkA5 = arg0->unkA4;
        }
    }
    padv = 0;
    sp19 = arg0->unkA5;
    f = p->unkC;
    if (f & 0x800) {
        sp1B = 1;
        if (arg0->unkA5 > 0) {
            func_80235E00(arg0, arg0->unkA5 - 1);
        }
    } else if (f & 0x400) {
        sp1B = 1;
        if (arg0->unkA5 < arg0->unkA4 - 1) {
            func_80235E54((void *)arg0, arg0->unkA5 + 1);
        }
    }
    if (sp19 != arg0->unkA5) {
        func_80020744(0x300);
    }
    func_802358A0(arg0);
    return sp1B;
}
#undef func_80235E00
#undef func_802358A0
#define func_80235EB4 func_80235EB4__decl

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


typedef struct func_80236408_StructPair {
    u8 unk0;
    u8 unk1;
} func_80236408_StructPair;

typedef struct func_80236408_Struct {
    u8 pad[0xA3];
    s8 unkA3;
} func_80236408_Struct;

extern func_80236408_StructPair D_8023E4E8;
extern void func_80234ED4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4);

void func_80236408(func_80236408_Struct *arg0, s32 arg1) {
    func_80236408_StructPair sp24 = D_8023E4E8;

    arg0->unkA3 = 2;
    func_80234ED4(arg0, arg1, &sp24, 0, 1);
}


typedef struct func_8023644C_Struct {
    u8 data[2];
} func_8023644C_Struct;

typedef struct func_8023644C_StructArg {
    u8 pad[0xA3];
    s8 unkA3;
} func_8023644C_StructArg;

extern func_8023644C_Struct D_8023E4EC;

void func_8023644C(func_8023644C_StructArg *arg0, s32 arg1) {
    func_8023644C_Struct sp24 = D_8023E4EC;

    arg0->unkA3 = 2;
    func_80234ED4(arg0, arg1, &sp24, 0, 0);
}


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


extern s32 func_8023639C(void *arg0);
struct func_802364E8_Struct { u8 b[5]; };
extern struct func_802364E8_Struct D_8023E4F4;

void func_802364E8(void *arg0, s32 arg1) {
    struct func_802364E8_Struct sp;

    sp = D_8023E4F4;
    if (func_80236374(arg0) != 0) {
        ((struct func_8023466C_Struct *)arg0)->unkA3 = 1;
        func_80234ED4(arg0, arg1, &sp.b[4], 0, 0);
        return;
    }
    if (func_8023639C(arg0) != 0) {
        ((struct func_8023466C_Struct *)arg0)->unkA3 = 2;
        func_80234ED4(arg0, arg1, &sp.b[3], 0, 0);
        return;
    }
    if (func_80236320(arg0) != 0) {
        ((struct func_8023466C_Struct *)arg0)->unkA3 = 3;
        func_80234ED4(arg0, arg1, &sp, 0, 0);
        return;
    }
    ((struct func_8023466C_Struct *)arg0)->unkA3 = 2;
    func_80234ED4(arg0, arg1, &sp, 0, 0);
}


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

#define func_802380EC_Part func_802380EC_Part__func_80236700
#define func_802380EC_Struct func_802380EC_Struct__func_80236700
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

typedef struct func_80236700_StructData {
    u8 bytes[2];
} func_80236700_StructData;

extern func_80236700_StructData D_8023E4FC;

void func_80236700(struct func_802380EC_Struct *arg0, s32 arg1) {
    func_80236700_StructData sp24;

    sp24 = D_8023E4FC;
    ((u8 *)arg0)[0xA1] = 0;
    ((s8 *)arg0)[0xA3] = 2;
    func_80234ED4(arg0, arg1, &sp24, 0, 0);
}
#undef func_802380EC_Part
#undef func_802380EC_Struct



s32 func_80236744(s32 arg0) {
    if (D_8023E3BC == 0) {
        D_8023E3BC = func_80005670(arg0, D_8023E3D8);
        return 1;
    }
    return 0;
}


struct func_80236788_Part {
    u8 pad[0x38];
    u32 unk38;
};
struct func_80236788_Struct {
    u8 pad0[0x1C];
    void *unk1C;
    u8 pad20[0x78];
    struct func_80236788_Part *unk98;
    u8 pad9C[6];
    s8 unkA2;
    u8 padA3[2];
    s8 unkA5;
    u8 padA6[4];
    u8 unkAA;
};
extern u8 D_8023E3A8;
extern void func_802380EC();
extern void func_802398FC();
extern void func_802378DC();
extern void func_80237B7C();
extern void func_802397A8();
extern void func_802393F8();
#define G ((struct func_80236788_Struct *)D_8023E3B8)

u8 func_80236788(void) {
    struct func_80236788_Part *a2;

    if (G != NULL) {
        a2 = G->unk98;
        if (G->unk1C == (void *)func_80237250) {
            return 1;
        }
        if (D_8023E3A8 == 1) {
            return 8;
        }
        if ((G->unk1C == (void *)func_80238E60) || (G->unk1C == (void *)func_80238928)) {
            if (G->unkA2 == 0) {
                return 0xA;
            }
            if (func_80236348((void *)G) != 0) {
                if (G->unkA5 == 0) {
                    return 0xB;
                }
                if (G->unkA5 == 1) {
                    return 0xD;
                }
            }
            if ((a2->unk38 >> 31) != 0) {
                if (G->unkA5 == 0) {
                    return 0xF;
                }
                if (G->unkA5 == 1) {
                    return 0x10;
                }
                if (G->unkA5 == 2) {
                    return 0xE;
                }
            }
            if (G->unkA5 == 0) {
                return 0xC;
            }
            if (G->unkA5 == 1) {
                return 0xD;
            }
            if (G->unkA5 == 2) {
                return 0xB;
            }
        }
        if (G->unk1C == (void *)func_8023748C) {
            if (G->unkA5 == 0) {
                return 6;
            }
            if (G->unkA5 == 1) {
                return 7;
            }
        }
        if (G->unk1C == (void *)func_802378DC) {
            if (func_80236374((void *)G) != 0) {
                return 4;
            }
            if (func_8023639C(G) != 0) {
                if (G->unkA5 == 0) {
                    return 3;
                }
                if (G->unkA5 == 1) {
                    return 4;
                }
            }
            if (G->unkA5 == 0) {
                return 2;
            }
            if (G->unkA5 == 1) {
                return 3;
            }
            if (G->unkA5 == 2) {
                return 5;
            }
        }
        if (G->unk1C == (void *)func_80237B7C) {
            return G->unkAA;
        }
        if (G->unk1C == (void *)func_80237EC8) {
            if (G->unkA5 == 0) {
                return 8;
            }
            if (G->unkA5 == 1) {
                return 9;
            }
        }
        if (G->unk1C == (void *)func_802380EC) {
            return 9;
        }
        if ((G->unk1C == (void *)func_802397A8) || (G->unk1C == (void *)func_802398FC) || (G->unk1C == (void *)func_80239048) || (G->unk1C == (void *)func_802393F8)) {
            return 0xB;
        }
    }
    return 0;
}
#undef G


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



s32 func_80236C9C(void) {
    if (D_801BBC06[4] != 0) {
        return 1;
    }
    return 0;
}

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

#define func_80234CE8 func_80234CE8__decl886
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
#undef func_80234CE8

#define D_801BCC20 D_801BCC20__func_80237250
#define func_801470E8 func_801470E8__func_80237250
#define func_8023644C func_8023644C__func_80237250
#define func_802364E8 func_802364E8__func_80237250
#define func_80239FB4 func_80239FB4__func_80237250
#define func_80239FB4_Arg0 func_80239FB4_Arg0__func_80237250
#define func_80239FB4_Arg1 func_80239FB4_Arg1__func_80237250
#define func_80239FB4_Node func_80239FB4_Node__func_80237250
#define func_80239FB4_Part func_80239FB4_Part__func_80237250
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

typedef struct func_80237250_Struct98 {
    u8 pad[0x38];
    u32 unk38;
    u8 pad2[0x8];
    s16 unk44;
} func_80237250_Struct98;
typedef struct func_80237250_Struct94 {
    u8 pad[4];
    u16 unk4;
    u8 pad2[6];
    u16 unkC;
} func_80237250_Struct94;
typedef struct func_80237250_Struct {
    u8 pad[0x94];
    func_80237250_Struct94 *unk94;
    func_80237250_Struct98 *unk98;
    u8 pad2[0x5];
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad3[1];
    s8 unkA5;
    u8 pad4[3];
    u8 unkA9;
    u8 pad5[1];
    u8 unkAB;
} func_80237250_Struct;

extern void func_801470E8(s32, s32, s32, s32);
extern void func_8023644C(void *, s32);
extern void func_802364E8(void *, s32);
extern u8 D_801BCC20;
struct func_80239FB4_Arg0;
struct func_80239FB4_Arg1;
void func_80239FB4(struct func_80239FB4_Arg0 *arg0, struct func_80239FB4_Arg1 *arg1);

void func_80237250(func_80237250_Struct *arg0, s32 arg1) {
    s8 v;
    func_80237250_Struct94 *p94 = arg0->unk94;
    func_80237250_Struct98 *p98 = arg0->unk98;

    v = arg0->unkA2;
    if (v == 0) {
        if ((p94->unkC & 0x200) && (arg0->unkA9 & 2)) {
            func_80020744(0x300);
            arg0->unkA2 = 1;
            arg0->unkA1 = -1;
            func_8023644C(arg0, arg1);
        } else if (((p94->unkC & 0x100) || (p94->unk4 & 0x8000)) && (arg0->unkA9 & 1)) {
            func_80020744(0x300);
            arg0->unkA2 = -1;
            func_802364E8(arg0, arg1);
        } else if (p94->unk4 & 0x4000) {
            if ((p98->unk38 >> 0x1F) != 0) {
                p98->unk44 = 0xA;
            } else {
                p98->unk44 = 0x14;
            }
            func_800058DC(arg0, func_80239FB4);
        } else if (func_80234D2C((void *)arg0) != 0) {
            func_801453CC(((s32 *)D_8024086C)[1], 0, D_801BCC20, 1, 0x1B, 7, 0x1B);
        }
        func_80234828((void *)arg0, (void *)arg1);
        func_801470E8(arg1, 0, 2, 1);
        v = arg0->unkA2;
    }
    if (v == 1) {
        func_801470E8(arg1, 0, 2, 0);
        func_80235394((void *)arg0, arg1, 0);
        if (arg0->unkA2 == 0) {
            arg0->unkA5 = 0;
            arg0->unkAB = 0;
            func_800058DC(arg0, func_8023748C);
        }
    } else if (v == -1) {
        func_801470E8(arg1, 0, 2, 0);
        func_80235394((void *)arg0, arg1, 0);
        if (arg0->unkA2 == 0) {
            arg0->unkA5 = (arg0->unkA3 - 1) / 2;
            func_800058DC(arg0, func_802378DC);
        }
    }
}
#undef D_801BCC20
#undef func_801470E8
#undef func_8023644C
#undef func_802364E8
#undef func_80239FB4
#undef func_80239FB4_Arg0
#undef func_80239FB4_Arg1
#undef func_80239FB4_Node
#undef func_80239FB4_Part

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

#define func_8023A0EC func_8023A0EC__func_80237768
#define func_8023A0EC_Inner func_8023A0EC_Inner__func_80237768
#define func_8023A0EC_Struct func_8023A0EC_Struct__func_80237768
typedef struct func_8023A0EC_Inner {
    u8 pad[0x74];
    u8 unk74;
} func_8023A0EC_Inner;
typedef struct func_8023A0EC_Struct {
    u8 pad[0x90];
    func_8023A0EC_Inner *unk90;
} func_8023A0EC_Struct;

typedef struct func_80237768_Struct {
    u8 pad[8];
    s32 unk8;
} func_80237768_Struct;

extern s32 func_80148E80(void);
struct func_8023A0EC_Struct;
void func_8023A0EC(struct func_8023A0EC_Struct *arg0, s32 arg1);

void func_80237768(s32 arg0, s32 arg1) {
    if ((func_80148E80() != 0) && (func_80236A48(arg0) != 0)) {
        func_80236BC8(1);
        if (((func_80237768_Struct *)arg0)->unk8 == 0) {
            func_800058DC(arg0, func_8023A0EC);
        }
    }
}
#undef func_8023A0EC
#undef func_8023A0EC_Inner
#undef func_8023A0EC_Struct



void func_802377CC(s32 arg0, s32 arg1) {
    u8 sp3F;

    func_80146178(arg0, &sp3F, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0);
    func_800058DC(arg0, func_80237834);
}


extern f64 D_802405A0;

struct func_80237834_Part {
    u8 pad[0xB];
    u8 unkB;
};

struct func_80237834_Node {
    u8 pad[0x30];
    struct func_80237834_Part *unk30;
};

struct func_80237834_Arg {
    u8 pad[0x24];
    struct func_80237834_Node *unk24;
};

void func_80237834(struct func_80237834_Arg *arg0, s32 arg1)
{
  struct func_80237834_Part *temp_v1;
  s16 var_v0;
 var_v0 = 1; if (1) { } if (var_v0) { } if (var_v0) { } if (var_v0) { } if (var_v0) { }
  temp_v1 = arg0->unk24->unk30;
  var_v0 = temp_v1->unkB + 0x14;
  if (D_802405A0 < ((f64) var_v0))
  {
    var_v0 = 0x66;
  }
  temp_v1->unkB = (u8) var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80233430/func_80237880.s")

#define func_802380EC_Part func_802380EC_Part__func_802378DC
#define func_802380EC_Struct func_802380EC_Struct__func_802378DC
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

typedef struct func_802378DC_Struct {
    u8 pad0[0x94];
    struct func_802378DC_Struct1 *unk94;
    u8 pad98[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad4;
    s8 unkA5;
    s8 unkA6;
    u8 unkA7;
} func_802378DC_Struct;
struct func_802378DC_Struct1 {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
};
struct func_802380EC_Struct;
extern s32 func_80235D48();
extern s8 D_8023E3A4;
#define V ((void *)arg0)

void func_802378DC(func_802378DC_Struct *arg0, s32 arg1) {
    struct func_802378DC_Struct1 *v = arg0->unk94;
    s32 t;

    if (arg0->unkA2 == 0) {
        if (func_80235D48() == 0) {
            if ((v->unkC & 0x200) || (v->unk4 & 0x4000)) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                func_80236408(V, arg1);
            } else if ((v->unkC & 0x100) || (v->unk4 & 0x8000)) {
                func_80020744(0x300);
                arg0->unkA2 = -1;
                arg0->unkA1 = 1;
                D_8023E3A4 = 0;
                if (func_80236374(V) != 0) {
                    func_802366A0(V, arg1);
                } else if (func_8023639C(V) != 0) {
                    if ((t = arg0->unkA5) == 0) goto a0;
                    if (t != 1) goto join;
                    goto a1;
                a0:
                    func_80236640(V, arg1);
                    goto join;
                a1:
                    func_802366A0(V, arg1);
                } else {
                    if ((t = arg0->unkA5) == 0) goto b0;
                    if (t == 1) goto b1;
                    if (t != 2) goto join;
                    goto b2;
                b0:
                    func_802365E0(V, arg1);
                    goto join;
                b1:
                    func_80236640(V, arg1);
                    goto join;
                b2:
                    D_8023E3A4 = 1;
                    func_80236700(V, arg1);
                }
            join:
                arg0->unkA0 = (arg0->unkA7 - 1) / 5 + 1;
            }
            func_80234724(V, arg1, 0);
        }
    }
    if (arg0->unkA2 == 1) {
        func_80235394(V, arg1, 0);
        if (arg0->unkA2 == 0) {
            func_800058DC(V, func_80237250);
        }
    } else if (arg0->unkA2 == -1) {
        if (arg0->unkA5 == 2) {
            func_80235394(V, arg1, 0);
        } else {
            func_80235394(V, arg1, 2);
        }
        if (arg0->unkA2 == 0) {
            arg0->unkA6 = arg0->unkA5;
            if (arg0->unkA5 == 2) {
                func_800058DC(V, func_80237EC8);
                arg0->unkA5 = 0;
                return;
            }
            func_800058DC(V, func_80237B7C);
            arg0->unkA5 = arg0->unkA3 / 2;
        }
    }
}
#undef V
#undef func_802380EC_Part
#undef func_802380EC_Struct

#define D_8023E3A4 D_8023E3A4__func_80237B7C
#define func_802364E8 func_802364E8__func_80237B7C
#define func_802378DC func_802378DC__func_80237B7C

typedef struct func_80237B7C_Struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
} func_80237B7C_Struct;

typedef struct func_80237B7C_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80237B7C_Part;

typedef struct func_80237B7C_Obj {
    u8 pad0[0x94];
    func_80237B7C_Part *unk94;
    u8 pad1[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 unkA6;
    u8 pad2[5];
    u16 unkAC;
} func_80237B7C_Obj;

extern void func_802364E8(void *, s32);
extern void func_802378DC();
extern void func_80238254();
extern void func_80239BD0();
extern void func_80239CF4();
extern u8 D_8023E3A4;
extern u8 D_80237B7C[];
extern u8 D_80240570[];

void func_80237B7C(func_80237B7C_Obj *arg0, s32 arg1) {
    func_80237B7C_Part *p;
    func_80237B7C_Struct *e;
    s32 v;

    p = arg0->unk94;
    if (arg0->unkA2 == 0) {
        if (func_80235EB4() == 0) {
            if ((p->unkC & 0x200) || (p->unk4 & 0x4000)) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                arg0->unkA1 = arg0->unkA1 - 1;
                if (arg0->unkA1 == 0) {
                    if (D_8023E3A4 == 0) {
                        func_802364E8(arg0, arg1);
                    } else {
                        func_8023648C((void *)arg0, arg1);
                    }
                } else {
                    arg0->unkA3 = func_802362B8(arg0);
                    func_80234ED4(arg0, arg1, 0, 1, 2);
                }
            } else if (p->unkC & 0x100) {
                if (arg0->unkA0 != arg0->unkA1) {
                    func_80020744(0x300);
                    arg0->unkA2 = -1;
                    arg0->unkA1 = arg0->unkA1 + 1;
                    arg0->unkA3 = func_802362B8(arg0);
                    func_80234ED4(arg0, arg1, 0, 1, 2);
                }
            } else if ((p->unk4 & 0x8000) && (arg0->unkA5 < arg0->unkA4)) {
                func_80020744(0x104);
                v = arg0->unkA5;
                arg0->unkAC = 0;
                e = (func_80237B7C_Struct *)(D_80240828 + v * 12);
                func_8001B204(v & 0xFF, e->unk0 + 0x3E8, e->unk2, D_80240570, 8, 4, e->unk4);
                if (D_8023E3A4 == 0) {
                    func_800058DC(arg0, func_80239BD0);
                    return;
                }
                func_800058DC(arg0, func_80239CF4);
                return;
            }
            func_80234724((void *)arg0, arg1, 1);
        }
    }
    if (arg0->unkA2 == 1) {
        if (arg0->unkA1 == 0) {
            func_80235394((void *)arg0, arg1, 1);
        } else {
            func_80235394((void *)arg0, arg1, 3);
        }
        if (arg0->unkA2 == 0) {
            if (arg0->unkA1 == 0) {
                arg0->unkA5 = arg0->unkA6;
                if (D_8023E3A4 == 0) {
                    func_800058DC(arg0, func_802378DC);
                    return;
                }
                func_800058DC(arg0, func_80238254);
                return;
            }
            arg0->unkA5 = arg0->unkA3 / 2;
            func_800058DC(arg0, D_80237B7C);
        }
    } else if (arg0->unkA2 == -1) {
        func_80235394((void *)arg0, arg1, 3);
        if (arg0->unkA2 == 0) {
            arg0->unkA5 = arg0->unkA3 / 2;
            func_800058DC(arg0, D_80237B7C);
        }
    }
}
#undef D_8023E3A4
#undef func_802364E8
#undef func_802378DC

#define func_802380EC_Part func_802380EC_Part__func_80237EC8
#define func_802380EC_Struct func_802380EC_Struct__func_80237EC8
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

typedef struct func_80237EC8_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80237EC8_Part;

typedef struct func_80237EC8_Struct {
    u8 pad0[0x94];
    func_80237EC8_Part *unk94;
    u8 pad1[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
} func_80237EC8_Struct;

#define A ((func_80237EC8_Struct *)arg0)


void func_80237EC8(struct func_802380EC_Struct *arg0, s32 arg1) {
    func_80237EC8_Part *p = A->unk94;
    s8 v;

    if (A->unkA2 == 0) {
        if (func_80235D48() == 0) {
            D_8023E3A8 = 0;
            if ((p->unkC & 0x200) || (p->unk4 & 0x4000)) {
                func_80020744(0x300);
                A->unkA2 = 1;
                func_802364E8(arg0, arg1);
            } else if ((p->unkC & 0x100) || (p->unk4 & 0x8000)) {
                func_80020744(0x300);
                v = A->unkA5;
                A->unkA2 = -1;
                A->unkA1 = 0;
                if (v == 0) goto c0;
                if (v != 1) goto end;
                goto c1;
            c0:
                D_8023E3AC = 0;
                D_8023E3A8 = 1;
                func_8023648C((void *)arg0, arg1);
                goto end;
            c1:
                A->unkA3 = 5;
                func_80234ED4(arg0, arg1, 0, 1, 3);
            }
        end:
            func_80234724(arg0, arg1, 0);
        }
    }
    v = A->unkA2;
    if (v == 1) {
        func_80235394(arg0, arg1, 0);
        A->unkA5 = 2;
        D_8023E3A4 = 0;
        if (A->unkA2 == 0) {
            func_800058DC(arg0, func_802378DC);
        }
    } else if (v == -1) {
        if (A->unkA5 == 0) {
            func_80235394(arg0, arg1, 0);
        } else {
            func_80235394(arg0, arg1, 2);
        }
        if (A->unkA2 == 0) {
            v = A->unkA5;
            if (v == 0) goto d0;
            if (v != 1) return;
            goto d1;
        d0:
            A->unkA5 = 0;
            func_800058DC(arg0, func_80238254);
            return;
        d1:
            A->unkA5 = 2;
            A->unkA0 = 1;
            A->unkA1 = A->unkA0;
            func_800058DC(arg0, func_802380EC);
        }
    }
}

#undef A
#undef func_802380EC_Part
#undef func_802380EC_Struct


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

#define func_80236700 func_80236700__decl1201
extern void func_80236700(func_802380EC_Struct *, s32);
#define func_80234724 func_80234724__decl968
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
#undef func_80236700
#undef func_80234724

#define D_8023E3A4 D_8023E3A4__func_80238254
#define func_80237B7C func_80237B7C__func_80238254

typedef struct func_80238254_StructP {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80238254_StructP;
typedef struct func_80238254_Struct {
    u8 pad0[0x94];
    func_80238254_StructP *unk94;
    u8 pad1[8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 unkA6;
    u8 unkA7;
} func_80238254_Struct;
extern u8 D_8023E3A4;
extern void func_80239C8C();
extern void func_80237B7C();

void func_80238254(func_80238254_Struct *arg0, s32 arg1) {
    func_80238254_StructP *p = arg0->unk94;
    u16 b;
    u16 a;
    s8 t;

    if (arg0->unkA2 == 0 && func_80235D48() == 0) {
        if ((p->unkC & 0x200) || (p->unk4 & 0x4000)) {
            if (D_8023E3A4 != 2) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                func_80236700((void *)arg0, arg1);
            }
        } else if (((p->unkC & 0x100) || (p->unk4 & 0x8000)) && arg0->unkA5 < 2) {
            func_80020744(0x300);
            t = arg0->unkA5;
            arg0->unkA2 = -1;
            arg0->unkA1 = 1;
            if (t == 0) goto c0;
            if (t != 1) goto cend;
            goto c1;
        c0:
            func_802365E0((void *)arg0, arg1);
            goto cend;
        c1:
            func_80236640((void *)arg0, arg1);
        cend:
            arg0->unkA0 = (arg0->unkA7 - 1) / 5 + 1;
        } else if ((p->unk4 & 0x8000) && arg0->unkA5 == 2) {
            func_800058DC(arg0, func_80239C8C);
            return;
        }
        if (D_8023E3A4 == 2) {
            func_80234724((void *)arg0, arg1, -1);
        } else {
            func_80234724((void *)arg0, arg1, 0);
        }
    }
    if (arg0->unkA2 == 1) {
        func_80235394((void *)arg0, arg1, 0);
        arg0->unkA5 = 0;
        if (arg0->unkA2 == 0) {
            func_800058DC(arg0, func_80237EC8);
        }
    } else if (arg0->unkA2 == -1) {
        func_80235394((void *)arg0, arg1, 2);
        if (arg0->unkA2 == 0) {
            arg0->unkA6 = arg0->unkA5;
            func_800058DC(arg0, func_80237B7C);
            arg0->unkA5 = arg0->unkA3 / 2;
        }
    }
}
#undef D_8023E3A4
#undef func_80237B7C

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

typedef struct func_802397A8_StructA { u8 b[9]; } func_802397A8_StructA;
extern func_802397A8_StructA D_8023E51C;
typedef struct func_802397A8_StructB { u8 pad[0xC]; u16 unkC; } func_802397A8_StructB;
typedef struct func_802397A8_StructC { u8 pad[4]; u16 unk4; } func_802397A8_StructC;
typedef struct func_802397A8_Struct {
    u8 pad[0x94];
    func_802397A8_StructC *unk94;
    u8 pad2[0xA5-0x98];
    s8 unkA5;
    u8 pad3[2];
    u8 unkA8;
} func_802397A8_Struct;

void func_802397A8(func_802397A8_Struct *arg0, s32 *arg1) {
    func_802397A8_StructC *sp3C;
    u16 sp3A;
    u8 pad[4];
    func_802397A8_StructA sp28;
    u8 pad2[4];
    sp3C = arg0->unk94;
    sp3A = ((func_802397A8_StructB *)sp3C)->unkC;
    sp28 = D_8023E51C;
    func_80235FF8(arg0, arg1, 0xC);
    if (sp3A & 0x100) {
        arg0->unkA5 = arg0->unkA5 - 1;
        func_80020744(0x300);
        if (arg0->unkA5 < 0) {
            arg0->unkA5 = 7;
        }
    } else if (sp3A & 0x200) {
        func_80020744(0x300);
        arg0->unkA5 = arg0->unkA5 + 1;
    }
    arg0->unkA5 = arg0->unkA5 % 8;
    func_8023466C((void *)arg0, arg1);
    if ((sp3C->unk4 & 0x4000) && (arg0->unkA8 != 0)) {
        func_80147218(arg0);
        arg0->unkA5 = 2;
        func_800058DC(arg0, func_80238928);
    }
    if (sp3C->unk4 & 0x8000) {
        func_80020744(0x104);
        func_800058DC(arg0, func_80239A18);
    }
}



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

#define func_80239DFC_Inner func_80239DFC_Inner__func_80239BD0
struct func_80239DFC_Inner {
    u8 pad[0x74];
    u8 unk74;
};

typedef struct func_80239BD0_StructData {
    u8 pad[0xA];
    u8 unkA;
} func_80239BD0_StructData;
typedef struct func_80239BD0_StructEntry {
    func_80239BD0_StructData *data;
    u32 pad;
} func_80239BD0_StructEntry;
typedef struct func_80239BD0_StructArg {
    u8 pad0[0x90];
    struct func_80239DFC_Inner *unk90;
    u8 pad1[0xD];
    s8 unkA1;
    u8 pad2[3];
    s8 unkA5;
    u8 pad3[6];
    u16 unkAC;
    u8 pad4[2];
    func_80239BD0_StructEntry *unkB0;
} func_80239BD0_StructArg;
typedef struct func_80239BD0_StructGlobal {
    u8 pad[0x2D4];
    func_80239BD0_StructData *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
} func_80239BD0_StructGlobal;
extern void func_80376BE4(void *);
extern void func_80231CE4(void *);

void func_80239BD0(func_80239BD0_StructArg *arg0, s32 arg1) {
    u8 pad[8];
    func_80239BD0_StructGlobal *global;
    struct func_80239DFC_Inner *inner;
    s32 state;
    u8 index;
    func_80239BD0_StructEntry *table;

    inner = arg0->unk90;
    state = inner->unk74;
    global = (state == 0 || state == 2) ? (func_80239BD0_StructGlobal *) D_801BC03C
                                        : (func_80239BD0_StructGlobal *) D_801BC3D8;
    table = arg0->unkB0;
    if (arg0->unkAC >= 0x20) {
        index = arg0->unkA5 + arg0->unkA1 * 5 - 5;
        global->unk2D4 = table[index + 1].data;
        global->unk2D9 = global->unk2D4->unkA;
        func_80376BE4(global);
        func_80231CE4(global);
        func_800058DC(arg0, func_8023A09C);
    }
}
#undef func_80239DFC_Inner


extern void func_8013D134(void *);

typedef struct func_80239C8C_StructInner {
    u8 pad[0x74];
    u8 unk74;
} func_80239C8C_StructInner;

typedef struct func_80239C8C_Struct {
    u8 pad[0x90];
    func_80239C8C_StructInner *unk90;
} func_80239C8C_Struct;

void func_80239C8C(func_80239C8C_Struct *arg0, s32 arg1)
{
  u8 *var_a0;
  u8 temp_v1;
  func_80239C8C_StructInner *temp_v0;
  temp_v0 = arg0->unk90;
 temp_v1 = temp_v0->unk74; if ((temp_v1 == 0) || (temp_v1 == 2)) { var_a0 = D_801BC03C;
  }
  else
  {
    var_a0 = D_801BC3D8;
  }
  func_8013D134(var_a0);
  func_800058DC(arg0, func_8023A09C);
}


typedef struct func_80239CF4_B {
    u8 pad[0x74];
    u8 unk74;
} func_80239CF4_B;
typedef struct func_80239CF4_E {
    u8 pad[0xA];
    u8 unkA;
} func_80239CF4_E;
typedef struct func_80239CF4_F {
    func_80239CF4_E *unk0;
    s32 unk4;
} func_80239CF4_F;
typedef struct func_80239CF4_D {
    s32 unk0;
    s32 unk4;
    func_80239CF4_F arr[1];
} func_80239CF4_D;
typedef struct func_80239CF4_A {
    u8 pad0[0x90];
    func_80239CF4_B *unk90;
    u8 pad1[0xA1 - 0x94];
    s8 unkA1;
    u8 pad2[3];
    s8 unkA5;
    u8 pad3[0xAC - 0xA6];
    u16 unkAC;
    u8 pad4[2];
    func_80239CF4_D *unkB0;
} func_80239CF4_A;
typedef struct func_80239CF4_C {
    u8 pad[0x2D4];
    func_80239CF4_E *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
} func_80239CF4_C;

void func_80239CF4(func_80239CF4_A *arg0, s32 arg1) {
    u8 pad[8];
    func_80239CF4_C *a;
    u8 t;
    u8 idx;
    func_80239CF4_E *e;
    func_80239CF4_D *b;
    func_80239CF4_B *p;

    p = arg0->unk90;
    t = p->unk74;
    a = (t == 0 || t == 2) ? (func_80239CF4_C *)D_801BC03C : (func_80239CF4_C *)D_801BC3D8;
    b = arg0->unkB0;
    if (arg0->unkAC >= 0x20) {
        idx = arg0->unkA5 + arg0->unkA1 * 5 - 5;
        a->unk2D4 = b->arr[idx].unk0;
        a->unk2D9 = a->unk2D4->unkA;
        a->unk2D8 = 9;
        if ((u8)D_8023E3A4 == 1) {
            func_8013CD04(a, 0, 1, arg0);
        }
        D_8023E3A4 = 2;
        D_8023E3AC += 1;
        func_80231CE4(a);
        func_800058DC(arg0, func_8023A09C);
    }
}



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

#define func_8023A0EC func_8023A0EC__func_80239E80
#define func_8023A0EC_Inner func_8023A0EC_Inner__func_80239E80
#define func_8023A0EC_Struct func_8023A0EC_Struct__func_80239E80
typedef struct func_8023A0EC_Inner {
    u8 pad[0x74];
    u8 unk74;
} func_8023A0EC_Inner;
typedef struct func_8023A0EC_Struct {
    u8 pad[0x90];
    func_8023A0EC_Inner *unk90;
} func_8023A0EC_Struct;
extern void func_8023A0EC(func_8023A0EC_Struct *arg0, s32 arg1);

typedef struct func_80239E80_StructQ {
    u8 pad[0x31];
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
    u8 pad2[0x2D8 - 0x32];
    u8 unk2D8;
} func_80239E80_StructQ;
typedef struct func_80239E80_StructG {
    u8 pad[0x2D4];
    u8 *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
} func_80239E80_StructG;
typedef struct func_80239E80_StructR {
    u8 pad[0x74];
    u8 unk74;
} func_80239E80_StructR;
typedef struct func_80239E80_Struct {
    u8 pad[0x90];
    func_80239E80_StructR *unk90;
    u8 pad2[0x4];
    func_80239E80_StructQ *unk98;
} func_80239E80_Struct;

extern u8 D_801842A0[];
extern u8 D_801BCC25;

void func_80239E80(func_80239E80_Struct *arg0, s32 arg1) {
    func_80239E80_StructG *p;
    func_80239E80_StructQ *q;
    func_80239E80_StructR *r;
    u8 u;

    r = arg0->unk90;
    p = (r->unk74 == 0 || r->unk74 == 2) ? (func_80239E80_StructG *)D_801BC03C : (func_80239E80_StructG *)D_801BC3D8;
    if (p->unk2D8 == 0xA) {
        func_8013CD04(p, p->unk2D9, 0, arg0);
        func_800058DC(arg0, func_8023A09C);
        return;
    }
    if (p->unk2D8 != 0xB && p->unk2D8 != 0xC) {
        p->unk2D4 = D_801842A0 + p->unk2D9 * 0x1C;
        func_80231CE4(p);
        func_800058DC(arg0, func_8023A09C);
        return;
    }
    q = arg0->unk98;
    u = q->unk2D8;
    if (u == 0xB || u == 0xC) {
        D_801BCC25 = 1;
        q->low = 0;
        q->high = 1;
    }
    func_800058DC(arg0, func_8023A0EC);
}
#undef func_8023A0EC
#undef func_8023A0EC_Inner
#undef func_8023A0EC_Struct


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

#define func_8023A0EC func_8023A0EC__func_8023A09C
#define func_8023A0EC_Inner func_8023A0EC_Inner__func_8023A09C
#define func_8023A0EC_Struct func_8023A0EC_Struct__func_8023A09C
typedef struct func_8023A0EC_Inner {
    u8 pad[0x74];
    u8 unk74;
} func_8023A0EC_Inner;
typedef struct func_8023A0EC_Struct {
    u8 pad[0x90];
    func_8023A0EC_Inner *unk90;
} func_8023A0EC_Struct;
extern void func_8023A0EC(func_8023A0EC_Struct *arg0, s32 arg1);

typedef struct func_8023A09C_StructInner {
    u8 pad[0x31];
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
} func_8023A09C_StructInner;

typedef struct func_8023A09C_Struct {
    u8 pad[0x98];
    func_8023A09C_StructInner *unk98;
} func_8023A09C_Struct;

void func_8023A09C(func_8023A09C_Struct *arg0, s32 arg1) {
    extern void func_80147D60();
    func_8023A09C_StructInner *temp;

    temp = arg0->unk98;
    temp->low = 0;
    temp->high = 1;
    func_80147D60(10);
    func_800058DC(arg0, func_8023A0EC);
}
#undef func_8023A0EC
#undef func_8023A0EC_Inner
#undef func_8023A0EC_Struct



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

