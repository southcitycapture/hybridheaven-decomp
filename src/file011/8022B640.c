#include "common.h"


s32 func_8012C6B4(s32, s32);                        /* extern */

s32 func_8022B640(u16 arg0) {
    s32 temp_a1;

    temp_a1 = arg0;
    return func_8012C6B4(temp_a1, temp_a1) & 0xFFFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022B66C.s")


struct func_8022B8C4_Inner {
    u8 pad0[0xC];
    u8 unkC;
};

struct func_8022B8C4_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad00[0x2D4 - 0x34];
    struct func_8022B8C4_Inner *unk2D4;
    u8 pad1[0x2DF - 0x2D8];
    u8 unk2DF;
    u8 pad2[0x2F0 - 0x2E0];
    u8 unk2F0;
};

void func_8022B8C4(struct func_8022B8C4_Struct *arg0, struct func_8022B8C4_Struct *arg1) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    var_v0 = arg0->unk2D4->unkC;
    if (var_v0 == 0) {
        arg0->unk2DF = 1;
        arg1->unk2F0 = 2;
    } else {
        var_v1 = var_v0;
        if (var_v0 & 1) {
            arg1->unk2F0 |= 1;
            var_v1 = arg0->unk2D4->unkC;
        }
        if (var_v1 & 2) {
            arg1->unk2F0 |= 2;
            var_v1 = arg0->unk2D4->unkC;
        }
        if ((var_v1 & 0xC) == 0xC) {
            arg1->unk2F0 |= 0xC;
            var_v1 = arg0->unk2D4->unkC;
        } else if ((var_v1 & 0xC) != 0) {
            if (((u32) (arg0->unk30 << 9) >> 0x1E) == 3) {
                arg1->unk2F0 |= ((var_v1 & 0xC) ^ 0xC);
                var_v1 = arg0->unk2D4->unkC;
            } else {
                arg1->unk2F0 |= (var_v1 & 0xC);
                var_v1 = arg0->unk2D4->unkC;
            }
        }
        var_v0 = var_v1 & 0x30;
        if (var_v0 == 0x30) {
            arg1->unk2F0 |= 0x30;
        } else if (var_v0 != 0) {
            if (((u32) (arg0->unk30 << 9) >> 0x1E) == 3) {
                arg1->unk2F0 |= (var_v0 ^ 0x30);
            } else {
                arg1->unk2F0 |= var_v0;
            }
        }
    }
    var_v0 = 0;
    var_v1_2 = 0;
    do {
        if (arg1->unk2F0 & (1 << var_v1_2)) {
            arg0->unk2DF++;
        }
        var_v0 = (var_v0 + 1) & 0xFF;
        var_v1_2 = var_v0;
    } while (var_v0 < 6);
    arg1->unk2DF = arg0->unk2DF;
}


struct func_8022BA44_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2DA - 0x2D9];
    u8 unk2DA;
    u8 pad3[0x2DF - 0x2DB];
    u8 unk2DF;
    u8 pad4[0x2FA - 0x2E0];
    u8 unk2FA;
};

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC20;

s32 func_8022BA44(s32 arg0) {
    struct func_8022BA44_Struct *sp1C;
    struct func_8022BA44_Struct *var_a0;
    struct func_8022BA44_Struct *var_a1;
    s32 temp_v0;
    s32 unused;
    extern void func_80232E94();

    if (D_801BCC20 == 0) {
        var_a0 = (struct func_8022BA44_Struct *) D_801BC03C;
    } else {
        var_a0 = (struct func_8022BA44_Struct *) D_801BC3D8;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_8022BA44_Struct *) D_801BC3D8;
    } else {
        var_a1 = (struct func_8022BA44_Struct *) D_801BC03C;
    }
    temp_v0 = var_a0->unk2D8;
    if (((temp_v0 == 2) || (temp_v0 == 4) || (temp_v0 == 5) || (temp_v0 == 6) || (temp_v0 == 7)) && (var_a1->unk2FA == 1)) {
        var_a1->unk2FA = 0;
        var_a0->unk2DF = 0;
        sp1C = var_a1;
        func_8022B8C4(var_a0, var_a1);
        if ((var_a0->unk2DA != 0) && (((u32) (sp1C->unk30 * 2) >> 0x1E) == 0)) {
            func_80232E94(arg0);
            return 1;
        }
    }
    return 0;
}


