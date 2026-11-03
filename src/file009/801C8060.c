#include "common.h"


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

extern void func_801C7FEC(f32, f32, s32, void *, void *, void *);

void func_801C8060(func_801C8060_Outer *arg0) {
    func_801C8060_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 - 20.0f;
    temp_v0 = arg0->unk24->unk2C;
    func_801C7FEC(temp_v0->unk4, temp_v0->unk8 + 40.0f, temp_v0->unkC, &temp_v0->unk4, &temp_v0->unk8, &temp_v0->unkC);
}

#define D_801BBBF0 D_801BBBF0__func_801C80CC
#define D_801BBCD0 D_801BBCD0__func_801C80CC
#define func_800075B4 func_800075B4__func_801C80CC
#define func_8001EAD0 func_8001EAD0__func_801C80CC
#define func_8001EB64 func_8001EB64__func_801C80CC
extern u8 D_801BBBF0[];


typedef struct func_801C80CC_StructV { f32 x, y, z; } func_801C80CC_StructV;
typedef struct func_801C80CC_StructN { u8 pad[4]; f32 x; f32 y; f32 z; u8 pad2[2]; s16 unk12; } func_801C80CC_StructN;
typedef struct func_801C80CC_StructM { u8 pad[0x2C]; func_801C80CC_StructN *unk2C; } func_801C80CC_StructM;
typedef struct func_801C80CC_StructG {
    u8 pad0[0xDC];
    u8 *unkDC;
    func_801C80CC_StructM *unkE0;
    u8 pad1[0x18E - 0xE4];
    u16 unk18E;
    u8 pad2[0xEF0 - 0x190];
    u16 unkEF0;
} func_801C80CC_StructG;
extern f32 func_800075B4(func_801C80CC_StructV, func_801C80CC_StructV);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern func_801C80CC_StructM *D_801BBCD0;
#define GG ((func_801C80CC_StructG *)&D_801BBBF0)

s32 func_801C80CC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    u8 res;
    f32 fs2;
    s8 i;
    func_801C80CC_StructV sp80[3];
    func_801C80CC_StructV sp74;
    func_801C80CC_StructM *m;

    res = 0;
    fs2 = (u32)GG->unkDC[0x4D] * 0.25;
    if (GG->unkDC == NULL) {
        return 0;
    }
    if (GG->unkEF0 & 0x3050) {
        return 0;
    }
    if (GG->unk18E != 0) {
        return 0;
    }
    sp74.x = arg0;
    sp74.y = arg1;
    sp74.z = arg2;
    if (GG->unkEF0 == 0x100) {
        i = 0;
        m = GG->unkE0;
        do {
            sp80[i].x = (func_8001EAD0(m->unk2C->unk12) + (m = GG->unkE0, 0.0f)) * ((f32)(i - 1) * fs2) + m->unk2C->x;
            sp80[i].y = m->unk2C->y + fs2 * 0.5;
            sp80[i].z = (func_8001EB64(m->unk2C->unk12) + (m = GG->unkE0, 0.0f)) * ((f32)(i - 1) * fs2) + m->unk2C->z;
            i++;
        } while (i < 3);
    } else {
        m = D_801BBCD0;
        i = 0;
        do {
            sp80[i].x = m->unk2C->x;
            sp80[i].y = m->unk2C->y + fs2 * (i + 1);
            sp80[i].z = m->unk2C->z;
            i++;
        } while (i < 3);
    }
    i = 0;
    do {
        if (func_800075B4(sp80[i], sp74) < fs2 + arg3) {
            switch (i) {
            case 0:
                res |= 1;
                break;
            case 1:
                res |= 2;
                break;
            case 2:
                res |= 4;
                break;
            }
        }
        i++;
    } while (i < 3);
    return res;
}
#undef GG
#undef D_801BBBF0
#undef D_801BBCD0
#undef func_800075B4
#undef func_8001EAD0
#undef func_8001EB64

