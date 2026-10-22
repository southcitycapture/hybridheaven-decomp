#include "common.h"

extern s32 D_8008D5D0;
struct func_80005A04_Struct {
    struct func_80005A04_Struct *unk0;
    struct func_80005A04_Struct *unk4;
    struct func_80005A04_Struct *unk8;
    struct func_80005A04_Struct *unkC;
    u8 pad10[4];
    u32 unk14;
};
extern struct func_80005A04_Struct *D_8008D5D4;
extern struct func_80005CDC_Struct D_800892B0;
struct func_80005CDC_Struct {
    u8 pad0[0xB6];
    u16 unkB6;
    u8 padB8[0x4];
    s32 unkBC;
    u8 padC0[0x4];
    u8 *unkC4;
};
extern void *D_8008DA88;
struct func_80006214_Struct {
    u8 pad0[0x10];
    struct func_80006214_Struct *unk10;
};
s32 func_80006214(struct func_80006214_Struct *arg0);

extern s32 func_8001F718();
extern s32 func_8001F76C(void *);
extern u32 D_8008D5D8[];

typedef struct func_80005270_Struct {
    struct func_80005270_Struct *unk0;
    u8 pad4[4];
    struct func_80005270_Struct *unk8;
    u8 pad[0xC];
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} func_80005270_Struct;

#define G8 ((u8 *)&D_800892B0)

void func_80005270(void) {
    func_80005270_Struct *s0;
    func_80005270_Struct *s3;
    func_80005270_Struct *v1;
    s32 i;
    u32 f;

    s0 = *(func_80005270_Struct **)(G8 + 0xC8);
    i = 0;
    G8[0x1BC] = 0;
    D_8008D5D4 = (void *)s0;
    if (s0 != NULL && !(G8[0x1BC] & 0xFF)) {
        do {
            D_8008D5D0 = (s32)s0->unk0;
            func_80006214((void *)s0);
            s3 = (func_80005270_Struct *)D_8008D5D4;
            if (func_8001F718() == 0 || func_8001F76C(D_8008D5D4) == 0) {
                s0 = (func_80005270_Struct *)D_8008D5D4;
                f = s0->unk18;
                if (f != 0 && !(f & 0x800000)) {
                    ((void (*)(void *, void *))f)(s0, &D_8008DA88);
                    s0 = (func_80005270_Struct *)D_8008D5D4;
                }
                v1 = s0;
                if (s3 == v1) {
                    f = s0->unk1C;
                    if (f != 0 && !(f & 0x800000)) {
                        ((void (*)(void *, void *))f)(s0, &D_8008DA88);
                        v1 = (func_80005270_Struct *)D_8008D5D4;
                        s0 = (func_80005270_Struct *)D_8008D5D4;
                    }
                }
                if (s3 == v1) {
                    f = s0->unk20;
                    if (f != 0 && !(f & 0x800000)) {
                        ((void (*)(void *, void *))f)(s0, &D_8008DA88);
                    }
                    s0 = (func_80005270_Struct *)D_8008D5D4;
                }
            }
            s0 = (func_80005270_Struct *)D_8008D5D4;
            if (s0 != NULL && s0->unk8 != NULL) {
                if (D_8008D5D0 != 0) {
                    D_8008D5D8[i] = D_8008D5D0;
                    i++;
                }
                D_8008D5D4 = (void *)s0->unk8;
            } else if (D_8008D5D0 == 0 && i != 0) {
                D_8008D5D4 = (void *)D_8008D5D8[--i];
            } else {
                D_8008D5D4 = (void *)D_8008D5D0;
            }
            s0 = (func_80005270_Struct *)D_8008D5D4;
        } while (s0 != NULL && G8[0x1BC] == 0);
    }
}

extern void func_800279F0(void *, s32);
extern s32 D_80043394;
extern u16 D_80043398;

extern void *func_8001F290();
extern void *D_800792F0;
extern void *D_80089338;

typedef struct func_80005444_StructNode {
    struct func_80005444_StructNode *next;
    u8 pad[0xB0];
} func_80005444_StructNode;
typedef struct func_80005444_StructSmall {
    struct func_80005444_StructSmall *next;
    u8 pad[0x30];
} func_80005444_StructSmall;