extern void func_80232E94();

s32 func_8022BB28(void) {
    u8 *var_v0;
    u8 temp_v1;

    temp_v1 = D_801BCC20;
    if (temp_v1 == 0) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    temp_v1 = var_v0[0x2D8];
    if (((temp_v1 == 0xC) || (temp_v1 == 0x13)) && (var_v0[0x2FA] != 0)) {
        var_v0[0x2FA] = 0;
        if (var_v0[0x2DA] != 0) {
            var_v0[0x304] = var_v0[0x304] + 1;
            func_80232E94();
        }
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022BBB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022BD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022BECC.s")


extern f64 D_8023F970;
extern f64 D_8023F978;

struct func_8022C010_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x20 - 0x14];
    f32 unk20;
    u8 pad24[0xA0 - 0x24];
    u16 unkA0;
    u8 padA2[4];
    u8 unkA6;
};

void func_8022C010(struct func_8022C010_Struct *arg0) {
    f64 var_fv0;
    f64 var_fv1;
    f64 var_fa0;
    f64 var_fa1;
    f64 sum;
    s32 temp_v0;

    var_fv0 = 0.0;
    var_fv1 = 0.0;
    var_fa0 = 0.0;
    temp_v0 = arg0->unkA6;
    if (temp_v0 & 0x20) {
        var_fa1 = D_8023F970;
        var_fv0 = var_fa1;
    } else {
        var_fa1 = D_8023F978;
        var_fv0 = 0.0;
    }
    if (temp_v0 & 0x10) {
        var_fv1 = var_fa1;
    } else {
        var_fv1 = 0.0;
    }
    sum = (1.0 - var_fv1) + var_fv0;
    if ((s32) arg0->unkA0 > 0) {
        var_fa0 = var_fa1;
    } else {
        var_fa0 = 0.0;
    }
    arg0->unk10 = (f32) ((var_fa0 + sum) * (f64) arg0->unk20);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C0A0.s")


struct func_8022C1B4_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x2D4 - 0x34];
    u8 *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
    u8 pad2[0x2DF - 0x2DB];
    u8 unk2DF;
    u8 pad3[0x2F0 - 0x2E0];
    u8 unk2F0;
    u8 pad4[0x2FA - 0x2F1];
    u8 unk2FA;
};

s32 func_80376300(void *arg0);
void func_8022C0A0(void);

s32 func_8022C1B4(s32 arg0) {
    struct func_8022C1B4_Struct *var_v1;
    struct func_8022C1B4_Struct *var_a1;
    s32 var_v0;
    extern void func_80232E94();
    extern u8 D_801842A0[];

    if (D_801BCC20 == 0) {
        var_v1 = (struct func_8022C1B4_Struct *) D_801BC03C;
    } else {
        var_v1 = (struct func_8022C1B4_Struct *) D_801BC3D8;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_8022C1B4_Struct *) D_801BC3D8;
    } else {
        var_a1 = (struct func_8022C1B4_Struct *) D_801BC03C;
    }
    var_v0 = 0;
    if ((var_v1->unk2D8 == 0xF) && (var_v1->unk2DA != 0) && (var_a1->unk2FA != 0)) {
        if (((u32) (var_v1->unk30 << 0xB) >> 0x1E) == 1) {
            if (func_80376300(var_a1) != 0) {
                var_v1->unk2D9 = 0x51;
            } else {
                var_v1->unk2D9 = 0x50;
            }
        } else {
            if (func_80376300(var_a1) != 0) {
                var_v1->unk2D9 = 0x50;
            } else {
                var_v1->unk2D9 = 0x51;
            }
        }
        var_v1->unk2D4 = D_801842A0 + var_v1->unk2D9 * 0x1C;
        func_8022C0A0();
        var_a1->unk2F0 = var_v1->unk2D4[0xC];
        var_a1->unk2DF = var_v1->unk2DF = 1;
        var_a1->unk2FA = var_v1->unk2DA = 0;
        func_80232E94(arg0);
        return 1;
    }
    return var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C7A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022CABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022CAFC.s")


