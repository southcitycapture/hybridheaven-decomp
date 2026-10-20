#include "common.h"


extern s16 D_801BBD7E;

void func_801C3B10(s32 arg0) {
    s32 *p;
    p = &arg0;
    D_801BBD7E = *p;
}



u16 func_801C3B20(void) {
    return D_801BBD7E;
}


void func_801C3B2C(u16 arg0) {
    (&D_801BBD7E)[1] = arg0;
}


u16 func_801C3B3C(void) {
    return *(u16 *)((u8 *)&D_801BBD7E + 2);
}


struct func_801C3B48_Struct {
    u8 pad[0xE];
    s16 unkE;
};
extern struct func_801C3B48_Struct D_801BBD86;

s32 func_801C3B48(s32 arg0) {
    s32 *p = &arg0;
    D_801BBD86.unkE = *p;
    return 1;
}

extern struct func_801C3D90_StructA D_801BBBF0;

u16 func_801C3B5C(void) {
    u16 *p;
    u16 temp_v0;

    p = (u16 *)((u8 *)&D_801BBBF0 + 0x1A4);
    temp_v0 = *p;
    *p = 0;
    return temp_v0;
}


void func_801C3B70(void) {
    D_801BBD86.unkE = 0;
}


extern s32 D_801BBD98;

void func_801C3B7C(s32 arg0) {
    D_801BBD98 = arg0;
}



s32 func_801C3B88(void) {
    return D_801BBD98;
}


extern s32 D_801BBD9C;

void func_801C3B94(s32 arg0) {
    D_801BBD9C = arg0;
}



s32 func_801C3BA0(void) {
    return D_801BBD9C;
}


struct func_801C3BAC_Struct {
    u8 pad[2];
    s16 unk2;
};

extern struct func_801C3BAC_Struct D_801BBDA0;

void func_801C3BAC(u16 arg0) {
    D_801BBDA0.unk2 = arg0;
}


extern u16 D_801BBDA2;

u16 func_801C3BBC(void) {
    return D_801BBDA2;
}


void func_801C3BC8(void) {
    u32 base;

    base = (u32) &D_801BBBF0;
    if (*(s32 *) (base + 0x1E4) == 0) {
        *(s32 *) (base + 0x1E4) = *(s32 *) (*(u32 *) (base + 0xDC) + 0x54);
    }
}


extern void func_801C4A5C(void *, s32);

void func_801C3BF0(void) {
    s32 val;

    val = *(s32 *) ((u8 *) &D_801BBBF0 + 0x1E4);
    if (val != 0) {
        *(s32 *) (*(u8 **) ((u8 *) &D_801BBBF0 + 0xDC) + 0x54) = val;
        func_801C4A5C(*(void **) ((u8 *) &D_801BBBF0 + 0xDC), 0);
        *(s32 *) ((u8 *) &D_801BBBF0 + 0x1E4) = 0;
    }
}


void func_801C3C3C(s32 arg0) {
    if (*(s32 *)((u8 *)&D_801BBBF0 + 0x1E4) != 0) {
        *(s32 *)((u8 *)*(void **)((u8 *)&D_801BBBF0 + 0xDC) + 0x54) = arg0;
    }
}


extern f32 func_8002FC20(f32);

struct func_801C3C60_Vec {
    u8 pad[0x438];
    f32 unk438;
    f32 unk43C;
    f32 unk440;
};