void func_80005444(u16 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4) {
    u16 i;
    s32 count;
    s32 size;
    func_80005444_StructNode *p;
    func_80005444_StructSmall *q;

    G8[0x1BC] = 1;
    p = func_8001F290(arg0 * 0xB4);
    *(void **)(G8 + 0xAC) = p;
    D_80043398 = arg0;
    D_80043394 = 0x43781902;
    for (i = 0; i < arg0 - 1; i++) {
        p->next = p + 1;
        p++;
    }
    p->next = NULL;
    *(s32 *)(G8 + 0xC8) = 0;
    i = 0;
    p = func_8001F290(arg1 * 0x34, p, arg1);
    *(void **)(G8 + 0xB0) = p;
    q = (func_80005444_StructSmall *)p;
    for (; i < arg1 - 1; i++) {
        q->next = q + 1;
        q++;
    }
    q->next = NULL;
    *(s32 *)(G8 + 0x17C) = 0;
    *(u16 *)(G8 + 0xB4) = arg3;
    count = arg3;
    *(void **)(G8 + 0xB8) = func_8001F290(count * 0xB8);
    size = count * 1;
    *(void **)(G8 + 0xC0) = func_8001F290(size * 1, size);
    func_800279F0(*(void **)(G8 + 0xC0), size);
    D_800892B0.unkB6 = arg4;
    count = arg4;
    D_800892B0.unkBC = (s32)func_8001F290(count * 0x50);
    size = count * 1;
    D_800892B0.unkC4 = func_8001F290(size * 1, size);
    func_800279F0(D_800892B0.unkC4, size);
    count = arg2 << 6;
    D_800792F0 = func_8001F290(count);
    D_80089338 = func_8001F290(count);
    *(u16 *)(G8 + 0x90) = arg2;
}


extern u8 D_80089378[];
extern s32 func_800059B0(void *, s32);
extern void func_80005B98();