#define D_801BBBF0 D_801BBBF0__func_801C83C0
#define D_801E0960 D_801E0960__func_801C83C0
#define func_80005670 func_80005670__func_801C83C0
#define func_8013B570 func_8013B570__func_801C83C0
#define func_801C84FC func_801C84FC__func_801C83C0
#define func_801C86C4 func_801C86C4__func_801C83C0
extern u8 D_801BBBF0[];

struct func_801C83C0_StructActor {
    u8 pad[0x35];
    u8 unk35;
    u16 unk36;
};
extern void func_8013B570(void *, u16, s32, s32, void *);
extern u8 D_801E0960[];
extern void *func_80005670(void *, void *);
void func_801C84FC();
void func_801C86C4();

#define F4 (*(u8 *)((u8 *)&D_801BBBF0 + 0xF4))
#define F7 (*(u8 *)((u8 *)&D_801BBBF0 + 0xF7))
#define C104 (*(u16 *)((u8 *)&D_801BBBF0 + 0x104))

void func_801C83C0(struct func_801C83C0_StructActor *arg0, s32 arg1) {
    s32 state;

    arg0->unk35 = C104;
    C104++;
    if (F7 >= 4) {
        F7 = 0;
    }
    state = F7;
    if (state != 0) {
        if (state == 1) goto c1;
        if (state == 2) goto c2;
        if (state != 3) goto done;
        goto c3;
    }
    arg0->unk36 = F4 ? 0x11C : 0x29;
    goto e1;
c1:
    arg0->unk36 = F4 ? 0x11B : 0x2C;
e1:
    goto e2;
c2:
    arg0->unk36 = F4 ? 0x2D : 0x2D;
e2:
    goto done;
c3:
    arg0->unk36 = F4 ? 0x50 : 0x50;
done:
    func_8013B570(arg0, arg0->unk36, 0, 0, func_801C84FC);
    func_801C86C4((void *)arg0, arg1);
    func_80005670(arg0, D_801E0960);
}
#undef F4
#undef F7
#undef C104
#undef D_801BBBF0
#undef D_801E0960
#undef func_80005670
#undef func_8013B570
#undef func_801C84FC
#undef func_801C86C4

#define func_801C8608 func_801C8608__func_801C84FC
extern u8 D_801BBBF0[];

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
extern void func_801C4A5C(void *, s32);
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
#undef func_801C8608


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

#define D_801E4040 D_801E4040__func_801C88BC
#define D_801E4048 D_801E4048__func_801C88BC
#define D_801E4054 D_801E4054__func_801C88BC
#define D_801E4058 D_801E4058__func_801C88BC
extern u16 D_801E4040;
extern s32 D_801E4054;
extern s32 D_801E4058;

#if __LINE__ != 3
struct func_801C88BC_Fwd;
extern struct func_801C88BC_Fwd D_801E4048;
#endif
struct func_801C88BC_StructV {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_801C88BC_StructB {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x54 - 0x30];
    s32 unk54;
    u8 pad3[4];
    struct func_801C88BC_StructC *unk5C;
};
struct func_801C88BC_StructC {
    u8 pad[0x1C];
    struct func_801C88BC_StructV unk1C;
};
#define B (*(struct func_801C88BC_StructB **)(D_801BBBF0 + 0xDC))

void func_801C88BC(void) {
    struct func_801C88BC_StructC *c;

    c = B->unk5C;
    D_801E4058 = B->unk2C;
    D_801E4040 = *(u16 *)(D_801BBBF0 + 0xEF0);
    *(struct func_801C88BC_StructV *)&D_801E4048 = c->unk1C;
    D_801E4054 = B->unk54;
}
#undef B
#undef D_801E4040
#undef D_801E4048
#undef D_801E4054
#undef D_801E4058