struct func_801C3C60_Node {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801C3C60_Mid {
    u8 pad[0x2C];
    struct func_801C3C60_Node *unk2C;
};

struct func_801C3C60_Actor {
    u8 pad[0x24];
    struct func_801C3C60_Mid *unk24;
};

s32 func_801C3C60(struct func_801C3C60_Actor *arg0, f32 arg1) {
    f32 temp_fv1;
    f32 temp_fa1;
    f32 temp_ft4;

    temp_fv1 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk438;
    temp_fa1 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk43C;
    temp_ft4 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk440;
    if (func_8002FC20((temp_fv1 * temp_fv1) + (temp_fa1 * temp_fa1) + (temp_ft4 * temp_ft4)) <= arg1) {
        arg0->unk24->unk2C->unk4 = arg0->unk24->unk2C->unk4 + temp_fv1;
        arg0->unk24->unk2C->unk8 = arg0->unk24->unk2C->unk8 + temp_fa1;
        arg0->unk24->unk2C->unkC = arg0->unk24->unk2C->unkC + temp_ft4;
        return 1;
    }
    return 0;
}

struct func_801C4848_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};
struct func_801C4848_Obj {
    u8 pad0[0x2C];
    struct func_801C4848_Vec *vec;
};
extern struct func_801C4848_Obj *D_801BBCD0;

s32 func_801C3D20(f32 arg0, f32 arg1, f32 arg2) {
    struct func_801C4848_Vec *temp_v0;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = D_801BBCD0->vec;
    temp_fv0 = temp_v0->x - arg0;
    temp_fv1 = temp_v0->y - arg1;
    if (func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)) <= arg2) {
        return 1;
    }
    return 0;
}


struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};

struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};


s32 func_801C3D90(void) {
    if ((D_801BBBF0.unkE0 != 0) && (D_801BBBF0.unkDC->unk63 != 0)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C3DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C419C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C42DC.s")


s32 func_801C4700(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg0 >= arg1) {
            arg0 = arg1;
        }
        goto block_ret;
    }
    arg0 = arg0 - arg2;
    if (arg1 < arg0) {
        goto block_ret;
    }
    arg0 = arg1;
block_ret:
    return arg0;
}


