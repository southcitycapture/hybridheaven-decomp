#include "common.h"

extern f32 D_8038AA10;
extern f64 D_8038AA18;
extern s32 D_80006214(s32);
extern s32 D_801BBCCC;
extern s32 func_80005E44(void *, void *);
extern s32 func_801DB6B8(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_8022397C();
extern s32 func_802242D0(s32, void *);
extern s32 func_802320E8(void *);
extern u16 func_80011590(s32);
extern u8 D_8008DA88[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_803643CC(s32, s32);
extern u8 D_80386878[];
extern u8 D_80386888[];
extern u8 D_803868A8[];
extern u8 D_803868C8[];
extern u8 D_803868D8[];
extern u8 D_803868FC[];
extern u8 func_80222E84[];
extern u8 func_80366278[];
extern u8 func_8036648C[];
extern void D_80020718(s32);
extern void func_80005700(s32 arg0, s32 arg1);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80006214();
extern void func_80010550(s32, s32);
extern void func_80011198(s32 arg0, void *arg1);
extern void func_80020718(s32);
extern void func_8013A334(void *, s32, s32, s32);
extern void func_8013B808(void *, s32, s32);
extern void func_801CD3FC(s32, u8, void **);
extern void func_80222450();
extern void func_802233B0();
extern void func_802237B0(s32, s32);
extern void func_802254F8(s32, u8, s32);
extern void func_80225540(s32 arg0);
extern void func_80226710(void *, s32, f32);
extern void func_803602D4();
extern void func_80360400();
extern void func_8036265C();
extern void func_8036445C(s32, s32, u8, u8);
extern void func_80366090();
extern void func_80366888();
extern void func_80366BF4();
extern void func_80366EC0(s32 arg0, s32 arg1);
extern void func_80366F88(s32 arg0, s32 arg1);
extern void func_80367050();
extern void func_80367288(s32, s32, u8);
extern void func_803676B8();
extern void func_80367788(s32 arg0, s32 arg1);
extern void func_80371DF4(void *, s32);



typedef struct func_80364340_Struct {
    s32 unk0;
    f32 unk4;
    s32 unk8;
} func_80364340_Struct;

s32 func_80364340(void *arg0, s32 arg1, s32 arg2, f32 arg3) {
    s32 temp_a2;
    func_80364340_Struct sp28;
    func_80364340_Struct sp1C;
    s32 var_v1;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8013A334(&sp28, arg1, temp_a2, 0x19);
    func_8013A334(&sp1C, arg1, temp_a2, 6);
    if (arg3 < sp28.unk4) {
        var_v1 = 2;
    } else if (arg3 < sp1C.unk4) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

typedef struct func_803643CC_Struct {
    s32 x, y, z;
} func_803643CC_Struct;
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;
struct func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern void D_80364340(s32, s32, func_803643CC_Struct);

void func_803643CC(s32 arg0, s32 arg1) {
    s32 a;
    func_803643CC_Struct sp28;

    if (arg0 != ((func_803643CC_Glob *)&D_801BBBF0)->unkDC) {
        a = ((func_803643CC_Glob *)&D_801BBBF0)->unkDC;
    } else {
        a = ((func_803643CC_Glob *)&D_801BBBF0)->unkEC;
    }
    func_80006214(a);
    func_80360400(&sp28, a, D_8008DA88);
    func_80006214(arg0);
    D_80364340(arg0, arg1, sp28);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_8036445C.s")


typedef struct func_80364D2C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x2D8 - 0x38];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2F8 - 0x2DA];
    u8 unk2F8;
    u8 pad2F9[0x320 - 0x2F9];
    u8 unk320;
    u8 pad321[0x375 - 0x321];
    u8 unk375;
    u8 unk376;
} func_80364D2C_Struct;
typedef struct func_80364D2C_Struct4 {
    u16 t[3][3];
} func_80364D2C_Struct4;
typedef struct func_80364D2C_Vec {
    s32 x, y, z;
} func_80364D2C_Vec;

#define G80364D2C ((func_803643CC_Glob *)&D_801BBBF0)

extern void D_803709D0(s32, func_80364D2C_Vec, s32);
extern func_80364D2C_Struct4 D_803869EC;

void func_80364D2C(s32 arg0, s32 arg1) {
    s32 sp54;
    func_80364D2C_Struct *sp50;
    func_80364D2C_Struct *t0;
    func_80364D2C_Struct4 sp38;
    func_80364D2C_Vec sp2C;
    u8 v1;
    u8 v0;
    u8 sp29;

    if (arg0 != G80364D2C->unkDC) {
        sp54 = G80364D2C->unkDC;
    } else {
        sp54 = G80364D2C->unkEC;
    }
    if (arg0 == G80364D2C->unkDC) {
        sp50 = (func_80364D2C_Struct *)D_801BC03C;
    } else {
        sp50 = (func_80364D2C_Struct *)D_801BC3D8;
    }
    if (arg0 != G80364D2C->unkDC) {
        t0 = (func_80364D2C_Struct *)D_801BC03C;
    } else {
        t0 = (func_80364D2C_Struct *)D_801BC3D8;
    }
    sp38 = D_803869EC;
    if (sp50->unk2F8 != 0) {
        sp29 = D_803643CC(arg0, arg1);
        func_80006214(sp54);
        func_80360400(&sp2C, sp54, D_8008DA88);
        D_80006214(arg0);
        if (t0->unk2D8 == 0xA || t0->unk2D8 == 9) {
            if (t0->unk375 >= t0->unk376) {
                sp50->unk2F8 = 4;
            }
        }
        D_803709D0(arg0, sp2C, sp50->unk2F8);
        if (sp50->unk2F8 >= 6) {
            v1 = 0;
        } else if (sp50->unk2F8 >= 4) {
            v1 = 2;
        } else {
            v1 = (sp50->unk2F8 - 1) & 0xFF;
        }
        if (((func_80364D2C_Struct *)sp54)->unk36 == 0xF6 || ((func_80364D2C_Struct *)sp54)->unk36 == 0xF4 || ((func_80364D2C_Struct *)sp54)->unk36 == 0xF5) {
            D_80020718(0x229);
        } else {
            if (((func_80364D2C_Struct *)arg0)->unk36 == 0xF6 || ((func_80364D2C_Struct *)arg0)->unk36 == 0xF4 || ((func_80364D2C_Struct *)arg0)->unk36 == 0xF5) {
                v0 = 2;
            } else {
                v0 = (t0->unk2D9 < 0xE) ? 0 : 1;
            }
            D_80020718(sp38.t[v0][v1]);
        }
        func_8036445C(arg0, arg1, sp50->unk320, sp29);
    }
}


typedef struct func_80364F74_Struct {
    s32 unk0;
    u16 unk4;
    u8 unk6;
    u8 pad7;
} func_80364F74_Struct;
typedef struct func_80364F74_Struct2 {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_80364F74_Struct2;
extern func_80364F74_Struct D_80386830[];

u8 func_80364F74(func_80364F74_Struct2 *arg0) {
    func_80364F74_Struct *p;

    for (p = D_80386830; p->unk0 != 0; p++) {
        if (arg0->unk0 == p->unk0) {
            if (arg0->unk4 == func_80011590((u16)(u32)((f32)(u32)p->unk4 * arg0->unk8))) {
                return p->unk6;
            }
            return 0;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803650AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80365410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80365AAC.s")


typedef struct func_80365FE0_Struct {
    u8 pad0[0x30];
    u32 p30 : 8;
    u32 a31 : 1;
    u32 b31 : 2;
    u32 c31 : 5;
    u32 p32 : 16;
    u8 pad34[4];
    u32 a38 : 1;
    u32 b38 : 2;
    u32 c38 : 1;
    u32 d38 : 4;
    u32 p39 : 24;
    u8 pad3C[0x2FA - 0x3C];
    u8 unk2FA;
} func_80365FE0_Struct;

void func_80365FE0(u8 *arg0, s32 arg1) {
    func_80365FE0_Struct *v;
    s32 a3;

    if ((s32)arg0 == *(s32 *)((u8 *)&D_801BBBF0 + 0xDC)) {
        v = (func_80365FE0_Struct *)&D_801BC03C;
    } else {
        v = (func_80365FE0_Struct *)&D_801BC3D8;
    }
    a3 = *(s32 *)(arg0 + 0x5C);
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        v->unk2FA = 0;
        v->b31 = 0;
        v->a38 = 0;
        v->c38 = 0;
        v->b38 = 0;
        func_803602D4(arg0, arg1);
        func_80011198(arg1, (void *)a3);
        func_800058DC((s32)arg0, func_80366090);
    }
}


typedef struct func_80366090_Struct { s32 a; s32 b; s32 c; } func_80366090_Struct;
typedef struct func_80366090_S2 { u8 p0[2]; s16 s2; u8 p4[0x2C]; u32 u30; } func_80366090_S2;
extern s32 func_80011140(s32, s32, func_80366090_Struct, s32);
extern void func_8013A28C(s32, func_80366090_Struct);
extern func_80366090_Struct D_80386A00;

void func_80366090(u8 *arg0, s32 arg1) {
    func_80366090_S2 *v1;
    func_80366090_S2 *v0;
    s32 a1;
    func_80366090_Struct sp28;
    u32 w;

    if (arg0 == *(u8 **)((u8 *)&D_801BBBF0 + 0xDC)) {
        v1 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x44C);
    } else {
        v1 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x7E8);
    }
    if (arg0 != *(u8 **)((u8 *)&D_801BBBF0 + 0xDC)) {
        v0 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x44C);
    } else {
        v0 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x7E8);
    }
    a1 = *(s32 *)(arg0 + 0x5C);
    sp28 = D_80386A00;
    if (v1->s2 <= 0 || (w = v1->u30, ((w << 1) >> 30) != 0)) {
        func_800058DC((s32)arg0, func_80222E84);
        return;
    }
    if (v0->s2 <= 0 || ((v0->u30 << 1) >> 30) != 0) {
        func_800058DC((s32)arg0, func_8036648C);
        return;
    }
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        if ((*(u16 *)&v1->u30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (((w << 11) >> 30) == 2) {
            sp28.a = 0x0190001C;
        } else if (((w << 11) >> 30) == 3) {
            sp28.a = 0x0190001D;
        } else {
            sp28.a = 0x0190001B;
        }
        if (func_80011140(arg1, a1, sp28, 3) != 0) {
            func_8013A28C(arg1, sp28);
            func_80010550(arg1, a1);
            func_800058DC((s32)arg0, func_80366278);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_8036648C.s")


typedef struct func_80366648_StructA {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 unk31_a : 3;
    u8 unk31_b : 2;
    u8 unk31_c : 3;
    u8 pad32;
    u8 unk33_a : 1;
    u8 unk33_b : 7;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366648_StructA;
typedef struct func_80366648_StructI {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80366648_StructI;
typedef struct func_80366648_StructO {
    u8 pad0[0x5C];
    func_80366648_StructI *unk5C;
} func_80366648_StructO;


void func_80366648(s32 arg0, s32 arg1) {
    func_80366648_StructA *a;
    func_80366648_StructI *p;
    s32 v;

    if (arg0 == *(s32 *)((u8 *)&D_801BBBF0 + 0xDC)) {
        a = (func_80366648_StructA *)&D_801BC03C;
    } else {
        a = (func_80366648_StructA *)&D_801BC3D8;
    }
    p = ((func_80366648_StructO *)arg0)->unk5C;
    a->unk392 = 0;
    if (a->unk2 <= 0) {
        func_800058DC(arg0, func_80222E84);
        return;
    }
    if (((u8 *)&D_801BBBF0)[0x1031] != 0xF) {
        if ((*(u16 *)&a->unk30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        v = p->unk1C;
        if (v == 0x0190001A) {
            a->unk31_b = 3;
        } else if (v == 0x01900075 || v == 0x01900077) {
            a->unk31_b = 0;
        }
        if (func_802242D0(arg0, a) != 0 || func_802320E8(a) == 0) {
            a->unk33_a = 0;
        } else {
            a->unk33_a = 1;
        }
        if (func_801DB6B8(arg0, arg1, 0) != 0) {
            func_802237B0(arg0, 0);
            func_800058DC(arg0, func_8036265C);
        }
    }
}


typedef struct func_803667C4_StructArg {
    u8 pad[0x5C];
    void *unk5C;
} func_803667C4_StructArg;


void func_803667C4(func_803667C4_StructArg *arg0, s32 arg1) {
    void *temp_a3;
    u8 *var_v0;

    temp_a3 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = (u8 *)&D_801BC03C;
    } else {
        var_v0 = (u8 *)&D_801BC3D8;
    }
    func_802237B0(arg0, 0);
    var_v0[0x30] &= ~0x80;
    var_v0[0x30] &= 0xFE;
    var_v0[0x31] &= ~0x80;
    var_v0[0x38] &= ~0x80;
    var_v0[0x38] &= 0xEF;
    var_v0[0x38] &= 0x9F;
    var_v0[0x2F1] = 0;
    var_v0[0x391] = 0;
    var_v0[0x393] = 0;
    func_80011198(arg1, temp_a3);
    func_800058DC((s32)arg0, (void *)func_80366888);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366888.s")


typedef struct func_80366A0C_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b0 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 rest : 25;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366A0C_Struct;

typedef struct func_80366A0C_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_80366A0C_G;


void func_80366A0C(func_803667C4_StructArg *arg0, s32 arg1) {
    func_80366A0C_Struct *v0;
    func_80366A0C_Struct *a0;
    s32 a2;

    a2 = (s32)arg0->unk5C;
    if ((s32)arg0 == ((func_80366A0C_G *)&D_801BBBF0)->unkDC) {
        v0 = (func_80366A0C_Struct *)D_801BC03C;
    } else {
        v0 = (func_80366A0C_Struct *)D_801BC3D8;
    }
    if ((s32)arg0 != ((func_80366A0C_G *)&D_801BBBF0)->unkDC) {
        a0 = (func_80366A0C_Struct *)D_801BC03C;
    } else {
        a0 = (func_80366A0C_Struct *)D_801BC3D8;
    }
    v0->unk392 = 0;
    if (((func_80366A0C_G *)&D_801BBBF0)->unk1031 != 0xF) {
        if (v0->unk2 <= 0 || v0->f1 != 0) {
            func_802233B0(arg0, arg1, a2);
            return;
        }
        if ((*(u16 *)((u8 *)v0 + 0x30) & 7) == 5U) {
            func_8022397C(arg0, ((func_80366A0C_G *)&D_801BBBF0)->unk1031, a2);
            return;
        }
        if (v0->f2 != 1 || a0->unk2 <= 0 || a0->f1 != 0) {
            func_80222450(arg0, arg1, 5);
            return;
        }
        if (((func_80366A0C_G *)&D_801BBBF0)->unk1031 == 5) {
            func_80010550(arg1, a2);
        }
    }
}


typedef struct func_80366B30_StructArg {
    u8 pad[0x5C];
    void *unk5C;
} func_80366B30_StructArg;


void func_80366B30(func_80366B30_StructArg *arg0, s32 arg1) {
    void *temp_a3;
    u8 *var_v0;

    temp_a3 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = (u8 *)&D_801BC03C;
    } else {
        var_v0 = (u8 *)&D_801BC3D8;
    }
    func_802237B0(arg0, 0);
    var_v0[0x30] &= ~0x80;
    var_v0[0x30] &= 0xFE;
    var_v0[0x31] &= ~0x80;
    var_v0[0x38] &= ~0x80;
    var_v0[0x38] &= 0xEF;
    var_v0[0x38] &= 0x9F;
    var_v0[0x2F1] = 0;
    var_v0[0x391] = 0;
    var_v0[0x393] = 0;
    func_80011198(arg1, temp_a3);
    func_800058DC((s32)arg0, (void *)func_80366BF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366BF4.s")


typedef struct func_80366D28_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b31 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 b24 : 1;
    u32 b16 : 8;
    u32 g : 3;
    u32 b5 : 8;
    u32 h : 2;
    u32 b0 : 3;
    u8 pad34[0x2DE - 0x34];
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x320 - 0x2F0];
    u8 unk320;
    u8 pad321[0x390 - 0x321];
    u8 unk390;
} func_80366D28_Struct;

typedef struct func_80366D28_Struct2 {
    u8 pad0[0x5C];
    void *unk5C;
} func_80366D28_Struct2;

typedef struct func_80366D28_Struct3 {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
    s16 unk82;
} func_80366D28_Struct3;


void func_80366D28(s32 arg0, s32 arg1, u8 arg2) {
    func_80366D28_Struct *a;
    func_80366D28_Struct *b;
    func_80366D28_Struct3 *p;

    if (arg0 == D_801BBCCC) {
        a = (func_80366D28_Struct *)&D_801BC03C;
    } else {
        a = (func_80366D28_Struct *)&D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        b = (func_80366D28_Struct *)&D_801BC03C;
    } else {
        b = (func_80366D28_Struct *)&D_801BC3D8;
    }
    p = ((func_80366D28_Struct2 *)arg0)->unk5C;
    func_802237B0(arg0, 1);
    a->unk320 = arg2;
    a->b24 = 1;
    a->g = 0;
    b->unk2DE = 0;
    b->unk2EC = 1.0f;
    if (a->unk2 <= 0) {
        a->f1 = 1;
    }
    func_80011198(arg1, p);
    if (a->f1 != 0) {
        func_80366F88(arg0, arg1);
    } else {
        if (a->h != 0 && a->unk390 == 2) {
            p->unk7C = D_803868A8;
        } else if (arg2 < 2) {
            p->unk7C = D_80386878;
        } else {
            p->unk7C = D_80386888;
        }
        p->unk82 = 5;
        p->unk80 = 3;
        func_8013B808((void *)arg0, arg1, 2);
        func_800058DC(arg0, (void *)func_80366EC0);
    }
}


typedef struct func_80366EC0_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 pad31[0x392 - 0x31];
    u8 unk392;
} func_80366EC0_Struct;


void func_80366EC0(s32 arg0, s32 arg1) {
    func_80366EC0_Struct *var_v1;

    if (arg0 == D_801BBCCC) {
        var_v1 = &D_801BC03C;
    } else {
        var_v1 = &D_801BC3D8;
    }
    var_v1->unk392 = 0;
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_80225540(arg0);
        var_v1->unk30 = var_v1->unk30 & 0xFFFE;
        if (var_v1->unk2 <= 0 || ((*(u32 *) &var_v1->unk30 << 1) >> 0x1E) != 0) {
            var_v1->unk30 = (var_v1->unk30 & 0xFF9F) | 0x20;
            func_80366F88(arg0, arg1);
            return;
        }
        func_800058DC(arg0, func_8036265C);
    }
}



typedef struct func_80366F88_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x390 - 0x34];
    u8 unk390;
    u8 pad391;
    u8 unk392;
} func_80366F88_Struct;

typedef struct func_80366F88_Struct2 {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
    s16 unk82;
} func_80366F88_Struct2;

void func_80366F88(s32 arg0, s32 arg1) {
    func_80366F88_Struct *var_v0;
    func_80366F88_Struct2 *temp_a1;
    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80366F88_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80366F88_Struct *) &D_801BC3D8;
    }
    temp_a1 = *(func_80366F88_Struct2 **) (arg0 + 0x5C);
    var_v0->unk392 = 0;
    func_80011198(arg1, temp_a1);
    if ((((u32) var_v0->unk30 << 27) >> 30) != 0 && (var_v0->unk390 == 2 || var_v0->unk390 == 2)) {
        temp_a1->unk7C = D_803868C8;
    } else {
        temp_a1->unk7C = D_803868D8;
    }
    temp_a1->unk82 = 5;
    temp_a1->unk80 = 3;
    func_800058DC(arg0, (void *) func_80367050);
}

typedef struct func_80367050_StructP {
    s32 unk0;
    u16 unk4;
} func_80367050_StructP;
typedef struct func_80367050_StructB {
    u8 pad0[0x80];
    u16 unk80;
} func_80367050_StructB;
typedef struct func_80367050_StructA {
    u8 pad0[0x5C];
    func_80367050_StructB *unk5C;
} func_80367050_StructA;
typedef struct func_80367050_StructS {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad31[0x2F8 - 0x31];
    u8 unk2F8;
    u8 pad2F9[0x392 - 0x2F9];
    u8 unk392;
} func_80367050_StructS;

void func_80367050(func_80367050_StructA *arg0, s32 arg1) {
    func_80367050_StructS *s;
    func_80367050_StructB *b;
    func_80367050_StructP *p;

    if ((s32)arg0 == D_801BBCCC) {
        s = (func_80367050_StructS *)&D_801BC03C;
    } else {
        s = (func_80367050_StructS *)&D_801BC3D8;
    }
    b = arg0->unk5C;
    s->unk392 = 0;
    p = (func_80367050_StructP *)((u8 *)b + 0x1C);
    if (b->unk80 == 0) {
        if (p->unk0 == 0x0191009F && p->unk4 == func_80011590(1)) {
            func_8013B808(arg0, arg1, 2);
        } else if (p->unk0 == 0x019100A5) {
            if (p->unk4 == func_80011590(1)) {
                func_80226710(arg0, 0x262, 1.0f);
                func_8013B808(arg0, arg1, 5);
                s->unk2F8 = 3;
                func_80371DF4(arg0, arg1);
            }
        }
    }
    if (func_801DB6B8((s32)arg0, arg1, 0) != 0) {
        func_80225540((s32)arg0);
        s->unk30 &= 0xFFFE;
        s->unk30 = (s->unk30 & 0x9F) | 0x20;
        func_800058DC((s32)arg0, func_80222E84);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803671A0.s")

typedef struct func_80367288_Vec { f32 x, y, z; } func_80367288_Vec;
typedef struct func_80367288_Ent { u8 pad0[0x2D8]; u8 unk2D8; u8 pad2D9[0x365-0x2D9]; u8 unk365; u8 pad366[2]; f32 unk368; u8 pad36C[4]; f32 unk370; } func_80367288_Ent;
typedef struct func_80367288_Ent2 { u8 pad0[0x314]; f32 unk314; f32 unk318; f32 unk31C; } func_80367288_Ent2;
typedef struct func_80367288_Base { u8 pad0[0xDC]; s32 unkDC; u8 padE0[0xC]; s32 unkEC; } func_80367288_Base;
extern void func_803671A0(s32, void *, func_80367288_Vec, u8);

void func_80367288(s32 arg0, s32 arg1, u8 arg2) {
    s32 sp44;
    u8 *sp40;
    void *sp3C;
    func_80367288_Vec sp30;
    u8 pad[8];

    if (arg0 != ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp44 = ((func_80367288_Base *)&D_801BBBF0)->unkDC;
    } else {
        sp44 = ((func_80367288_Base *)&D_801BBBF0)->unkEC;
    }
    if (arg0 == ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp40 = (u8 *)&D_801BC03C;
    } else {
        sp40 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp3C = &D_801BC03C;
    } else {
        sp3C = &D_801BC3D8;
    }
    if (sp40[0x2D8] == 0xA || sp40[0x2D8] == 9) {
        ((func_80367288_Ent *)sp3C)->unk370 = 0.0f;
        ((func_80367288_Ent *)sp40)->unk365 = 0;
        ((func_80367288_Ent *)sp40)->unk368 = 0.0f;
        ((func_80367288_Ent *)sp40)->unk370 = 0.0f;
        return;
    }
    func_80360400(&sp30, arg0, arg1);
    sp30.x -= ((func_80367288_Ent2 *)sp40)->unk314;
    sp30.y -= ((func_80367288_Ent2 *)sp40)->unk318;
    sp30.z -= ((func_80367288_Ent2 *)sp40)->unk31C;
    func_803671A0(sp44, sp3C, sp30, arg2);
}


typedef struct func_803673B4_StructVec {
    s32 x, y, z;
} func_803673B4_StructVec;

typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;

extern void func_803709D0(s32, func_803673B4_StructVec, s32);

void func_803673B4(s32 arg0, s32 arg1, u8 arg2) {
    s32 sp34;
    func_803673B4_StructVec sp28;

    if (arg0 != D_801BBBF0.unkDC) {
        sp34 = D_801BBBF0.unkDC;
    } else {
        sp34 = D_801BBBF0.unkEC;
    }
    func_80360400(&sp28, arg0, arg1);
    func_803709D0(sp34, sp28, 0);
    func_80020718(0x3AC);
    func_802254F8(sp34, arg2, 2);
    func_80367288(arg0, arg1, arg2);
}


typedef struct func_80367460_Struct {
    u8 pad0[0x365];
    u8 unk365;
    u8 pad366[2];
    f32 unk368;
    u8 pad36C[4];
    f32 unk370;
} func_80367460_Struct;

typedef struct func_80367460_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80367460_Inner;

typedef struct func_80367460_Outer {
    u8 pad0[0x2C];
    func_80367460_Inner *unk2C;
} func_80367460_Outer;


void func_80367460(s32 arg0, void **arg1) {
    func_80367460_Struct *var_v0;
    f32 temp_fv0;
    u8 temp_a1;
    func_80367460_Inner *temp_v1;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80367460_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80367460_Struct *) &D_801BC3D8;
    }
    temp_a1 = var_v0->unk365;
    temp_v1 = ((func_80367460_Outer *) *arg1)->unk2C;
    if ((s32) temp_a1 > 0) {
        temp_fv0 = (f32) ((f64) (f32) temp_a1 / 15.0);
        temp_v1->unk4 = (f32) (temp_v1->unk4 + (var_v0->unk368 * temp_fv0));
        temp_v1->unkC = (f32) (temp_v1->unkC + (var_v0->unk370 * temp_fv0));
        var_v0->unk365 = (u8) (var_v0->unk365 - 1);
        func_801CD3FC(arg0, temp_a1, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80367518.s")


typedef struct func_803675F8_Struct {
    u8 pad0[0x2C];
    f32 x, y, z;
    u16 unk38, unk3A;
    u8 pad3C[4];
    s32 unk40;
    u8 pad44[0x10];
    u8 unk54;
} func_803675F8_Struct;

typedef struct func_803675F8_StructData {
    f32 x, y, z;
    s16 unkC, unkE, unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[0xE];
    f32 unk30, unk34, unk38;
} func_803675F8_StructData;

extern func_803675F8_StructData D_8038CC20;

void func_803675F8(func_803675F8_Struct *arg0, s32 arg1) {
    D_8038CC20.x = arg0->x;
    D_8038CC20.y = arg0->y;
    D_8038CC20.z = arg0->z;
    D_8038CC20.unk10 = 0;
    D_8038CC20.unkE = D_8038CC20.unk10;
    D_8038CC20.unkC = D_8038CC20.unk10;
    D_8038CC20.unk18 = arg0->unk38;
    D_8038CC20.unk20 = arg0->unk3A;
    D_8038CC20.unk1C = arg0->unk40;
    D_8038CC20.unk14 = 0x15;
    D_8038CC20.unk38 = D_8038AA10;
    D_8038CC20.unk34 = D_8038CC20.unk38;
    D_8038CC20.unk30 = D_8038CC20.unk38;
    if (func_80005E44(arg0, D_803868FC) != 0) {
        arg0->unk54 = 0;
        func_800058DC((s32) arg0, func_803676B8);
        return;
    }
    func_800058DC((s32) arg0, func_80367788);
}


typedef struct func_803676B8_StructPos {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    s16 rx;
    s16 ry;
} func_803676B8_StructPos;

typedef struct func_803676B8_StructLink {
    u8 pad0[0x2C];
    func_803676B8_StructPos *pos;
    func_803676B8_StructPos *other;
} func_803676B8_StructLink;

typedef struct func_803676B8_StructParent {
    u8 pad0[0x24];
    func_803676B8_StructLink *link;
} func_803676B8_StructParent;

typedef struct func_803676B8_Struct {
    u8 pad0[0xC];
    func_803676B8_StructParent *parent;
    u8 pad10[0x38];
    f32 x;
    f32 y;
    f32 z;
    u8 count;
} func_803676B8_Struct;


void func_803676B8(func_803676B8_Struct *arg0, func_803676B8_StructLink **arg1) {
    func_803676B8_StructPos *pos;
    f32 x, z;
    u8 *counter;

    pos = (*arg1)->other;
    arg0->y = (f32)((f64)arg0->y - D_8038AA18);
    x = arg0->x;
    z = arg0->z;
    pos->x += x;
    pos->y += arg0->y;
    pos->z += z;
    pos->rx += 0x50;
    pos->ry += 0x70;
    counter = &arg0->count;
    if ((pos->y <= arg0->parent->link->pos->y) ||
        (++*counter >= 0x97)) {
        func_800058DC((s32)arg0, func_80367788);
    }
}



void func_80367788(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