f32 func_8001EAD0(s16);
extern u8 D_801BBBF0[];
extern f32 D_8023FA28;
extern f32 D_8023FA2C;

s32 func_8022D954(s32 arg0) {
    s32 var_v0;
    s16 var_a0;

    var_v0 = (s32) D_801BBBF0;
    if (arg0 == var_v0 + 0x44C) {
        var_a0 = *(u16 *) (var_v0 + 0x30) << 7;
        return (s16) (s32) (func_8001EAD0(var_a0) * D_8023FA28);
    } else {
        var_a0 = (*(u16 *) (var_v0 + 0x30) << 7) + 0x1000;
        return (s16) (s32) (func_8001EAD0(var_a0) * D_8023FA2C);
    }
}


extern f32 D_8023FA30;
extern f32 D_8023FA34;

void func_8022D9EC(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x44C) {
        arg0[0x2D] = (s32) (func_8001EAD0(*(s16 *) (D_801BBBF0 + 0x30)) * D_8023FA30);
        return;
    }
    arg0[0x2D] = (s32) (func_8001EAD0((s16) (*(u16 *) (D_801BBBF0 + 0x30) + 0x1000)) * D_8023FA34);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022DA7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022DB40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022EE7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F0E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F424.s")


struct func_8022F558_Struct {
    u8 pad0[0x8];
    s16 unk8;
    s16 unkA;
    u8 pad1[0x2D8 - 0xC];
    u8 unk2D8;
    u8 pad2[0x2DB - 0x2D9];
    u8 unk2DB;
    u8 pad3[0x2F8 - 0x2DC];
    u8 unk2F8;
    u8 pad4[0x312 - 0x2F9];
    s16 unk312;
};

void func_8022F558(struct func_8022F558_Struct *arg0) {
    u8 *var_v0;
    s32 temp_v1;

    if (arg0 == (struct func_8022F558_Struct *) (D_801BBBF0 + 0x44C)) {
        var_v0 = D_801BC3D8;
    } else {
        var_v0 = D_801BC03C;
    }
    temp_v1 = var_v0[0x2D8];
    if ((temp_v1 >= 4 && temp_v1 < 8) || temp_v1 == 8 || arg0->unk2DB != 0) {
        arg0->unk312 = 0;
        return;
    }
    if (temp_v1 == 2 || arg0->unk2F8 == 3 || arg0->unk2F8 == 4) {
        arg0->unk312 = (s16) ((s32) ((arg0->unk8 - arg0->unkA) * 0x64) / arg0->unk8);
    }
}


struct func_8022F630_Struct {
    u8 pad[0x2C4];
    s16 values[1];
};

s32 func_8022F630(struct func_8022F630_Struct *arg0, u8 arg1) {
    if (arg1 == 0) {
        return (arg0->values[0] * 6) & 0xFFFF;
    }
    return (arg0->values[arg1] * 10) & 0xFFFF;
}


