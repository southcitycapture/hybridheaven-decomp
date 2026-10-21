#include "common.h"


typedef struct func_80000460_Struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad6[0x882];
    s32 unk888;
    s32 unk88C;
    s32 unk890;
    s32 unk894;
    s32 unk898;
    s32 unk89C;
    s32 unk8A0;
    s32 unk8A4;
    s64 unk8A8;
    s64 unk8B0;
    s64 unk8B8;
    s64 unk8C0;
} func_80000460_Struct;

extern void func_80028260(void *, s32, void *, void *, void *, s32);
extern void func_800295D0(s32);
extern void func_80029FA0(void *);
extern void func_8002FB60(s32, void *, s32);
extern void func_80030610(void *, void *, s32);
extern void func_800329F0(void *, s32, u8);
extern void func_800346C0(s32);
extern void func_80034C90(void *);
extern u8 D_80049990[];
extern u8 D_8004FBD0[];
extern u8 D_80051BD0[];
extern u8 D_80053BD0[];
extern u8 D_80055BD0[];
extern u8 func_80000774[];
extern u8 func_80000A5C[];
extern u8 func_80000BF0[];
extern u8 func_80000DC8[];

void func_80000460(func_80000460_Struct *arg0, u8 arg1, u8 arg2) {
    arg0->unk0 = 1;
    arg0->unk2 = 3;
    arg0->unk88C = 0;
    arg0->unk890 = 0;
    arg0->unk894 = 0;
    arg0->unk888 = 0;
    arg0->unk89C = 0;
    arg0->unk898 = 0;
    arg0->unk8A0 = 1;
    arg0->unk8A4 = 1;
    arg0->unk4 = 4;
    arg0->unk8A8 = 0;
    arg0->unk8B0 = 0;
    arg0->unk8B8 = 0;
    arg0->unk8C0 = 0;
    func_80030610((u8 *)arg0 + 0xB0, (u8 *)arg0 + 0xC8, 8);
    func_80030610((u8 *)arg0 + 0xE8, (u8 *)arg0 + 0x100, 8);
    func_80030610((u8 *)arg0 + 0x120, (u8 *)arg0 + 0x138, 8);
    func_80030610((u8 *)arg0 + 0x40, (u8 *)arg0 + 0x58, 8);
    func_80030610((u8 *)arg0 + 0x78, (u8 *)arg0 + 0x90, 8);
    func_80030610((u8 *)arg0 + 8, (u8 *)arg0 + 0x20, 8);
    func_80030610((u8 *)arg0 + 0x158, (u8 *)arg0 + 0x170, 8);
    func_80030610((u8 *)arg0 + 0x190, (u8 *)arg0 + 0x1A8, 8);
    func_800346C0(0xFE);
    func_80029FA0(D_80049990 + arg1 * 0x50);
    func_800295D0(1);
    func_800329F0((u8 *)arg0 + 0xB0, 0x29A, arg2);
    func_8002FB60(4, (u8 *)arg0 + 0xE8, 0x29B);
    func_8002FB60(9, (u8 *)arg0 + 0x120, 0x29C);
    func_8002FB60(0xE, (u8 *)arg0 + 0xB0, 0x29D);
    func_8002FB60(0xC, (u8 *)arg0 + 0xB0, 0x29E);
    func_80028260((u8 *)arg0 + 0x1C8, 0x13, func_80000774, arg0, D_8004FBD0, 0x82);
    func_80034C90((u8 *)arg0 + 0x1C8);
    func_80028260((u8 *)arg0 + 0x378, 0x12, func_80000A5C, arg0, D_80051BD0, 0x78);
    func_80034C90((u8 *)arg0 + 0x378);
    func_80028260((u8 *)arg0 + 0x528, 0x11, func_80000BF0, arg0, D_80053BD0, 0x64);
    func_80034C90((u8 *)arg0 + 0x528);
    func_80028260((u8 *)arg0 + 0x6D8, 0x10, func_80000DC8, arg0, D_80055BD0, 0x6E);
    func_80034C90((u8 *)arg0 + 0x6D8);
}


s32 func_800006F4(s32 arg0) {
    return arg0 + 8;
}


s32 func_800006FC(s32 arg0) {
    return arg0 + 64;
}


s32 func_80000704(u8 *arg0) {
    return *(s32 *)(arg0 + 0x898);
}


extern void func_800265F0(void *);
extern void func_80026CE0(void *);