#define D_8008DA88 D_8008DA88__func_801C8914
#define D_801BBCCC D_801BBCCC__func_801C8914
#define D_801E4040 D_801E4040__func_801C8914
#define D_801E4048 D_801E4048__func_801C8914
#define D_801E4054 D_801E4054__func_801C8914
#define D_801E4058 D_801E4058__func_801C8914
#define func_80006214 func_80006214__func_801C8914
#define func_8013A28C func_8013A28C__func_801C8914
#define func_801C86C4_StructD func_801C86C4_StructD__func_801C8914
#define func_801C88BC_StructB func_801C88BC_StructB__func_801C8914
#define func_801C88BC_StructC func_801C88BC_StructC__func_801C8914
#define func_801C88BC_StructV func_801C88BC_StructV__func_801C8914
extern u8 D_8008DA88[];
extern u16 D_801E4040;
extern struct func_801C8914_Struct D_801E4048;
extern s32 D_801E4054;
extern s32 D_801E4058;
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
#define EF0 (DD->unkEF0)
struct func_801C88BC_StructV {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_801C88BC_StructC {
    u8 pad[0x1C];
    struct func_801C88BC_StructV unk1C;
};
struct func_801C88BC_StructB {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x54 - 0x30];
    s32 unk54;
    u8 pad3[4];
    struct func_801C88BC_StructC *unk5C;
};
#define DD ((func_801C86C4_StructD *)&D_801BBBF0)
#define EF0 (DD->unkEF0)

struct func_801C8914_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
typedef struct func_801C8914_Struct func_801C8914_Struct;

typedef struct func_801C8914_Outer {
    u8 pad[0x5C];
    struct func_801C88BC_StructV *unk5C;
} func_801C8914_Outer;

extern void func_80006214(void *);
extern void func_8013A28C(void *, struct func_801C8914_Struct);
extern func_801C8914_Outer *D_801BBCCC;

void func_801C8914(void) {
    struct func_801C88BC_StructV *sp1C;
    struct func_801C88BC_StructV *temp_v0;

    sp1C = D_801BBCCC->unk5C;
    func_80006214(D_801BBCCC);
    ((struct func_801C88BC_StructB *)((s32 *)D_801BBBF0)[0xDC / 4] )->unk2C = D_801E4058;
    EF0 = D_801E4040;
    temp_v0 = (struct func_801C88BC_StructV *)((u8 *)sp1C + 0x1C);
    *(struct func_801C8914_Struct *)temp_v0 = D_801E4048;
    func_8013A28C(D_8008DA88, *(struct func_801C8914_Struct *)temp_v0);
    ((struct func_801C88BC_StructB *)((s32 *)D_801BBBF0)[0xDC / 4])->unk54 = D_801E4054;
    func_801C4A5C(*(void **)(D_801BBBF0 + 0xDC), 0);
}
#undef DD
#undef EF0
#undef D_8008DA88
#undef D_801BBCCC
#undef D_801E4040
#undef D_801E4048
#undef D_801E4054
#undef D_801E4058
#undef func_80006214
#undef func_8013A28C
#undef func_801C86C4_StructD
#undef func_801C88BC_StructB
#undef func_801C88BC_StructC
#undef func_801C88BC_StructV

#define D_8008DA88 D_8008DA88__func_801C89D8
#define D_801E0BF4 D_801E0BF4__func_801C89D8
#define func_80006214 func_80006214__func_801C89D8
#define func_8013A28C func_8013A28C__func_801C89D8
#define func_801C86C4_StructN func_801C86C4_StructN__func_801C89D8
#define func_801C86C4_StructO func_801C86C4_StructO__func_801C89D8
#define func_801C86C4_StructV func_801C86C4_StructV__func_801C89D8
#define func_801C8914_Struct func_801C8914_Struct__func_801C89D8
extern u8 D_8008DA88[];
typedef struct func_801C86C4_StructV { s32 a, b, c; } func_801C86C4_StructV;
extern func_801C86C4_StructV D_801E0BF4;
extern void func_80006214(void *);
typedef struct func_801C8914_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C8914_Struct;
extern void func_8013A28C(void *, func_801C8914_Struct);
typedef struct func_801C86C4_StructN { u8 pad[0x1C]; func_801C86C4_StructV v; } func_801C86C4_StructN;
typedef struct func_801C86C4_StructO { u8 pad[0x5C]; func_801C86C4_StructN *unk5C; } func_801C86C4_StructO;


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
#undef D_8008DA88
#undef D_801E0BF4
#undef func_80006214
#undef func_8013A28C
#undef func_801C86C4_StructN
#undef func_801C86C4_StructO
#undef func_801C86C4_StructV
#undef func_801C8914_Struct

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C8060/D_801E2EE0.s")