struct func_8022F680_Struct {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x24 - 0x1C];
    f32 unk24;
    u8 pad2[0x30 - 0x28];
    u8 unk30;
    u8 pad3[0xA0 - 0x31];
    s16 unkA0;
    u8 pad4[0x2AC - 0xA2];
    s16 unk2AC[6];
    s16 unk2B8[6];
};
struct func_8022F680_Ret {
    u8 pad0[0x90];
    u8 unk90;
};
extern struct func_8022F680_Ret *func_80005670();
extern f64 D_8023FAF8;
extern f64 D_8023FB00;
extern u8 D_803896DC[];

void func_8022F680(s32 arg0, struct func_8022F680_Struct *arg1) {
    if ((arg1->unk2B8[0] < 0) && (arg1->unk2AC[0] == 0)) {
        arg1->unk2AC[0] = func_8022F630(arg1, 0);
        arg1->unk30 = (u8) ((arg1->unk30 & 0xFFE1) | 2);
    }
    if ((arg1->unk2B8[1] < 0) && (arg1->unk2AC[1] == 0)) {
        arg1->unk2AC[1] = func_8022F630(arg1, 1);
    }
    if ((arg1->unk2B8[2] < 0) && (arg1->unk2AC[2] == 0)) {
        arg1->unk2AC[2] = func_8022F630(arg1, 2);
        if (arg1->unk24 == 0.0f) {
            arg1->unk24 = arg1->unk18;
            arg1->unk18 = (f32) ((f64) arg1->unk18 * D_8023FAF8);
        }
    }
    if ((arg1->unk2B8[3] < 0) && (arg1->unk2AC[3] == 0)) {
        arg1->unk2AC[3] = func_8022F630(arg1, 3);
        if (arg1->unk24 == 0.0f) {
            arg1->unk24 = arg1->unk18;
            arg1->unk18 = (f32) ((f64) arg1->unk18 * D_8023FB00);
        }
    }
    if ((arg1->unk2B8[4] < 0) && (arg1->unk2AC[4] == 0)) {
        arg1->unkA0 = 0x32;
        arg1->unk2AC[4] = func_8022F630(arg1, 4);
        func_80005670(arg0, D_803896DC)->unk90 = 1;
    }
    if ((arg1->unk2B8[5] < 0) && (arg1->unk2AC[5] == 0)) {
        arg1->unkA0 = 0x32;
        arg1->unk2AC[5] = func_8022F630(arg1, 5);
        func_80005670(arg0, D_803896DC)->unk90 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022FC38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022FFFC.s")


void func_802300F0(u8 *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0[0x396];
    if (temp_v0 != 0) {
        temp_t6 = temp_v0 - 1;
        arg0[0x396] = temp_t6;
        if (!(temp_t6 & 0xFF)) {
            arg0[0x30] = (u8) (arg0[0x30] & 0xFFE1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8023011C.s")


extern u8 D_801842A0[];

struct func_802302D0_Inner {
    u8 pad0[0x1A];
    u8 unk1A;
};

struct func_802302D0_Struct {
    u8 pad0[0x2D4];
    struct func_802302D0_Inner *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
};

void func_802302D0(struct func_802302D0_Struct *arg0, struct func_802302D0_Struct *arg1) {
    u8 flag;

    flag = 1;
    if (arg0->unk2D4 == NULL) {
        arg0->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    if (arg1->unk2D4 == NULL) {
        arg1->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    arg1->unk2DA = flag;
    arg0->unk2DA = flag;
    arg0->unk2D9 = arg1->unk2D4->unk1A;
}


struct func_80230318_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
    u8 unk2DB;
};

#define A ((struct func_80230318_Struct *)arg0)
#define B ((struct func_80230318_Struct *)arg1)
extern f32 D_801BC780;
#define F D_801BC780

void func_80230318(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1) {
    s8 r;

    if (arg0 == NULL) {
        arg0 = (struct func_80231B28_Struct *)D_801BC03C;
    }
    if (arg1 == NULL) {
        arg1 = (struct func_80231B28_Struct *)D_801BC3D8;
    }
    r = func_8022B640(10);
    if (A->unk2D8 == 0xD) {
        if (r < 8 || F < 30.0f) {
            A->unk2D9 = 1;
            A->unk2DB = 1;
            if (r != 0 || F < 30.0f) {
                B->unk2DA = 1;
            } else {
                B->unk2DA = 0;
            }
        } else {
            A->unk2DB = 0;
            B->unk2DA = 1;
        }
    } else if (A->unk2D8 == 0xE) {
        if (r < 5 || F < 30.0f) {
            A->unk2DB = 0;
            B->unk2DA = 1;
        } else {
            A->unk2DB = 1;
            B->unk2DA = 0;
        }
    } else if (A->unk2D8 == 0xF) {
        A->unk2DB = 0;
        B->unk2DA = 1;
    } else if (A->unk2D8 == 0x14) {
        A->unk2DB = 0;
        B->unk2DA = 1;
    }
}


void func_80230484(u8 *arg0) {
    arg0[0x2DB] = 1;
    arg0[0x2D9] = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230DD4.s")


struct func_80231B28_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[0x2DB - 0x2D9];
    u8 unk2DB;
};

extern void func_80230728(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern void func_80230930(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern s32 func_80230B58();

void func_80231B28(void) {
    struct func_80231B28_Struct *var_a0;
    struct func_80231B28_Struct *var_a1;
    s32 temp_v0;

    if (D_801BCC20 == 0) {
        var_a0 = (struct func_80231B28_Struct *) D_801BC3D8;
    } else {
        var_a0 = (struct func_80231B28_Struct *) D_801BC03C;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_80231B28_Struct *) D_801BC03C;
    } else {
        var_a1 = (struct func_80231B28_Struct *) D_801BC3D8;
    }
    temp_v0 = var_a1->unk2D8;
    if ((temp_v0 < 2) || (temp_v0 == 9) || (temp_v0 == 0xA)) {
        if (var_a0->unk2D8 == 0xD) {
            func_802302D0((struct func_802302D0_Struct *) var_a0, (struct func_802302D0_Struct *) var_a1);
        }
    } else if (temp_v0 == 2) {
        temp_v0 = var_a0->unk2D8;
        if (temp_v0 == 0x12) {
            func_80230728(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0x11) {
            func_80230930(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0x10) {
            func_80230B58(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0xD) {
            var_a0->unk2DB = 1;
            return;
        }
        if ((temp_v0 == 0xE) || (temp_v0 == 0xF)) {
            var_a0->unk2DB = 0;
        }
    } else if ((temp_v0 >= 4) && (temp_v0 < 8)) {
        temp_v0 = var_a0->unk2D8;
        if (temp_v0 == 0xE) {
            func_80230930(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0xF) {
            func_80230B58(var_a0, var_a1);
        }
    } else if (temp_v0 == 8) {
        if (var_a0->unk2D8 == 0xF) {
            func_80230B58(var_a0, var_a1);
        }
    } else if ((temp_v0 == 0xC) || (temp_v0 == 0x13)) {
        func_80230318(var_a0, var_a1);
    }
}


void func_80231CE4(s32 arg0) {

}


void func_80231CEC(void) {
    if (D_801BBBF0[0x1030] == 0) {
        if ((s32) D_801BBBF0[0x748] < 0xFF && D_801BBBF0[0x724] != 0xB) {
            D_801BBBF0[0x748] = (u8) (D_801BBBF0[0x748] + 1);
        }
    } else if ((s32) D_801BBBF0[0xAE4] < 0xFF && D_801BBBF0[0xAC0] != 0xB) {
        D_801BBBF0[0xAE4] = (u8) (D_801BBBF0[0xAE4] + 1);
    }
    if ((s32) D_801BBBF0[0x747] < 0xFF) {
        D_801BBBF0[0x747] = (u8) (D_801BBBF0[0x747] + 1);
    }
    if ((s32) D_801BBBF0[0xAE3] < 0xFF) {
        D_801BBBF0[0xAE3] = (u8) (D_801BBBF0[0xAE3] + 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80231D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232008.s")


s32 func_802320DC(s32 arg0) {
    return 1;
}



u8 func_802320E8(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x7E8) {
        if ((*(u8 **)(D_801BBBF0 + 0x448))[0x74] == 3) {
            return (*(u8 **)(arg0 + 0x334))[0x56];
        }
    }
    return 0;
}


struct func_80232128_Struct {
    u8 pad0[0x36];
    u16 unk36;
};

void func_80232128(u8 *arg0) {
    struct func_80232128_Struct *var_v0;
    u16 temp_v1;

    if (arg0 == D_801BBBF0 + 0x44C) {
        var_v0 = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xEC);
    } else {
        var_v0 = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xDC);
    }
    if (arg0[0x2D9] == 0x13) {
        temp_v1 = var_v0->unk36;
        if (temp_v1 == 0xF9 || temp_v1 == 0xF6 || temp_v1 == 0xFA || temp_v1 == 0xFB || temp_v1 == 0xFC || temp_v1 == 0xFD || temp_v1 == 0x11B || temp_v1 == 0x143 || temp_v1 == 0xF4 || temp_v1 == 0xF5 || temp_v1 == 0x148 || temp_v1 == 0x149 || temp_v1 == 0x2E || temp_v1 == 0x31 || temp_v1 == 0x32 || temp_v1 == 0x11D || temp_v1 == 0x11E) {
            arg0[0x2DA] = 0;
            return;
        }
    }
    arg0[0x2DA] = 1;
}


struct func_802321FC_Inner {
    u8 pad0[0xA];
    u8 unkA;
};

struct func_802321FC_Struct {
    u8 pad0[0x2D4];
    struct func_802321FC_Inner *unk2D4;
    u8 unk2D8;
    u8 pad1[0x374 - 0x2D9];
    s8 unk374;
};

void func_802321FC(struct func_802321FC_Struct *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk2D8;
    if ((temp_v0 == 2) || ((temp_v0 >= 4) && (temp_v0 < 9))) {
        temp_v0 = *(s16 *) ((u8 *) arg0 + arg0->unk2D4->unkA * 6 + 0xAA);
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        } else {
            var_v1 = temp_v0;
        }
        arg0->unk374 = (s8) (var_v1 / 50);
        return;
    }
    if (temp_v0 == 0x13) {
        arg0->unk374 = 0;
    }
}


struct func_80232278_Struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x48 - 0x10];
    u16 unk48;
};

extern struct func_80232278_Struct D_8017DC40;

void func_80232278(void) {
    if ((s32) D_8017DC40.unk48 < 8) {
        D_8017DC40.unkE = 1;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x10) {
        D_8017DC40.unkE = 2;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x18) {
        D_8017DC40.unkE = 3;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x20) {
        D_8017DC40.unkE = 4;
        return;
    }
    D_8017DC40.unkE = 5;
}


typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x62 - 0x4];
    u8 unk62;
    u8 unk63;
    u8 unk64;
    u8 unk65;
    u16 unk66;
    u8 pad68[0x74 - 0x68];
    u16 unk74;
    u8 pad76[0x82 - 0x76];
    u16 unk82;
    u16 unk84;
    u8 unk86;
    u8 unk87;
} func_802322E8_Struct;

typedef struct {
    u8 unk0;
    u8 pad1;
    s16 unk2;
    u8 pad4[2];
} func_802322E8_Entry;

typedef struct {
    u8 b[12];
} func_802322E8_Copy;

typedef struct {
    u8 pad0[2];
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} func_802322E8_Flags;

extern void func_80379410(u8 *, s32, void *);
extern struct func_80233288_Struct D_80183CE0[];
extern u8 D_8017DC50[];
extern u8 D_8017DC5C[];
extern u8 D_8017DC68[];
extern u8 D_8017DC74[];
extern u8 D_8017DC96[];
extern func_802322E8_Flags D_8017DD7C;

#define DC40 ((func_802322E8_Struct *)&D_8017DC40)
#define SRC ((func_802322E8_Entry *)(D_801BBBF0 + 0x4F4))
#define DST ((func_802322E8_Entry *)D_80183CE0)
#define COPY(x) (*(func_802322E8_Copy *)(x))

void func_802322E8(void) {
    u8 i;
    u32 v;

    DC40->unk2 = *(s16 *)(D_801BBBF0 + 0x44E);
    DC40->unk62 = D_801BBBF0[0x4EE];
    DC40->unk63 = D_801BBBF0[0x4EF];
    DC40->unk64 = D_801BBBF0[0x4F0];
    DC40->unk65 = D_801BBBF0[0x4F1];
    for (i = 0; i < 0x56; i++) {
        DST[i].unk2 = SRC[i].unk2;
        DST[i].unk0 = SRC[i].unk0;
        if (DST[i].unk0 == 2) {
            DST[i].unk0 = 1;
            DST[i].unk2 = 0;
        }
    }
    COPY(D_8017DC96) = COPY(D_801BC03C + 0x2C4);
    COPY(D_8017DC50) = COPY(D_801BC03C + 0x82);
    COPY(D_8017DC5C) = COPY(D_801BC03C + 0x8E);
    COPY(D_8017DC68) = COPY(D_801BC03C + 0x6A);
    COPY(D_8017DC74) = COPY(D_801BC03C + 0x76);
    DC40->unk82 += D_801BBBF0[0x749];
    DC40->unk66 += D_801BBBF0[0x748];
    if (DC40->unk66 == 0) {
        DC40->unk86 = 0;
    } else {
        DC40->unk86 = (f32)(u32)DC40->unk82 / (f32)(u32)DC40->unk66 * 100.0f;
    }
    DC40->unk84 += D_801BBBF0[0xAE5];
    DC40->unk74 += D_801BBBF0[0xAE4];
    if (DC40->unk74 == 0) {
        DC40->unk87 = 0;
    } else {
        DC40->unk87 = (f32)(u32)DC40->unk84 / (f32)(u32)DC40->unk74 * 100.0f;
    }
    func_80379410(D_801BC03C, 0, &D_8017DC40);
    if (D_801BBBF0[0xB7D] != 0x26) {
        if (D_801BBBF0[0xB7D] < 8) {
            D_8017DD7C.unk2 |= 1 << D_801BBBF0[0xB7D];
        } else if (D_801BBBF0[0xB7D] < 0x10) {
            D_8017DD7C.unk3 |= 1 << (D_801BBBF0[0xB7D] + 0x18);
        } else if (D_801BBBF0[0xB7D] < 0x18) {
            D_8017DD7C.unk4 |= 1 << (D_801BBBF0[0xB7D] + 0x10);
        } else if (D_801BBBF0[0xB7D] < 0x20) {
            D_8017DD7C.unk5 |= 1 << (D_801BBBF0[0xB7D] + 8);
        } else if (D_801BBBF0[0xB7D] < 0x28) {
            D_8017DD7C.unk6 |= 1 << D_801BBBF0[0xB7D];
        } else if (D_801BBBF0[0xB7D] < 0x30) {
            D_8017DD7C.unk7 |= 1 << (D_801BBBF0[0xB7D] + 0x18);
        }
        if (D_801BBBF0[0xB7D] == 0x28) {
            D_8017DD7C.unk7 |= 3;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_802329F8.s")


extern u8 D_801BC348;
extern u8 D_801BC338;
extern u16 D_801BC34A;
extern u8 D_801BC314;

u8 func_80232A80(void) {
    s16 var_v1_2;
    u8 temp_a1;
    s16 var_v0_2;
    u16 temp_a0;
    u8 *temp_v0;

    var_v1_2 = 0;
    if (D_801BBBF0[0x1D] == 0) {
        var_v0_2 = ((D_801BC348 * 0x1E) / D_801BC338 - D_801BC34A / 10) + 0x46;
    } else if (D_801BBBF0[0x1D] == 1) {
        var_v0_2 = (D_801BC348 * 4 - D_801BC338 * 2 - D_801BC34A / 10) + 0x5F;
    } else if (D_801BBBF0[0x1D] == 2) {
        var_v0_2 = (D_801BC348 * 2 - D_801BC338 * 2 - D_801BC34A / 5) + 0x5F;
    }
    for (var_v1_2 = 0; var_v1_2 < 0x22; var_v1_2++) {
        if (D_801BC03C[var_v1_2 * 6 + 0xAC] >= 3) {
            var_v0_2 -= 0xA;
        }
    }
    temp_a1 = D_801BC314;
    if ((temp_a1 >= 2) && (temp_a1 < 9)) {
        var_v0_2 += 0x1E;
    }
    if ((temp_a1 == 0xC) || (*(u16 *) &D_801BBBF0[0x886] == 0xFFFF)) {
        var_v0_2 -= 0x1E;
    }
    if (var_v0_2 < 0) {
        var_v0_2 = 0;
    }
    if (var_v0_2 >= 0x5F) {
        var_v1_2 = 0;
    } else if (var_v0_2 >= 0x55) {
        var_v1_2 = 1;
    } else if (var_v0_2 >= 0x46) {
        var_v1_2 = 2;
    } else if (var_v0_2 >= 0x32) {
        var_v1_2 = 3;
    } else if (var_v0_2 >= 0x1E) {
        var_v1_2 = 4;
    } else if (var_v0_2 >= 0xF) {
        var_v1_2 = 5;
    } else {
        var_v1_2 = 6;
    }
    temp_v0 = (u8 *) &D_8017DC40 + var_v1_2 * 2;
    temp_a0 = *(u16 *) (temp_v0 + 0x8E);
    if ((s32) temp_a0 < 0xFFFF) {
        *(u16 *) (temp_v0 + 0x8E) = temp_a0 + 1;
    }
    return var_v1_2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232D08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232FEC.s")


typedef struct func_80233288_Struct {
    u8 pad[4];
    u8 count;
    u8 pad2;
} func_80233288_Struct;

extern s32 func_80378CF0(s32);

void func_80233288(u8 arg0) {
    func_80233288_Struct *temp_v0;
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = arg0;
    temp_v0 = &D_80183CE0[temp_a0];
    temp_v1 = temp_v0->count;
    if (temp_v1 < 0xFF) {
        temp_v0->count = temp_v1 + 1;
        func_80378CF0(temp_a0);
    }
}


void func_802332D8(void) {
    struct func_80232128_Struct *e;
    u32 v;

    e = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xEC);
    v = *(u16 *)(D_801BBBF0 + 0x2C);
    if (v == 0xA || v == 0xB) {
        func_80020718(0x5E);
        return;
    }
    v = e->unk36;
    if (v == 0xF9 || v == 0x149 || v == 0x32 || v == 0xFA || v == 0xFB || v == 0xFC || v == 0xFD || v == 0x2E || v == 0x31) {
        func_80020718(0x5F);
        return;
    }
    if (v == 0x148) {
        func_80020718(0x60);
        return;
    }
    if (v == 0x11D) {
        func_80020718(0x61);
        return;
    }
    if (v == 0x11E) {
        func_80020718(0x62);
        return;
    }
    if (v == 0x11B) {
        func_80020718(0x6C);
        return;
    }
    func_80020718(0x5E);
}


s32 func_802333FC(s16 *arg0, u8 arg1) {
    if ((arg0 + (0x2B8 / 2))[arg1] < 0) {
        return 0;
    }
    return 1;
}