void func_8000070C(u8 *arg0) {
    func_800265F0(arg0 + 0x528);
    func_80026CE0(arg0 + 0x528);
    *(s32 *)(arg0 + 0x88C) = 0;
    *(s32 *)(arg0 + 0x894) = 0;
    func_800265F0(arg0 + 0x6D8);
    func_80026CE0(arg0 + 0x6D8);
    func_800265F0(arg0 + 0x378);
    func_80026CE0(arg0 + 0x378);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000774.s")


s32 func_800267F0();                                /* extern, unprototyped: called with 1 or 2 args */

typedef struct func_80000934_Struct {
    struct func_80000934_Struct *unk0;
    s32 unk4;
} func_80000934_Struct;

typedef struct func_80000934_Head {
    u8 pad[0x888];
    func_80000934_Struct *unk888;
} func_80000934_Head;

void func_80000934(func_80000934_Head *arg0, func_80000934_Struct *arg1, s32 arg2) {
    s32 temp_a0;

    temp_a0 = func_800267F0(1);
    arg1->unk4 = arg2;
    arg1->unk0 = arg0->unk888;
    arg0->unk888 = arg1;
    func_800267F0(temp_a0, arg1);
}



void func_80000984(u8 *arg0, s32 *arg1) {
    s32 *var_v1;
    s32 *var_a2;
    s32 temp_a0;

    var_v1 = *(s32 **)(arg0 + 0x888);
    var_a2 = NULL;
    temp_a0 = func_800267F0(1);
    if (var_v1 != NULL) {
loop_1:
        if (var_v1 == arg1) {
            if (var_a2 != NULL) {
                *var_a2 = *arg1;
            } else {
                *(s32 **)(arg0 + 0x888) = (s32 *) *arg1;
            }
        } else {
            var_a2 = var_v1;
            var_v1 = (s32 *) *var_v1;
            if (var_v1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_800267F0(temp_a0, arg1, var_a2);
}


struct func_80000A0C_Node {
    struct func_80000A0C_Node *next; /* 0x00 */
    void *data;                      /* 0x04 */
};

extern void func_80026300(void *a0, void *a1, s32 a2);

void func_80000A0C(u8 *arg0, void *arg1) {
    struct func_80000A0C_Node *node;

    node = *(struct func_80000A0C_Node **)(arg0 + 0x888);
    if (node != NULL) {
        do {
            func_80026300(node->data, arg1, 0);
            node = node->next;
        } while (node != NULL);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000DC8.s")

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

s32 func_80000EC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x89C);
}


extern s16 D_80089356;

typedef struct func_80000ED0_Struct {
    u8 pad[0x898];
    s32 unk898;
    s32 unk89C;
} func_80000ED0_Struct;

typedef struct func_80000ED0_StructInput {
    u8 pad[8];
    u32 unk8;
} func_80000ED0_StructInput;

void func_80000ED0(func_80000ED0_Struct *arg0, void *arg1, func_80000ED0_StructInput *arg2) {
    s32 temp_a0;
    u32 temp_t1;
    u32 temp_v0;

    if (arg2->unk8 & 0x40) {
        if ((D_80089356 == 0) || (temp_v0 = arg0->unk898, temp_v0 == 2)) {
            arg0->unk898++;
            if ((u32)arg0->unk898 >= 3U) {
                arg0->unk898 = 0;
            }
        } else {
            arg0->unk898 = temp_v0 ^ 1;
        }
        temp_a0 = func_800267F0(1);
        arg0->unk89C = arg0->unk89C + 1;
        func_800267F0(temp_a0);
    }
    func_80026300(arg1, arg2, 1);
}


typedef struct func_80000F78_Struct {
    u8 pad[0x89C];
    s32 unk89C;
} func_80000F78_Struct;

void func_80000F78(void *arg0) {
    func_80000F78_Struct *s = (func_80000F78_Struct *) arg0;
    s->unk89C = s->unk89C + 2;
}


void func_80000F88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {

}


struct func_80001010_Struct;
void func_80001010(s32 arg0, s32 arg1, struct func_80001010_Struct *arg2);

extern u8 D_80037358[];
extern u8 D_800374A8[];
extern u8 D_8003761C[];
extern u8 D_8004B414[];
extern u8 D_8004B41C[];
extern u8 D_8004B5B8[];

typedef struct func_80000F9C_StructSub {
    u8 pad[0xF8];
    s32 unkF8;
    u8 pad2[0x10];
    s32 unk10C;
} func_80000F9C_StructSub;

typedef struct func_80000F9C_Struct {
    u8 pad[0x20];
    func_80000F9C_StructSub sub;
    u8 pad2[0x120 - 0x20 - sizeof(func_80000F9C_StructSub)];
    s32 unk120;
} func_80000F9C_Struct;

void func_80000F9C(func_80000F9C_Struct *arg0) {
    func_80000F9C_StructSub *p;

    p = &arg0->sub;
    func_80001010(arg0->unk120, (s32)D_8004B414, (struct func_80001010_Struct *)D_80037358);
    func_80001010(p->unkF8, (s32)D_8004B41C, (struct func_80001010_Struct *)D_800374A8);
    func_80001010(p->unk10C, (s32)D_8004B5B8, (struct func_80001010_Struct *)D_8003761C);
}


typedef struct func_80001010_Struct {
    s32 mask;
    s32 value;
    s32 unused;
} func_80001010_Struct;

void func_80001010(s32 arg0, s32 arg1, func_80001010_Struct *arg2) {
    s32 mask;
    s32 result;

    result = 1;
    mask = arg2->mask;
    if (mask != 0) {
        do {
            if (((mask & arg0) == arg2->value) && (result != 0)) {
                result = 0;
            }
            mask = arg2[1].mask;
            arg2++;
        } while (mask != 0);
    }
}