#define func_801C8BC0 func_801C8BC0__func_801C8A94

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
    k = 0.00100000005f;
    for (i = 0; i < 0x10; i++) {
        arg1[i]->unk30->unk18 = k;
        arg1[i]->unk30->unk1C = k;
        arg1[i]->unk30->unk20 = k;
        arg1[i]->unk30->unk12 = 0;
    }
    func_800058DC(arg0, func_801C8BC0);
}
#undef func_801C8BC0


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

#define B_801E0C84 B_801E0C84__func_801C8C28
#define D_801E0C84 D_801E0C84__func_801C8C28
#define func_800208C4 func_800208C4__func_801C8C28
#define func_80020DAC func_80020DAC__func_801C8C28
#define func_8002FC20 func_8002FC20__func_801C8C28
#define func_801CB71C_Struct2 func_801CB71C_Struct2__func_801C8C28
#define func_801CB71C_Struct3 func_801CB71C_Struct3__func_801C8C28
#define func_801CB71C_Struct4 func_801CB71C_Struct4__func_801C8C28
#define func_801CB71C_Struct5 func_801CB71C_Struct5__func_801C8C28
#define g ((struct func_801CB71C_Struct2 *)&D_801BBBF0)
struct func_801CB71C_Struct3 { u8 pad[0x24]; s32 unk24; };
struct func_801CB71C_Struct4 { u8 pad[0x4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801CB71C_Struct5 { u8 pad[0x2C]; struct func_801CB71C_Struct4 *unk2C; };
struct func_801CB71C_Struct2 {
    u8 pad0[0xDC];
    struct func_801CB71C_Struct3 *unkDC;
    struct func_801CB71C_Struct5 *unkE0;
    u8 pad1[0xF5 - 0xE4];
    u8 unkF5;
    u8 pad2[0xEF0 - 0xF6];
    u16 unkEF0;
    u8 pad3[3];
    u8 unkEF5;
    u8 pad4[2];
    s32 unkEF8;
};
#define g ((struct func_801CB71C_Struct2 *)&D_801BBBF0)
extern void func_800208C4(u16);
extern s32 func_80020DAC(u16);
extern u8 D_801E0C84;
extern u8 B_801E0C84;
extern f32 func_8002FC20(f32);
#undef g

struct func_801C8C28_Pos { u8 pad[4]; f32 x; f32 y; f32 z; };
struct func_801C8C28_E { u8 pad0[6]; s16 unk6; s16 unk8; s16 unkA; s16 unkC; u8 pad1[4]; u16 unk12; u8 pad2[0x20 - 0x14]; };
struct func_801C8C28_Arg { u8 pad0[0x38]; struct func_801C8C28_E *unk38; };
struct func_801C8C28_B { u8 pad[0x2C]; struct func_801C8C28_Pos *unk2C; };
struct func_801C8C28_A { u8 pad[0x24]; s32 unk24; };
struct func_801C8C28_G { u8 pad[0x2C]; u16 unk2C; u8 pad2[0xDC-0x2E]; struct func_801C8C28_A *unkDC; struct func_801C8C28_B *unkE0; u8 pad3[0xF5-0xE4]; u8 unkF5; };

void func_801C8C28(struct func_801C8C28_Arg *arg0, s32 arg1) {
#define g ((struct func_801C8C28_G *)&D_801BBBF0)
    f32 v[4];
    f32 dx, dy, dz;
    f32 d;
    s8 i;
    struct func_801C8C28_Pos *p;

    if (g->unkDC != NULL) {
      if (g->unkDC->unk24 != 0 && g->unkF5 != 0) {
        if (g->unk2C == 4) {
            for (i = 1; (f32)arg0->unk38[i].unk6 / 10.0 != 0.0; i++) {
                v[0] = (f32)arg0->unk38[i].unk6 / 10.0;
                v[1] = (f32)arg0->unk38[i].unk8 / 10.0;
                v[2] = (f32)arg0->unk38[i].unkA / 10.0;
                p = g->unkE0->unk2C;
                dz = p->z - v[2];
                dx = p->x - v[0];
                dy = p->y - v[1];
                d = func_8002FC20(dz * dz + (dx * dx + dy * dy));
                if (!(d < (f32)arg0->unk38[i].unkC)) goto next;
                if (D_801E0C84 == 0 && func_80020DAC(arg0->unk38[i].unk12) == 0) {
                    func_800208C4(arg0->unk38[i].unk12);
                    B_801E0C84 = 1;
                }
                return;
next:;
            }
        }
        D_801E0C84 = 0;
      }
    }
}
#undef B_801E0C84
#undef D_801E0C84
#undef func_800208C4
#undef func_80020DAC
#undef func_8002FC20
#undef func_801CB71C_Struct2
#undef func_801CB71C_Struct3
#undef func_801CB71C_Struct4
#undef func_801CB71C_Struct5


extern void func_801E0294(void);
extern void func_801C8E84();

void func_801C8E48(s32 arg0, s32 arg1) {
    func_801E0294();
    func_8001F74C(arg0);
    func_800058DC(arg0, (void *) func_801C8E84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C8060/func_801C8E84.s")

#define D_8002FC20 D_8002FC20__func_801CB71C
#define D_801BBBF0 D_801BBBF0__func_801CB71C
#define D_801E405C D_801E405C__func_801CB71C
#define func_801CB864 func_801CB864__func_801CB71C
struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};
struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};
extern struct func_801C3D90_StructA D_801BBBF0;


struct func_801CB71C_Struct3 { u8 pad[0x24]; s32 unk24; };
struct func_801CB71C_Struct4 { u8 pad[0x4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801CB71C_Struct5 { u8 pad[0x2C]; struct func_801CB71C_Struct4 *unk2C; };
struct func_801CB71C_Struct2 {
    u8 pad0[0xDC];
    struct func_801CB71C_Struct3 *unkDC;
    struct func_801CB71C_Struct5 *unkE0;
    u8 pad1[0xF5 - 0xE4];
    u8 unkF5;
    u8 pad2[0xEF0 - 0xF6];
    u16 unkEF0;
    u8 pad3[3];
    u8 unkEF5;
    u8 pad4[2];
    s32 unkEF8;
};
struct func_801CB71C_Struct6 { u8 pad[6]; s16 unk6; s16 unk8; s16 unkA; };
struct func_801CB71C_Struct7 { u8 pad0[0x38]; struct func_801CB71C_Struct6 *unk38; u8 pad1[0x98 - 0x3C]; u8 unk98; u8 unk99; u8 pad2[2]; s16 unk9C; };
extern s16 D_801E405C;
extern u8 func_801CB864[];
extern f32 D_8002FC20(f32, void *);

#define g ((struct func_801CB71C_Struct2 *)&D_801BBBF0)
void func_801CB71C(struct func_801CB71C_Struct7 *arg0, s32 arg1) {
    struct func_801CB71C_Struct4 *n;
    struct func_801CB71C_Struct6 *v;
    f64 x, y, z;

    arg0->unk9C = arg0->unk98 = arg0->unk99 = 0;
    if (g->unkDC->unk24 != 0 && g->unkF5 != 0 && g->unkEF5 == 0 && g->unkEF8 != 0 && (g->unkEF0 & 0x20)) {
        n = g->unkE0->unk2C;
        v = arg0->unk38;
        x = (f64)n->unkC - (f64)(f32)v->unkA / 10.0;
        y = (f64)n->unk4 - (f64)(f32)v->unk6 / 10.0;
        z = (f64)n->unk8 - (f64)(f32)v->unk8 / 10.0;
        if ((f64)D_8002FC20((f32)(x * x + (y * y + z * z)), g) < 40.0f) {
            arg0->unk98 = 1;
            D_801E405C = 0;
            func_800058DC(arg0, func_801CB864);
        }
    }
}
#undef g
#undef D_8002FC20
#undef D_801BBBF0
#undef D_801E405C
#undef func_801CB864

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C8060/func_801CB864.s")