s32 func_80005624(s32 arg0) {
    s32 var;
    s32 temp_v0;

    temp_v0 = func_800059B0(D_80089378, ((s32 *)arg0)[1]);
    var = temp_v0;
    if (temp_v0 != 0) {
        func_80005B98(var, arg0);
    }
    return var;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005670.s")


typedef struct func_80005700_Struct {
    struct func_80005700_Struct *unk0;
    u8 pad4[4];
    struct func_80005700_Struct *unk8;
} func_80005700_Struct;
extern struct func_8000582C_Struct *D_8008D768[];
void func_80005ACC(void *arg0);

void func_80005700(void *arg0) {
    s32 n;
    s32 t;
    func_80005700_Struct *s0;
    func_80005700_Struct *tmp;

    n = 0;
    if (arg0 == D_8008D5D4) {
        D_8008D5D4 = NULL;
    }
    func_80005ACC(arg0);
    tmp = ((func_80005700_Struct *)arg0)->unk8;
    s0 = arg0;
    arg0 = tmp;
    if (tmp != NULL) {
        s0->unk8 = NULL;
        while (arg0 != NULL) {
            s0 = ((func_80005700_Struct *)arg0)->unk0;
            func_80005ACC(arg0);
            if (((func_80005700_Struct *)arg0)->unk8 != NULL) {
                if (s0 != NULL) {
                    D_8008D768[n] = (void *)s0;
                    n++;
                }
                arg0 = ((func_80005700_Struct *)arg0)->unk8;
            } else if (s0 == NULL && (t = n - 1, n != 0)) {
                arg0 = D_8008D768[t];
                n = t;
            } else {
                arg0 = s0;
            }
        }
    }
}


extern void func_80005670(s32, s32);

struct func_800057DC_Struct {
    u8 pad[0xC];
    s32 unkC;
};

void func_800057DC(struct func_800057DC_Struct *arg0, s32 arg1) {
    s32 sp1C;

    sp1C = arg0->unkC;
    func_80005700(arg0);
    if (sp1C != 0) {
        func_80005670(sp1C, arg1);
    } else {
        func_80005624(arg1);
    }
}


typedef struct func_8000582C_Struct {
    struct func_8000582C_Struct *unk0;
    u8 pad4[4];
    struct func_8000582C_Struct *unk8;
    u8 padC[4];
    s32 unk10;
} func_8000582C_Struct;


func_8000582C_Struct *func_8000582C(s32 arg0, func_8000582C_Struct *arg1) {
    s32 count;
    func_8000582C_Struct *child;

    count = 0;
    while (arg1 != NULL) {
        if (arg0 == arg1->unk10) {
            break;
        }
        if (arg1->unk8 != NULL) {
            child = arg1->unk0;
            if (child != NULL) {
                D_8008D768[count] = child;
                count++;
            }
            arg1 = arg1->unk8;
        } else {
            child = arg1->unk0;
            if (child == NULL && count != 0) {
                arg1 = D_8008D768[--count];
            } else {
                arg1 = child;
            }
        }
    }
    return arg1;
}



void func_800058B8(s32 a) {
    func_8000582C(a, D_80089378);
}


struct func_800058DC_Struct {
    u8 pad[0x1C];
    s32 unk1C;
};

void func_800058DC(struct func_800058DC_Struct *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

/* machine draft (m2c), tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

void func_800058E4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

/* machine draft (m2c), tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

void func_800058EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}


struct func_800058F4_Inner {
    u8 pad0[8];
    void *unk8;
};

struct func_800058F4_Struct {
    s32 unk0;
    struct func_800058F4_Struct *unk4;
    u8 pad8[4];
    struct func_800058F4_Inner *unkC;
    u8 pad10[4];
    s32 unk14;
};

extern void func_80005A04(void *a0, void *a1);
extern void func_80005B48(void *arg0);

void func_800058F4(struct func_800058F4_Struct *arg0, s32 arg1) {
    struct func_800058F4_Struct *v1;
    struct func_800058F4_Struct *v0;
    struct func_800058F4_Struct *sp1C;
    struct func_800058F4_Inner *temp_v0;

    if ((s32) arg0 == D_8008D5D0) {
        v0 = arg0->unk4;
        v1 = v0;
    } else {
        v1 = NULL;
        v0 = arg0->unk4;
    }
    if ((v0 != NULL) || (arg0->unk0 != 0)) {
        sp1C = v1;
        func_80005B48(arg0);
        temp_v0 = arg0->unkC;
        arg0->unk14 = arg1;
        if (temp_v0 == NULL) {
            sp1C = v1;
            func_80005A04(D_80089378, arg0);
        } else {
            sp1C = v1;
            func_80005A04(temp_v0->unk8, arg0);
        }
        if (sp1C != NULL) {
            D_8008D5D0 = sp1C->unk0;
        }
    }
}


struct func_800059B0_Struct {
    struct func_800059B0_Struct *next;
    u8 pad4[4];
    s32 unk8;
    u8 padC[8];
    s32 unk14;
};

struct func_800059B0_Globals {
    u8 pad[0xAC];
    struct func_800059B0_Struct *free;
};

extern void D_80005A04(void *, void *, s32);

s32 func_800059B0(void *arg0, s32 arg1)
{
    struct func_800059B0_Struct *node;

    if (((struct func_800059B0_Globals *)&D_800892B0)->free != NULL) {
        node = ((struct func_800059B0_Globals *)&D_800892B0)->free;
        ((struct func_800059B0_Globals *)&D_800892B0)->free = node->next;
        D_80005A04(arg0, (node->unk8 = 0, node),node->unk14 = arg1);
        return (s32)node;
    }
    return 0;
}




void func_80005A04(void *a0, void *a1) {
    struct func_80005A04_Struct *arg1;
    struct func_80005A04_Struct *temp_v1;
    struct func_80005A04_Struct *temp_v0_2;
    struct func_80005A04_Struct *temp_v0_3;
    struct func_80005A04_Struct *temp_v0_4;
    u32 temp_v0;

    arg1 = a1;
    temp_v0 = arg1->unk14;
    if (((struct func_80005A04_Struct *) a0)->unk14 < temp_v0) {
        arg1->unk0 = a0;
        arg1->unk4 = ((struct func_80005A04_Struct *) a0)->unk4;
        arg1->unkC = ((struct func_80005A04_Struct *) a0)->unkC;
        ((struct func_80005A04_Struct *) a0)->unk4 = arg1;
        temp_v0_2 = arg1->unk4;
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk0 = arg1;
        }
        if (arg1->unkC != NULL) {
            temp_v0_3 = ((struct func_80005A04_Struct *) a0)->unkC;
            if (((struct func_80005A04_Struct *) a0) == temp_v0_3->unk8) {
                temp_v0_3->unk8 = arg1;
            }
        }
    } else {
loop_6:
        temp_v1 = ((struct func_80005A04_Struct *) a0)->unk0;
        if (temp_v1 != NULL && temp_v1->unk14 >= temp_v0) {
            a0 = temp_v1;
            goto loop_6;
        }
        arg1->unk0 = temp_v1;
        arg1->unk4 = a0;
        arg1->unkC = ((struct func_80005A04_Struct *) a0)->unkC;
        ((struct func_80005A04_Struct *) a0)->unk0 = arg1;
        temp_v0_4 = arg1->unk0;
        if (temp_v0_4 != NULL) {
            temp_v0_4->unk4 = arg1;
        }
        if (((struct func_80005A04_Struct *) a0) == D_8008D5D4) {
            *(struct func_80005A04_Struct **) &D_8008D5D0 = arg1;
        }
    }
}

struct func_80005CDC_Struct;
extern void func_80006088(void *);

void func_80005ACC(void *arg0) {
    void *s0;

    if ((s32) arg0 == D_8008D5D0) {
        D_8008D5D0 = *(s32 *) arg0;
    }
    func_80005B48(arg0);
    ((void **) arg0)[0] = *(void **) ((u8 *) &D_800892B0 + 0xAC);
    *(void **) ((u8 *) &D_800892B0 + 0xAC) = arg0;
    s0 = ((void **) arg0)[9];
    if (s0 != NULL) {
        do {
            func_80006088(s0);
            s0 = ((void **) arg0)[9];
        } while (s0 != NULL);
    }
}


struct func_80005B48_Struct {
    struct func_80005B48_Struct *unk0;
    struct func_80005B48_Struct *unk4;
    struct func_80005B48_Struct *unk8;
    struct func_80005B48_Struct *unkC;
};

void func_80005B48(void *arg0) {
    struct func_80005B48_Struct *a;
    struct func_80005B48_Struct *temp_v0;

    a = (struct func_80005B48_Struct *) arg0;
    temp_v0 = a->unk4;
    if (temp_v0 != NULL) {
        temp_v0->unk0 = a->unk0;
    }
    temp_v0 = a->unk0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = a->unk4;
    }
    temp_v0 = a->unkC;
    if ((temp_v0 != NULL) && (a == temp_v0->unk8)) {
        temp_v0->unk8 = a->unk0;
    }
}


typedef struct func_80005B98_Struct {
    u8 pad[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u16 unk28;
} func_80005B98_Struct;


void func_80005B98(func_80005B98_Struct *arg0, s32 *arg1) {
    func_80005B98_Struct *temp_a0;

    temp_a0 = (func_80005B98_Struct *) ((u8 *) arg0 + 0x2C);
    arg0->unk10 = arg1[0];
    arg0->unk14 = arg1[1];
    arg0->unk1C = arg1[3];
    arg0->unk18 = arg1[2];
    arg0->unk20 = arg1[4];
    arg0->unk24 = 0;
    func_800279F0(temp_a0, 0x88);
    arg0->unk28 = 0;
}



u16 func_80005BF8(void) {
    if (D_80043394 == 0x43781902) {
        return D_80043398;
    }
    return 0U;
}


extern s32 func_80005CB0(void);

s32 func_80005C24(void) {
    if (D_80043394 == 0x43781902) {
        return (D_80043398 - func_80005CB0()) & 0xFFFF;
    }
    return 0;
}



s32 func_80005C70(void) {
    if (D_80043394 == 0x43781902) {
        return func_80005CB0();
    }
    return 0;
}


struct func_80005CB0_Struct {
    struct func_80005CB0_Struct *next;
};

extern struct func_80005CB0_Struct *D_8008935C;

s32 func_80005CB0(void) {
    struct func_80005CB0_Struct *var_v0;
    s32 var_v1;

    var_v0 = D_8008935C;
    var_v1 = 0;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->next;
            var_v1 += 1;
        } while (var_v0 != NULL);
    }
    return var_v1 & 0xFFFF;
}




s32 func_80005CDC(void) {
    s32 var_a0;
    s32 var_v0;
    u8 *var_v1;

    var_v1 = D_800892B0.unkC4;
    var_a0 = D_800892B0.unkBC;
    var_v0 = 0;
    if ((s32) D_800892B0.unkB6 > 0) {
        do {
            var_v0 += 1;
            if (*var_v1 != 0) {
                var_v1 += 1;
                var_a0 += 0x50;
            } else {
                *var_v1 = 1;
                return var_a0;
            }
        } while (var_v0 < (s32) D_800892B0.unkB6);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/func_80005D3C.s")


extern s32 func_80005D3C(void);

struct func_80005D9C_Struct {
    u8 pad[0x2A];
    u16 unk2A;
    s32 unk2C;
    s32 unk30;
};

s32 func_80005D9C(void *arg0, u16 arg1) {
    arg1 = arg1 & 0xFFFF;
    switch (arg1) {
    case 12:
        ((struct func_80005D9C_Struct *)arg0)->unk30 = func_80005CDC();
        ((struct func_80005D9C_Struct *)arg0)->unk2C = 0;
        ((struct func_80005D9C_Struct *)arg0)->unk2A = arg1;
        break;
    case 13:
        ((struct func_80005D9C_Struct *)arg0)->unk30 = func_80005CDC();
        ((struct func_80005D9C_Struct *)arg0)->unk2C = 0;
        ((struct func_80005D9C_Struct *)arg0)->unk2A = arg1;
        break;
    default:
        ((struct func_80005D9C_Struct *)arg0)->unk2C = func_80005D3C();
        ((struct func_80005D9C_Struct *)arg0)->unk30 = 0;
        ((struct func_80005D9C_Struct *)arg0)->unk2A = arg1;
        break;
    }
}


struct func_80005E44_Struct {
    u8 pad0[4];
    u32 unk4;
    u8 pad8[2];
    u16 unkA;
};

struct func_80005E44_Res {
    u8 pad0[12];
    s32 unkC;
};

extern void func_80006370(s32, void *);
extern void *func_800063BC(void *, u32);
extern s32 func_800065EC(void *, void *);
extern u8 D_8008942C[];

void *func_80005E44(s32 arg0, struct func_80005E44_Struct *arg1) {
    struct func_80005E44_Res *temp_v0;

    temp_v0 = func_800063BC(D_8008942C, arg1->unk4);
    if (temp_v0 != NULL) {
        if (func_80005D9C(temp_v0, arg1->unkA) == 0) {
            return NULL;
        }
        func_80006370(arg0, temp_v0);
        if (func_800065EC(temp_v0, arg1) != 0) {
            func_80006088(temp_v0);
            return NULL;
        }
        temp_v0->unkC = 0;
    }
    return temp_v0;
}


struct func_80005ED8_Struct {
    u8 pad[0xC];
    s32 unkC;
};

struct func_80005ED8_Arg {
    u8 pad[0xA];
    u16 unkA;
};


void *func_80005ED8(s32 arg0, void *arg1, s32 arg2) {
    struct func_80005ED8_Struct *temp_v0;

    temp_v0 = func_800063BC(D_8008942C, arg2);
    if (temp_v0 != NULL) {
        if (func_80005D9C(temp_v0, ((struct func_80005ED8_Arg *) arg1)->unkA) == 0) {
            return NULL;
        }
        func_80006370(arg0, temp_v0);
        if (func_800065EC(temp_v0, arg1) != 0) {
            func_80006088(temp_v0);
            return NULL;
        }
        temp_v0->unkC = 0;
    }
    return temp_v0;
}


void func_80005F6C(s32 arg0, struct func_80005E44_Struct *arg1) {
    func_80005E44(arg0, arg1);
}


void func_80005F8C(s32 arg0, void *arg1, s32 arg2) {
    func_80005ED8(arg0, arg1, arg2);
}


typedef struct func_80005FAC_Node {
    void *unk0;
    s32 unk4;
    s32 unk8;
    void *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} func_80005FAC_Node;

typedef struct func_80005FAC_Pool {
    u8 pad[0xB0];
    func_80005FAC_Node *unkB0;
} func_80005FAC_Pool;

typedef struct func_80005FAC_Arg1 {
    u8 pad[8];
    func_80005FAC_Node *unk8;
} func_80005FAC_Arg1;

typedef struct func_80005FAC_Arg2 {
    u8 pad4[4];
    s32 unk4;
    u8 pad8[2];
    u16 unkA;
} func_80005FAC_Arg2;

func_80005FAC_Node *func_80005FAC(s32 arg0, func_80005FAC_Arg1 *arg1, func_80005FAC_Arg2 *arg2) {
    func_80005FAC_Node *var_s0;
    func_80005FAC_Node *temp_v0;

    if (arg1->unk8 != NULL) {
        var_s0 = (func_80005FAC_Node *) func_800063BC(arg1->unk8, arg2->unk4);
    } else {
        temp_v0 = ((func_80005FAC_Pool *) &D_800892B0)->unkB0;
        if (temp_v0 != NULL) {
            var_s0 = temp_v0;
            ((func_80005FAC_Pool *) &D_800892B0)->unkB0 = temp_v0->unk0;
            arg1->unk8 = temp_v0;
            temp_v0->unk0 = NULL;
            temp_v0->unk4 = 0;
            temp_v0->unk8 = 0;
            temp_v0->unkC = arg1;
            temp_v0->unk18 = arg0;
        } else {
            var_s0 = NULL;
        }
    }
    if (var_s0 != NULL) {
        if (func_80005D9C(var_s0, arg2->unkA) == 0) {
            return NULL;
        }
        func_80006370(arg0, var_s0);
        if (func_800065EC(var_s0, arg2) != 0) {
            func_80006088(var_s0);
            return NULL;
        }
    }
    return var_s0;
}


struct func_80006088_Struct {
    struct func_80006088_Struct *unk0;
    u8 pad4[4];
    struct func_80006088_Struct *unk8;
};
struct func_800064C4_Struct;
struct func_80006248_Struct;
extern struct func_80006248_Struct *D_8008D8F8[];
void func_800064C4(struct func_800064C4_Struct *arg0);

void func_80006088(void *arg0) {
    s32 var_s2;
    struct func_80006088_Struct *temp_s1;
    struct func_80006088_Struct *var_s0;

    var_s2 = 0;
    func_800064C4(arg0);
    if (((struct func_80006088_Struct *)arg0)->unk8 != NULL) {
        var_s0 = ((struct func_80006088_Struct *)arg0)->unk8;
        while (var_s0 != NULL) {
            temp_s1 = var_s0->unk0;
            func_800064C4((struct func_800064C4_Struct *)var_s0);
            if (var_s0->unk8 != NULL) {
                if (temp_s1 != NULL) {
                    D_8008D8F8[var_s2] = (struct func_80006248_Struct *)temp_s1;
                    var_s2 += 1;
                }
                var_s0 = var_s0->unk8;
            } else {
                if (temp_s1 == NULL && var_s2 != 0) {
                    var_s0 = (struct func_80006088_Struct *)D_8008D8F8[--var_s2];
                } else {
                    var_s0 = temp_s1;
                }
            }
        }
    }
}


struct func_80006148_Struct {
    u8 pad0[0xC];
    void *unkC;
    struct func_80006148_Struct *unk10;
    struct func_80006148_Struct *unk14;
    s32 unk18;
};
struct func_80006148_Owner {
    u8 pad0[0x24];
    struct func_80006148_Struct *unk24;
};

void *func_80006148(struct func_80006148_Struct *arg0, s32 arg1) {
    s32 temp_a3;
    struct func_80006148_Struct *temp_v1;
    struct func_80006148_Struct *sp24;
    struct func_80006148_Struct *sp20;
    void *temp_s0;
    struct func_80006148_Struct *var_v0;
    struct func_80006148_Struct *temp_v1_2;

    temp_a3 = arg0->unk18;
    temp_s0 = arg0->unkC;
    sp24 = arg0->unk14;
    sp20 = arg0->unk10;
    func_80006088(arg0);
    if (temp_s0 != NULL) {
        temp_s0 = func_80005FAC(temp_a3, (func_80005FAC_Arg1 *) temp_s0, (func_80005FAC_Arg2 *) arg1);
    } else {
        temp_s0 = func_80005E44(temp_a3, (struct func_80005E44_Struct *) arg1);
    }
    var_v0 = temp_s0;
    temp_v1 = var_v0->unk14;
    if (temp_v1 != NULL) {
        temp_v1->unk10 = var_v0->unk10;
    }
    temp_v1_2 = var_v0->unk10;
    if (temp_v1_2 != NULL) {
        temp_v1_2->unk14 = var_v0->unk14;
    }
    var_v0->unk14 = sp24;
    var_v0->unk10 = sp20;
    if (sp24 != NULL) {
        sp24->unk10 = var_v0;
    } else {
        ((struct func_80006148_Owner *) var_v0->unk18)->unk24 = var_v0;
    }
    if (sp20 != NULL) {
        sp20->unk14 = var_v0;
    }
    return var_v0;
}




s32 func_80006214(struct func_80006214_Struct *arg0) {
    s32 var_v1;
    struct func_80006214_Struct *var_v0;

    var_v0 = *(struct func_80006214_Struct **)((u8 *)arg0 + 0x24);
    var_v1 = 0;
    if (var_v0 != NULL) {
        void **var_a0 = &D_8008DA88;
        do {
            *var_a0 = var_v0;
            var_v0 = var_v0->unk10;
            var_v1 += 1;
            var_a0 += 1;
        } while (var_v0 != NULL);
    }
    return var_v1;
}


struct func_80006248_Struct {
    struct func_80006248_Struct *unk0;
    u8 pad4[4];
    struct func_80006248_Struct *unk8;
    u8 padC[0x14];
    u16 unk20;
};

void *func_80006248(s32 arg0, struct func_80006248_Struct *arg1) {
    s32 count;
    struct func_80006248_Struct *child;

    count = 0;
    if (arg1 != NULL) {
loop:
        if (arg0 != arg1->unk20) {
            if (arg1->unk8 != NULL) {
                child = arg1->unk0;
                if (child != NULL) {
                    D_8008D8F8[count] = child;
                    count += 1;
                }
                arg1 = arg1->unk8;
            } else {
                child = arg1->unk0;
                if ((child == NULL) && (count != 0)) {
                    arg1 = D_8008D8F8[--count];
                } else {
                    arg1 = child;
                }
            }
            if (arg1 != NULL) {
                goto loop;
            }
        }
    }
    return arg1;
}



void func_800062D4(s32 a) {
    func_80006248(a, D_8008942C);
}


extern void func_8000659C();
extern void func_80006414();

struct func_800062F8_Inner {
    u8 pad0[8];
    void *unk8;
};

struct func_800062F8_Struct {
    struct func_800062F8_Struct *unk0;
    struct func_800062F8_Struct *unk4;
    u8 pad8[4];
    struct func_800062F8_Inner *unkC;
    u8 pad10[0x14];
    s32 unk24;
};

void func_800062F8(struct func_800062F8_Struct *arg0, s32 arg1) {
    struct func_800062F8_Inner *temp_v0;

    if ((arg0->unk4 != NULL) || (arg0->unk0 != NULL)) {
        func_8000659C(arg0);
        temp_v0 = arg0->unkC;
        arg0->unk24 = arg1;
        if (temp_v0 == NULL) {
            func_80006414(D_8008942C, arg0);
            return;
        }
        func_80006414(temp_v0->unk8, arg0);
    }
}


struct func_80006370_StructNode {
    u8 pad[0x10];
    struct func_80006370_StructNode *next;
    struct func_80006370_StructNode *prev;
    s32 owner;
};

struct func_80006370_StructOwner {
    u8 pad[0x24];
    struct func_80006370_StructNode *head;
};

void func_80006370(s32 arg0, void *arg1) {
    struct func_80006370_StructNode **link;
    struct func_80006370_StructNode *first;
    struct func_80006370_StructNode *next;

    first = ((struct func_80006370_StructOwner *)arg0)->head;
    if (first != NULL) {
        link = &((struct func_80006370_StructOwner *)arg0)->head;
        if (first != NULL) {
            next = *link;
            do {
                ((struct func_80006370_StructNode *)arg1)->prev = next;
                link = (struct func_80006370_StructNode **)*link;
                next = ((struct func_80006370_StructNode *)link)->next;
                link = &((struct func_80006370_StructNode *)link)->next;
            } while (next != NULL);
        }
        *link = arg1;
    } else {
        ((struct func_80006370_StructOwner *)arg0)->head = arg1;
        ((struct func_80006370_StructNode *)arg1)->prev = NULL;
    }
    ((struct func_80006370_StructNode *)arg1)->next = NULL;
    ((struct func_80006370_StructNode *)arg1)->owner = arg0;
}


struct func_800063BC_Struct {
    struct func_800063BC_Struct *next;
    u8 pad4[4];
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
    u8 pad20[4];
    u32 unk24;
};

struct func_800063BC_StructGlobals {
    u8 pad[0xB0];
    struct func_800063BC_Struct *free;
};

void *func_800063BC(void *arg0, u32 arg1)
{
  struct func_800063BC_Struct *node;
  ;
  if (((struct func_800063BC_StructGlobals *) (&D_800892B0))->free != 0)
  {
    node = ((struct func_800063BC_StructGlobals *) (&D_800892B0))->free;
    ((struct func_800063BC_StructGlobals *) (&D_800892B0))->free = ((struct func_800063BC_StructGlobals *) (&D_800892B0))->free->next;
    node->unk24 = arg1;
    node->unk8 = 0;
    node->unk1C = 0;
    func_80006414(arg0, (struct func_80006414_Struct *) node);
    return node;
  }
  return 0;
}


struct func_80006414_Struct {
    struct func_80006414_Struct *unk0;
    struct func_80006414_Struct *unk4;
    struct func_80006414_Struct *unk8;
    struct func_80006414_Struct *unkC;
    u8 pad10[0x14];
    u32 unk24;
};

void func_80006414(struct func_80006414_Struct *arg0, struct func_80006414_Struct *arg1) {
    struct func_80006414_Struct *temp_v1;
    struct func_80006414_Struct *temp_v0;
    u32 temp_v0_key;

    temp_v0_key = arg1->unk24;
    if (arg0->unk24 < temp_v0_key) {
        arg1->unk0 = arg0;
        arg1->unk4 = arg0->unk4;
        arg1->unkC = arg0->unkC;
        arg0->unk4 = arg1;
        temp_v0 = arg1->unk4;
        if (temp_v0 != NULL) {
            temp_v0->unk0 = arg1;
        }
        if (arg1->unkC != NULL) {
            temp_v0 = arg0->unkC;
            if (arg0 == temp_v0->unk8) {
                temp_v0->unk8 = arg1;
            }
        }
    } else {
        for (;;) {
            temp_v1 = arg0->unk0;
            if (temp_v1 == NULL || temp_v1->unk24 < temp_v0_key) {
                break;
            }
            arg0 = temp_v1;
        }
        arg1->unk0 = temp_v1;
        arg1->unk4 = arg0;
        arg1->unkC = arg0->unkC;
        arg0->unk0 = arg1;
        temp_v0 = arg1->unk0;
        if (temp_v0 != NULL) {
            temp_v0->unk4 = arg1;
        }
    }
}



struct func_800064C4_Struct {
    struct func_800064C4_Struct *unk0;
    u8 pad4[0xC];
    struct func_800064C4_Struct *unk10;
    struct func_800064C4_Struct *unk14;
    struct func_800064C4_Struct *unk18;
    s32 unk1C;
    u8 pad20[0x4];
    void *unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
};

struct func_800064C4_Globals {
    u8 pad0[0xB0];
    struct func_800064C4_Struct *unkB0;
    u32 unkB4;
    u32 unkB8;
    u32 unkBC;
    u8 *unkC0;
    u8 *unkC4;
};

#define FUNC800064C4_G ((struct func_800064C4_Globals *) &D_800892B0)

void func_800064C4(struct func_800064C4_Struct *arg0) {
    struct func_800064C4_Struct *temp_v0;
    struct func_800064C4_Struct *temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;

    func_8000659C();
    temp_v0 = arg0->unk14;
    if (temp_v0 != NULL) {
        temp_v0->unk10 = arg0->unk10;
    } else {
        arg0->unk18->unk24 = arg0->unk10;
    }
    temp_v0_2 = arg0->unk10;
    if (temp_v0_2 != NULL) {
        temp_v0_2->unk14 = arg0->unk14;
    }
    arg0->unk0 = FUNC800064C4_G->unkB0;
    FUNC800064C4_G->unkB0 = arg0;
    temp_v1 = arg0->unk2C;
    arg0->unk1C = 0;
    if (temp_v1 != 0) {
        *(u8 *) (((u32) (temp_v1 - FUNC800064C4_G->unkB8) / 184U) + (u32) FUNC800064C4_G->unkC0) = 0;
    } else {
        temp_v1_2 = arg0->unk30;
        if (temp_v1_2 != 0) {
            *(u8 *) (((u32) (temp_v1_2 - FUNC800064C4_G->unkBC) / 80U) + (u32) FUNC800064C4_G->unkC4) = 0;
        }
    }
    arg0->unk2C = 0;
    arg0->unk30 = 0;
}


struct func_8000659C_Struct {
    struct func_8000659C_Struct *unk0;
    struct func_8000659C_Struct *unk4;
    struct func_8000659C_Struct *unk8;
    struct func_8000659C_Struct *unkC;
};

void func_8000659C(void *arg0) {
    struct func_8000659C_Struct *a;
    struct func_8000659C_Struct *temp_v0;

    a = (struct func_8000659C_Struct *) arg0;
    temp_v0 = a->unk4;
    if (temp_v0 != NULL) {
        temp_v0->unk0 = a->unk0;
    }
    temp_v0 = a->unk0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = a->unk4;
    }
    temp_v0 = a->unkC;
    if ((temp_v0 != NULL) && (a == temp_v0->unk8)) {
        temp_v0->unk8 = a->unk0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/D_8004BAE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/D_8004BFD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/D_8004BFDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80005270/D_8004BFE0.s")


struct func_800065EC_Struct {
    u8 pad0[0x20];
    s16 unk20;
    u8 pad22[2];
    s32 unk24;
    u16 unk28;
    u16 unk2A;
};
struct func_800065EC_Struct1 {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
};
extern void func_80007BD0(void *, s32);
extern void func_800080D4(void *, s32);
extern void func_800085A0(void *, s32);
extern void func_80008A0C(void *, s32);
extern void func_80008E60(void *, s32);
extern void func_80009190(void *, s32);
extern void func_8000A060(void *, s32);
extern void func_8000A780(void *, s32);
extern void func_8000B960(void *, s32);
extern void func_8000BAD8(void *, s32);
extern void func_8000D100(void *, s32);
extern void func_80011900(void *, s32);
extern void func_80013730(void *, s32);

s32 func_800065EC(void *a0, void *a1) {
    struct func_800065EC_Struct *arg0 = a0;
    struct func_800065EC_Struct1 *arg1 = a1;

    arg0->unk2A = arg1->unkA;
    arg0->unk20 = arg1->unk0;
    arg0->unk24 = arg1->unk4;
    arg0->unk28 = arg1->unk8;
    switch (arg0->unk2A) {
    case 1: func_80007BD0(arg0, arg1->unkC); break;
    case 2: func_800080D4(arg0, arg1->unkC); break;
    case 3: func_800085A0(arg0, arg1->unkC); break;
    case 4: func_80008A0C(arg0, arg1->unkC); break;
    case 5: func_80008E60(arg0, arg1->unkC); break;
    case 6: func_8000B960(arg0, arg1->unkC); break;
    case 12: func_8000BAD8(arg0, arg1->unkC); break;
    case 7: func_8000D100(arg0, arg1->unkC); break;
    case 13: func_80011900(arg0, arg1->unkC); break;
    case 8: func_8000A780(arg0, arg1->unkC); break;
    case 9: func_80009190(arg0, arg1->unkC); break;
    case 10: func_8000A060(arg0, arg1->unkC); break;
    case 11: func_80013730(arg0, arg1->unkC); break;
    }
    return 0;
}


extern u32 D_8008D5C8[];
extern u32 D_8008D5CC;

u32 func_8000671C(void)
{
  int new_var;
  u32 limit;
  u32 temp_v1;
  limit = D_8008D5CC;
  ;
  if (D_8008D5C8[0] < D_8008D5CC)
  {
 new_var = D_8008D5C8[0] ^ 0; do { } while (0);
    D_8008D5C8[0] += 0x40;
    return new_var;
  }
  return D_8008D5C8[0];
}


extern u32 D_8008D5C0[];
extern u32 D_8008D5C4;

u32 func_80006754(void)
{
  int new_var;
  u32 limit;
  u32 temp_v1;
  limit = D_8008D5C4;
  ;
  if (D_8008D5C0[0] < D_8008D5C4)
  {
 new_var = D_8008D5C0[0] ^ 0; do { } while (0);
    D_8008D5C0[0] += 0x10;
    return new_var;
  }
  return D_8008D5C0[0];
}