f32 func_801C4750(f32 arg0, f32 arg1, f32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg2 < 0.0f) {
        arg2 = -arg2;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg1 <= arg0) {
            arg0 = arg1;
        }
    } else {
        arg0 = arg0 - arg2;
        if (arg0 <= arg1) {
            arg0 = arg1;
        }
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C47E0.s")




struct func_801C4848_Arg {
    u8 pad0[0x24];
    struct func_801C4848_Obj *obj;
};

void func_8001EF38(f32, f32);

void func_801C4848(struct func_801C4848_Arg *arg0) {
    struct func_801C4848_Vec *a;
    struct func_801C4848_Vec *b;

    a = D_801BBCD0->vec;
    b = arg0->obj->vec;
    func_8001EF38(a->x - b->x, a->y - b->y);
}


typedef struct func_801C4890_StructC {
    u8 pad[0x12];
    s16 unk12;
} func_801C4890_StructC;

typedef struct func_801C4890_StructB {
    u8 pad[0x2C];
    func_801C4890_StructC *unk2C;
} func_801C4890_StructB;

typedef struct func_801C4890_StructA {
    u8 pad[0x24];
    func_801C4890_StructB *unk24;
} func_801C4890_StructA;

s32 func_801C4890(func_801C4890_StructA *arg0, s16 arg1, s16 arg2) {
    func_801C4890_StructC *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 temp_a0;

    temp_v1 = arg0->unk24->unk2C;
    temp_v0 = temp_v1->unk12;
    temp_a3 = temp_v0 - arg1;
    if (temp_a3 < 0) {
        temp_a0 = -temp_a3;
    } else {
        temp_a0 = temp_a3;
    }
    if (arg2 >= temp_a0) {
        temp_v1->unk12 = arg1;
        return 1;
    }
    if ((arg1 - temp_v0) >= 0x1000) {
        temp_v1->unk12 = (s16) (temp_v0 - arg2);
    } else {
        temp_v1->unk12 = (s16) (temp_v0 + arg2);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4A5C.s")


extern s32 func_80108480(s32, s32, s32, s32, f32, f32);

s32 func_801C5A1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 *fp;
    s32 *ap;
    fp = (f32 *) &arg2;
    ap = &arg3;
    if (func_80108480(arg0, arg1, arg2, arg3, fp[2], fp[3]) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C5A5C.s")


struct func_801C787C_StructV { f32 x, y, z; };
struct func_801C787C_StructG {
    u8 pad[0xEC4];
    s32 unkEC4;
    u8 padEC8[0xED8 - 0xEC8];
    struct func_801C787C_StructV v[2];
    u8 padEF0[0xEF6 - 0xEF0];
    u8 unkEF6;
};
struct func_801C787C_StructA {
    u8 pad[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x44 - 0x34];
    f32 unk44;
    u8 pad48[0x58 - 0x48];
    s32 unk58;
};
extern u16 func_801C5A5C(void *);
struct func_801C787C_StructP { s32 a, b; };
extern struct func_801C787C_StructP D_801E0B78;
extern f64 D_801E2ED8;
#define G ((struct func_801C787C_StructG *)&D_801BBBF0)

void func_801C787C(struct func_801C787C_StructA *arg0) {
    struct func_801C787C_StructV sp60[2];
    f32 sp58[2];
    u8 i;
    u16 sp54;

    *(struct func_801C787C_StructP *)sp58 = D_801E0B78;
    if (arg0->unk2C & 0x100) {
        if (arg0->unk30 & 4) {
            arg0->unk30 |= 2;
        } else {
            arg0->unk30 &= ~2;
        }
        arg0->unk30 &= ~4;
        arg0->unk30 &= ~8;
        sp54 = func_801C5A5C(arg0);
        arg0->unk58 = G->unkEC4;
        if (sp54 != 0) {
            i = 0;
            do {
                sp60[i].x = G->v[i].x;
                sp60[i].y = G->v[i].y;
                sp60[i].z = G->v[i].z;
                sp58[i] = G->v[i].x * G->v[i].x + G->v[i].y * G->v[i].y + G->v[i].z * G->v[i].z;
                sp58[i] = func_8002FC20(sp58[i]);
                if ((f64)sp58[i] != 0.0) {
                    sp60[i].y = sp60[i].y / sp58[i];
                } else {
                    sp60[i].y = 5.0f;
                }
                i++;
            } while (i < 2);
            if ((sp54 & 1) && G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                arg0->unk30 |= 4;
                arg0->unk44 = 0.0f;
            }
            if ((sp54 & 0x20) && G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                arg0->unk44 = 0.0f;
            }
            if ((sp54 & 0xFDE) && (f64)sp60[1].y != 5.0) {
                if ((f64)(sp60[1].y < 0.0f ? -sp60[1].y : sp60[1].y) < D_801E2ED8) {
                    arg0->unk30 |= 8;
                    return;
                }
                if (G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                    arg0->unk44 = 0.0f;
                    arg0->unk30 |= 4;
                }
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C7B18.s")


s32 func_8010843C(f32, f32, s32, s32, f32, f32);

void func_801C7FEC(f32 arg0, f32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    s32 *p2;

    p2 = &arg2;
    if (func_8010843C(arg0, arg1, arg2, *(s32 *)arg3, *(f32 *)arg4, *(f32 *)arg5) == 1) {
        *(f32 *)arg3 = *(f32 *)((u8 *)&D_801BBBF0 + 0x374);
        *(f32 *)arg4 = *(f32 *)((u8 *)&D_801BBBF0 + 0x378);
        *(f32 *)arg5 = *(f32 *)((u8 *)&D_801BBBF0 + 0x37C);
    }
}


typedef struct func_801C8060_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801C8060_Struct;

typedef struct func_801C8060_Mid {
    u8 pad0[0x2C];
    func_801C8060_Struct *unk2C;
} func_801C8060_Mid;

typedef struct func_801C8060_Outer {
    u8 pad0[0x24];
    func_801C8060_Mid *unk24;
} func_801C8060_Outer;


void func_801C8060(func_801C8060_Outer *arg0) {
    func_801C8060_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 - 20.0f;
    temp_v0 = arg0->unk24->unk2C;
    func_801C7FEC(temp_v0->unk4, temp_v0->unk8 + 40.0f, temp_v0->unkC, &temp_v0->unk4, &temp_v0->unk8, &temp_v0->unkC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C80CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C83C0.s")


struct func_801C84FC_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xEF0 - 6];
    u16 unkEF0;
    u8 padEF2[0xEFC - 0xEF2];
    s32 unkEFC;
};
struct func_801C84FC_StructActor {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xE];
    u8 unk3E;
    u8 unk3F;
    u8 pad40[0xC];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 pad50[4];
    s32 unk54;
};
extern u8 D_801E0BD0[];
extern void *func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_8001F74C(s32);
extern s32 func_8012FF4C(void);
extern void func_803771E8();
struct func_801C8608_Outer;
extern void func_801C8608(struct func_801C8608_Outer *, s32);

void func_801C84FC(struct func_801C84FC_StructActor *arg0, s32 arg1) {
    if ((((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unk4 == 0x4D) ||
        (((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unk4 == 0x50) ||
        (((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unk4 == 0x51)) {
        func_80005670(arg0, D_801E0BD0);
    }
    arg0->unk3E = 5;
    arg0->unk3F = 0;
    arg0->unk2C |= 0x3E0;
    arg0->unk4C = 3;
    arg0->unk4D = 0x12;
    arg0->unk4E = 3;
    arg0->unk4F = 1;
    ((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unkEFC = 0xE7F;
    if (((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unkEF0 & 0x100) {
        arg0->unk54 = 0xF181;
    } else {
        arg0->unk54 = ((struct func_801C84FC_StructGlobal *)&D_801BBBF0)->unkEFC;
    }
    func_801C4A5C(arg0, 0);
    func_8001F74C((s32)arg0);
    if (func_8012FF4C() == 0x18) {
        func_800058DC(arg0, (void *)func_803771E8);
        return;
    }
    func_800058DC(arg0, (void *)func_801C8608);
}


struct func_801C8608_Inner {
    u8 pad[0x18];
    u16 unk18;
};

struct func_801C8608_Outer {
    u8 pad[0x5C];
    struct func_801C8608_Inner *unk5C;
};

extern u16 D_801BCAE0;
extern u8 D_8013ADD4[];
extern u8 D_801C1970[];
extern u8 D_801E5010[];
extern u8 D_801EFBEC[];
extern u8 D_8021D8D0[];

void func_801C8608(struct func_801C8608_Outer *arg0, s32 arg1) {
    struct func_801C8608_Inner *temp_v1;
    s32 temp_v0;

    temp_v1 = arg0->unk5C;
    temp_v0 = temp_v1->unk18 & 0x3000;
    if (temp_v0 == 0) {
        goto case0;
    }
    if (temp_v0 == 0x1000) {
        goto case1000;
    }
    if (temp_v0 == 0x2000) {
        return;
    }
    if (temp_v0 != 0x3000) {
        goto deflt;
    }
    goto case3000;
case0:
    if (D_801BCAE0 & 0x40) {
        func_800058DC(arg0, D_801EFBEC);
        return;
    }
    func_800058DC(arg0, D_801E5010);
    return;
case1000:
    func_800058DC(arg0, D_8021D8D0);
    return;
case3000:
    func_800058DC(arg0, D_801C1970);
    return;
deflt:
    func_800058DC(arg0, D_8013ADD4);
}


typedef struct func_801C86C4_StructV { s32 a, b, c; } func_801C86C4_StructV;
typedef struct func_801C86C4_StructN { u8 pad[0x1C]; func_801C86C4_StructV v; } func_801C86C4_StructN;
extern s32 func_80133A24(s32);
extern s32 func_8013D4A0(s32, s32);
extern void func_801BF1A0(s32);
extern func_801C86C4_StructV D_801E0BF4;
extern func_801C86C4_StructV D_801E0C00;
extern func_801C86C4_StructV D_801E0C0C;
extern func_801C86C4_StructV D_801E0C18;
extern s16 D_80216BFC;

typedef struct func_801C86C4_StructD {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x3A6 - 6];
    u8 unk3A6;
    u8 pad3A7[0xEF0 - 0x3A7];
    u16 unkEF0;
    u16 unkEF2;
} func_801C86C4_StructD;
#define DD ((func_801C86C4_StructD *)&D_801BBBF0)
#define U4 (DD->unk4)
#define EF0 (DD->unkEF0)
#define EF2 (DD->unkEF2)
#define B3A6 (DD->unk3A6)

typedef struct func_801C86C4_StructO { u8 pad[0x5C]; func_801C86C4_StructN *unk5C; } func_801C86C4_StructO;

void func_801C86C4(func_801C86C4_StructO *arg0, s32 arg1) {
    func_801C86C4_StructN *sp1C;
    u32 v;

    sp1C = arg0->unk5C;
    v = U4;
    if (v == 0x12) {
        EF2 |= 0x200;
    }
    if (v == 0) {
        if (func_8013D4A0(0x27, 0) == 0) goto b10;
        v = U4;
    }
    if (v == 0xA) {
        if (func_80133A24(0x46) == 0) goto b10;
        v = U4;
    }
    if (v == 0x32) {
        if (func_80133A24(0x148) == 0) {
b10:
            func_801BF1A0(0);
            sp1C->v = D_801E0C18;
            EF2 = 0x80;
            EF0 = 0x40;
            return;
        }
    }
    if (EF2 & 0x100) {
        if (U4 != 0x11 || B3A6 != 0x13) {
            func_801BF1A0(5);
        } else {
            func_801BF1A0(0);
        }
        sp1C->v = D_801E0C00;
        EF2 = 0;
        EF0 = 0x100;
    } else if (EF2 & 0x200) {
        sp1C->v = D_801E0C0C;
        D_80216BFC = 0;
        EF2 = 0;
        EF0 |= 0x100;
    } else {
        func_801BF1A0(0);
        sp1C->v = D_801E0BF4;
        EF0 = 0x80;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C88BC.s")


typedef struct func_801C8914_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C8914_Struct;

typedef struct func_801C8914_Node {
    u8 pad[0x54];
    s32 unk54;
} func_801C8914_Node;

typedef struct func_801C8914_Outer {
    u8 pad[0x5C];
    s32 *unk5C;
} func_801C8914_Outer;

extern void func_80006214(void *);
extern void func_8013A28C(void *, func_801C8914_Struct);
extern u8 D_8008DA88[];
extern func_801C8914_Outer *D_801BBCCC;
extern u16 D_801E4040;
extern func_801C8914_Struct D_801E4048;
extern s32 D_801E4054;
extern s32 D_801E4058;

void func_801C8914(void) {
    s32 *sp1C;
    func_801C8914_Struct *temp_v0;
    u8 *temp_v1;

    sp1C = D_801BBCCC->unk5C;
    func_80006214(D_801BBCCC);
    temp_v1 = (u8 *) &D_801BBBF0;
    *(s32 *)(*(u8 **)(temp_v1 + 0xDC) + 0x2C) = D_801E4058;
    *(u16 *)(temp_v1 + 0xEF0) = D_801E4040;
    temp_v0 = (func_801C8914_Struct *)(sp1C + 7);
    *temp_v0 = D_801E4048;
    func_8013A28C(D_8008DA88, *temp_v0);
    ((func_801C8914_Node *) D_801BBBF0.unkDC)->unk54 = D_801E4054;
    func_801C4A5C(D_801BBBF0.unkDC, 0);
}


void func_801C89D8(void) {
    func_801C86C4_StructN *sp1C;

    sp1C = ((func_801C86C4_StructO *)*(void **)((u8 *)&D_801BBBF0 + 0xDC))->unk5C;
    func_80006214(*(void **)((u8 *)&D_801BBBF0 + 0xDC));
    *(s32 *)(*(u8 **)((u8 *)&D_801BBBF0 + 0xDC) + 0x2C) = 0x3E0;
    *(u16 *)((u8 *)&D_801BBBF0 + 0xEF0) = 0x80;
    sp1C->v = D_801E0BF4;
    func_8013A28C(&D_8008DA88, *(func_801C8914_Struct *)&sp1C->v);
    *(s32 *)(*(u8 **)((u8 *)&D_801BBBF0 + 0xDC) + 0x54) = *(s32 *)((u8 *)&D_801BBBF0 + 0xEFC);
    func_801C4A5C(*(void **)((u8 *)&D_801BBBF0 + 0xDC), 0);
}


struct func_801C8A94_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
struct func_801C8A94_Node {
    u8 pad[0x30];
    struct func_801C8A94_Obj *unk30;
};
struct func_801C8BC0_Node;
void func_801C8BC0(s32 arg0, struct func_801C8BC0_Node **arg1);
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, u16, u16);
extern u16 D_801E0BE4[];
extern u16 D_801E0C24[];
extern f32 D_801E3020;

void func_801C8A94(void *arg0, struct func_801C8A94_Node **arg1) {
    extern void func_800058DC(void *, void *);
    s8 i;
    u16 *p;
    f32 k;

    for (i = 0; i < 0x10; i++) {
        func_80005E44(arg0, D_801E0BE4);
    }
    func_80006214(arg0);
    for (i = 0; i < 0x10; i++) {
        p = (u16 *)((u8 *)D_801E0C24 + i * 6);
        func_8012C89C(arg0, i, p[0], p[1]);
    }
    k = D_801E3020;
    for (i = 0; i < 0x10; i++) {
        arg1[i]->unk30->unk18 = k;
        arg1[i]->unk30->unk1C = k;
        arg1[i]->unk30->unk20 = k;
        arg1[i]->unk30->unk12 = 0;
    }
    func_800058DC(arg0, func_801C8BC0);
}


struct func_801C8BC0_Obj {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801C8BC0_Node {
    u8 pad[0x30];
    struct func_801C8BC0_Obj *unk30;
};

void func_801C8BC0(s32 arg0, struct func_801C8BC0_Node **arg1)
{
  int new_var;
  s32 temp_v1;
  s8 var_v0;
  struct func_801C8BC0_Node **temp_a0;
  u8 *temp_a2;
 var_v0 = 0; do {
    temp_v1 = var_v0 * 4;
 if (0) { }
    temp_a0 = (struct func_801C8BC0_Node **) (((0, (u8 *) arg1)) + temp_v1);
    temp_a2 = ((u8 *) (&D_801BBBF0)) + temp_v1;
    (*((struct func_801C8BC0_Node **) (((0, (u8 *) arg1)) + temp_v1)))->unk30->unk4 = *((f32 *) (temp_a2 + 0xE00));
    var_v0 += 1;
    (*temp_a0)->unk30->unk8 = *((f32 *) (temp_a2 + 0xE40));
    (*((struct func_801C8BC0_Node **) (((0, (u8 *) arg1)) + temp_v1)))->unk30->unkC = *((f32 *) (temp_a2 + (new_var = 0xE80)));
  }
  while (var_v0 < 0x10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8C28.s")


extern void func_801E0294(void);
extern void func_801C8E84();

void func_801C8E48(s32 arg0, s32 arg1) {
    func_801E0294();
    func_8001F74C(arg0);
    func_800058DC(arg0, (void *) func_801C8E84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C8E84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CB71C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CB864.s")


extern u8 D_801E0CA0[];

void func_801CBC70(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0CA0[4] = arg0;
    D_801E0CA0[0] = arg0;
    D_801E0CA0[5] = arg1;
    D_801E0CA0[1] = arg1;
    D_801E0CA0[6] = arg2;
    D_801E0CA0[2] = arg2;
}


void func_801CBCA0(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0CA0[0xC] = arg0;
    D_801E0CA0[0x8] = arg0;
    D_801E0CA0[0xD] = arg1;
    D_801E0CA0[0x9] = arg1;
    D_801E0CA0[0xE] = arg2;
    D_801E0CA0[0xA] = arg2;
}



void func_801CBCD0(s8 arg0, s32 arg1, s8 arg2) {
    D_801E0CA0[0x10] = arg0;
    D_801E0CA0[0x11] = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CBD00.s")


void func_801CBD00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

void func_801CBD70(void) {
    func_801CBD00(0x80, 0x80, 0x80, 0, 0xFF, 0xFF, 0, -0x7F, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CBDBC.s")


struct func_801CBE04_Inner {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE04_Outer {
    u8 pad[0x5C];
    struct func_801CBE04_Inner *unk5C;
};

struct func_801CBE04_Sub {
    u8 pad[0x34];
    void *unk34;
};

struct func_801CBE04_Node {
    u8 pad[0x2C];
    struct func_801CBE04_Sub *unk2C;
};

extern void func_80116E80(s32);
extern void func_801CBDBC(void *, void **, s32);
extern void func_801479A8(void *);
extern u8 D_8017B768[];
extern u8 D_801E0CB8[];

void func_801CBE04(struct func_801CBE04_Outer *arg0, void **arg1) {
    struct func_801CBE04_Inner *sp1C;

    sp1C = arg0->unk5C;
    func_80116E80(0x40);
    func_801CBDBC(arg0, arg1, 0x40);
    func_801479A8(arg0);
    func_801CBD70();
    ((struct func_801CBE04_Node *)*arg1)->unk2C->unk34 = D_801E0CB8;
    ((struct func_801CBE04_Node *)arg1[sp1C->unkC - 1])->unk2C->unk34 = D_8017B768;
}


extern void func_801170DC(s32);

struct func_801CBE90_Sub {
    u8 pad[0x34];
    s32 unk34;
};

struct func_801CBE90_Node {
    u8 pad[0x2C];
    struct func_801CBE90_Sub *unk2C;
};

struct func_801CBE90_Mid {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE90_Top {
    u8 pad[0x24];
    struct func_801CBE90_Node *unk24;
    u8 pad2[0x34];
    struct func_801CBE90_Mid *unk5C;
};

void func_801CBE90(struct func_801CBE90_Top *arg0, struct func_801CBE90_Node **arg1) {
    struct func_801CBE90_Mid *sp1C;

    sp1C = arg0->unk5C;
    func_801CBDBC(arg0, arg1, 0x1000);
    func_801170DC(0x40);
    arg0->unk24->unk2C->unk34 = 0;
    arg1[sp1C->unkC - 1]->unk2C->unk34 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CBEF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC260.s")


typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;

extern void func_80005700(s32);
extern s32 func_80126944(void);
extern void func_80126E88(s32);
extern func_801CC660_Struct *D_801E4080;

void func_801CC660(s32 arg0, s32 arg1) {
    if ((s32) D_801E4080->unk4C >= (s32) (D_801E4080->unk4E + 0x8002)) {
        if (func_80126944() != 1) {
            func_80126E88(0x1AA);
            func_80126E88(0x1AB);
            func_80126E88(0x1AC);
            func_80126E88(0x1AD);
            func_80126E88(0x1AF);
        }
        func_80005700(arg0);
        D_801E4080 = NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC6F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CC830.s")


struct func_801CC9B0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801E0CE8[];
extern void func_801CCA44();

void func_801CC9B0(struct func_801CC9B0_Struct *arg0, void **arg1) {
    u8 pad[4];
    u8 sp1B;
    u8 *var_v0;

    if ((void *)arg0 == (void *)D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    sp1B = var_v0[0x2D9];
    D_801E4080 = func_80005670(arg0, D_801E0CE8);
    ((u8 *)D_801E4080)[0x30] = sp1B;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_801CBE04((void *)arg0, arg1);
    func_800058DC(arg0, func_801CCA44);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CCA44.s")


struct func_801CCD58_Inner {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

struct func_801CCD58_Outer {
    u8 pad0[0x5C];
    struct func_801CCD58_Inner *unk5C;
};

struct func_801CCD58_Global {
    u8 pad0[0x4C];
    u16 unk4C;
};

extern void func_801DB6B8(void *, s32, s32);
extern void func_801CCDE4();
extern u8 D_801BCC25;
extern u8 D_801E4070[];

void func_801CCD58(struct func_801CCD58_Outer *arg0, s32 arg1) {
    struct func_801CCD58_Inner *temp_v0;

    temp_v0 = arg0->unk5C;
    if (D_801BCC25 == 1) {
        func_801DB6B8(arg0, arg1, 0);
        if (temp_v0->unk7C == D_801E4070 && temp_v0->unk80 == 0) {
            D_801E4080->unk4C = D_801E4080->unk4C | 0x8000;
            D_801BCC25 = 0;
            func_800058DC(arg0, func_801CCDE4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CCDE4.s")


extern u8 D_801E0CFC[];

void func_801CCF88(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    void *temp_v0;

    temp_v0 = func_80005670(arg0, D_801E0CFC);
    if (temp_v0 != NULL) {
        *(f32 *)((u8 *)temp_v0 + 0x6C) = arg1;
        *(f32 *)((u8 *)temp_v0 + 0x70) = arg2;
        *(f32 *)((u8 *)temp_v0 + 0x74) = arg3;
        *(f32 *)((u8 *)temp_v0 + 0x7C) = arg4;
        *(f32 *)((u8 *)temp_v0 + 0x80) = arg5;
        *(f32 *)((u8 *)temp_v0 + 0x84) = arg6;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CCFEC.s")


struct func_801CD1CC_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern u8 func_801CD208[];

void func_801CD1CC(struct func_801CD1CC_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) arg0->unk4E) {
        func_800058DC(arg0, func_801CD208);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CD208.s")


struct func_801CD228_Node {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801CD228_Mid {
    u8 pad[0x2C];
    struct func_801CD228_Node *unk2C;
};

struct func_801CD228_Obj {
    u8 pad[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
};

extern u8 D_801E0D10[];

void func_801CD228(void *arg0, struct func_801CD228_Mid **arg1) {
    u8 pad[8];
    struct func_801CD228_Node *sp1C;
    struct func_801CD228_Obj *temp_v0;

    sp1C = (*arg1)->unk2C;
    temp_v0 = func_80005670(arg0, D_801E0D10);
    if (temp_v0 != NULL) {
        temp_v0->unk6C = sp1C->unk4;
        temp_v0->unk70 = sp1C->unk8;
        temp_v0->unk74 = sp1C->unkC;
        temp_v0->unk78 = 1;
        temp_v0->unk7A = 0;
        temp_v0->unk7B = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801CD288.s")


extern u8 D_801E0D24[];

void func_801CD3FC(s32 a) {
    func_80005670(a, D_801E0D24);
}


extern s32 func_8012C6B4(s32);
extern void func_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern f32 D_801E343C;

void func_801CD420(void *arg0, s32 arg1) {
    s32 pad;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    sp58 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x4);
    sp54 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x8);
    sp50 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0xC);
    func_801CE330(arg0, 0x16, sp58, sp54, sp50, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, func_8012C6B4(2) + 1, 0x18, D_801E343C, 1);
    func_800058DC(arg0, func_801CD1CC);
}

