#include "common.h"


typedef struct func_801393D0_Struct {
    u16 id;
    u8 pad[2];
    void *data;
} func_801393D0_Struct;

extern u16 D_8017BC7C[];

void func_801393D0(func_801393D0_Struct *arg0, u8 *arg1, u16 arg2) {
    s32 i;

    for (i = 0; i < arg2; i++) {
        arg0[i].id = D_8017BC7C[i];
        arg0[i].data = arg1 + i * 16;
    }
    arg0->id = arg2;
}

extern u8 D_801BD960[];

extern void func_800279F0(void *a0, s32 a1);

void func_801394CC(void) {
    func_800279F0(&D_801BD960, 0x20);
}


void func_801394F4(void) {
    s32 i;
    s32 j;

    for (i = 0; i < 8; i++) {
        j = 0;
        do {
            D_801BD960[i * 4 + j] = 1;
            j++;
        } while (j < 4);
    }
}



void func_80139528(s32 arg0) {
    s32 *unused = &arg0;
    arg0 &= 0xFF;
    D_801BD960[arg0] = 1;
}


void func_80139544(s32 arg0) {
    s32 *p = &arg0;
    arg0 &= 0xFF;
    D_801BD960[arg0] = 0;
}


typedef struct func_8013955C_StructVector {
    s32 x;
    s32 y;
    f32 z;
} func_8013955C_StructVector;

typedef struct func_8013955C_StructEntry {
    u8 pad[0x24];
    func_8013955C_StructVector value;
    u8 pad30[0x10];
} func_8013955C_StructEntry;

extern func_8013955C_StructEntry D_801BCE60[];

void func_8013955C(u16 arg0, func_8013955C_StructVector *arg1,
                   func_8013955C_StructVector *arg2) {
    func_8013955C_StructEntry *entry;
    u16 i;
    func_8013955C_StructVector *value;

    entry = D_801BCE60;
    arg1->z = 1.0f;
    if (arg2 != NULL) {
        arg2->z = 1.0f;
    }
    for (i = 0; i < arg0; i++) {
        if (i < 0x13 || arg2 == NULL) {
            value = arg1;
        } else {
            value = arg2;
        }
        entry->value = *value;
        entry++;
    }
}

/* hh-block asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_801395E4.s {"functions":["func_801395E4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_801395E4.s")

/* hh-block asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_80139894.s {"functions":["func_80139894"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_80139894.s")


void func_80139894(s32 a0, s32 a1, s32 a2, s32 a3);

void func_8013A194(s32 a0, s32 a1, s32 a2) {
    func_80139894(a0, a1, a2, 0x1000);
}


typedef struct func_8013A1B4_StructVec {
    s32 x, y, z;
} func_8013A1B4_StructVec;

typedef struct func_8013A1B4_StructState {
    u8 pad0[0xD];
    u8 count;
    u8 padE[0xE];
    func_8013A1B4_StructVec pos;
    u8 pad28[0x4E];
    u8 flag;
} func_8013A1B4_StructState;

typedef struct func_8013A1B4_StructSub {
    u8 pad0[0x5C];
    func_8013A1B4_StructState *state;
} func_8013A1B4_StructSub;

typedef struct func_8013A1B4_StructTransform {
    u8 pad0[0x5C];
    func_8013A1B4_StructVec pos;
} func_8013A1B4_StructTransform;

typedef struct func_8013A1B4_StructObject {
    u8 pad0[0x18];
    func_8013A1B4_StructSub *sub;
    u8 pad1C[0x10];
    func_8013A1B4_StructTransform *transform;
} func_8013A1B4_StructObject;

void func_8013A1B4(arg0, arg1, arg4)
    func_8013A1B4_StructObject **arg0;
    func_8013A1B4_StructVec arg1;
    u32 arg4;
{
    func_8013A1B4_StructSub *sub;
    func_8013A1B4_StructState *state;
    u8 count;
    u8 i;

    sub = arg0[0]->sub;
    state = sub->state;
    count = state->count;
    i = 1;
    if (arg4 & 1) {
        state->flag = 1;
        state->pos = arg1;
        arg0[0]->transform->pos = arg1;
    }
    while (arg4 != 0 && i < count) {
        if (arg4 & 1) {
            arg0[i]->transform->pos = arg1;
        }
        arg4 >>= 1;
        i++;
    }
}


typedef struct func_8013A28C_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8013A28C_Struct;

extern void func_8013A1B4();

void func_8013A28C(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_8013A1B4(a0, *(func_8013A28C_Struct *)&a1, 0x3FFFF);
}

typedef struct func_8013A7D4_Struct {
    u32 x;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8013A7D4_Struct;

typedef struct func_8013A2E0_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8013A2E0_Struct;


void func_8013A2E0(s32 a0, struct func_8013A7D4_Struct arg1) {
    func_8013A1B4(a0, *(func_8013A2E0_Struct *)&arg1, 0xFFFFFF);
}

/* hh-block asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_8013A334.s {"functions":["func_8013A334"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_8013A334.s")

/* hh-block asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_8013A5E8.s {"functions":["func_8013A5E8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/_mrg_keep_text_func_8013A5E8.s")



typedef struct func_8013A7D4_Entry {
    u16 id;
    u16 count;
    u16 unk4;
} func_8013A7D4_Entry;

typedef struct func_8013A7D4_Input {
    u8 pad0[4];
    u16 buttons;
} func_8013A7D4_Input;

typedef struct func_8013A7D4_Sub2 {
    u8 pad0[0x60];
    u16 unk60;
} func_8013A7D4_Sub2;

typedef struct func_8013A7D4_Sub1 {
    u8 pad0[0x2C];
    func_8013A7D4_Sub2 *unk2C;
} func_8013A7D4_Sub1;

typedef struct func_8013A7D4_Arg0 {
    s32 unk0;
    func_8013A7D4_Sub1 *unk4;
} func_8013A7D4_Arg0;

extern void func_8000F2B8(s32, s32, s32, s32);
extern void func_8001DFFC(s32, s32, s32, void *, s32, s32);
extern func_8013A7D4_Input D_80089474;
extern func_8013A7D4_Entry D_801636B0[];
extern func_8013A7D4_Entry D_801636E6[];
extern func_8013A7D4_Entry D_801636EC[];
extern u8 D_8018DF54[];
extern u8 D_8018DF68[];

void func_8013A7D4(func_8013A7D4_Arg0 *arg0, func_8013A7D4_Struct *arg1) {
    u16 id;
    u16 count;
    s32 i;
    func_8013A7D4_Entry *p;
    extern void func_8013A28C();

    id = (u16)((arg1->x & 0xFFFF0000) >> 16);
    if (D_80089474.buttons & 0x1000) {
        for (i = 0; i < 10; i++) {
            if (id == D_801636B0[i].id) {
                break;
            }
        }
        if (i >= 9) {
            i = 0;
        } else {
            i++;
        }
        arg1->x = D_801636B0[i].id << 16;
        arg1->unk4 = 0;
        func_8013A28C(arg0, *arg1);
        id = (u16)((arg1->x & 0xFFFF0000) >> 16);
    }
    p = D_801636B0;
    while (p->id != id) {
        p++;
    }
    count = p->count;
    func_8001DFFC(9, 0x14, 0xA0, D_8018DF54, arg1->x, count);
    func_8001DFFC(0xA, 0x14, 0xAA, D_8018DF68, arg1->unk4, (u16)(arg1->unk8 * 100.0f));
    if (D_80089474.buttons & 0x800) {
        if (arg1->x & 0xFFFF) {
            arg1->x--;
        } else {
            arg1->x = (id << 16) | (count - 1);
        }
        arg1->unk4 = 0;
        func_8013A2E0(arg0, *arg1);
    } else if (D_80089474.buttons & 0x400) {
        if ((arg1->x & 0xFFFF) < count - 1) {
            arg1->x++;
        } else {
            arg1->x = id << 16;
        }
        arg1->unk4 = 0;
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 0x10) {
        arg1->unk6 ^= 2;
        func_8000F2B8(arg0->unk0, 2, 3, 0);
    }
    if (D_80089474.buttons & 0x4000) {
        arg1->unk6 ^= 0x10;
        func_8000F2B8(arg0->unk0, 0x10, 3, 0);
    }
    if (D_80089474.buttons & 0x8000) {
        arg1->unk6 ^= 1;
        func_8000F2B8(arg0->unk0, 1, 3, 0);
    }
    if (arg1->unk6 & 1) {
        arg1->unk4 = arg0->unk4->unk2C->unk60;
        if (D_80089474.buttons & 0x200) {
            if (arg1->unk4 != 0) {
                arg1->unk4 = arg1->unk4 - 1;
            } else {
                arg1->unk4 = 0;
            }
        } else if (D_80089474.buttons & 0x100) {
            arg1->unk4++;
        }
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 2) {
        if (arg1->unk8 > 0.0f) {
            arg1->unk8 -= 0.015625;
        }
        func_8013A2E0(arg0, *arg1);
    } else if (D_80089474.buttons & 1) {
        if (arg1->unk8 <= 0.0f) {
            arg1->unk8 = 0.00390625f;
        } else if (arg1->unk8 > 0.0f) {
            arg1->unk8 += 0.015625;
        }
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 8) {
        if (arg1->unk8 > 0.0f) {
            arg1->unk8 *= 0.5;
        }
        func_8013A2E0(arg0, *arg1);
    } else if (D_80089474.buttons & 4) {
        if (arg1->unk8 <= 0.0f) {
            arg1->unk8 = 0.00390625f;
        } else if (arg1->unk8 > 0.0f) {
            arg1->unk8 = 2.0 * arg1->unk8;
        }
        func_8013A2E0(arg0, *arg1);
    }
    if (D_80089474.buttons & 0x2000) {
        arg1->unk8 = 1.0f;
        func_8013A2E0(arg0, *arg1);
    }
}


extern void func_80010550(s32, s32);
extern void func_8013A5E8(s32, s32);

typedef struct func_8013ADD4_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_8013ADD4_Struct;

void func_8013ADD4(func_8013ADD4_Struct *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = arg0->unk5C;
    func_80010550(arg1, temp_a2);
    func_8013A7D4((func_8013A7D4_Arg0 *)arg1, (func_8013A7D4_Struct *)(temp_a2 + 0x1C));
    func_8013A5E8(arg1, 0);
}


typedef struct func_8013AE20_StructTable { u16 v[12]; } func_8013AE20_StructTable;
typedef struct func_8013AE20_StructId { u8 pad[14]; u16 id; } func_8013AE20_StructId;
typedef struct func_8013AE20_StructInput { u8 pad[0x5C]; func_8013AE20_StructId *info; } func_8013AE20_StructInput;
typedef struct func_8013AE20_StructValue { u8 pad[0x28]; s32 value; } func_8013AE20_StructValue;
typedef struct func_8013AE20_StructNode { u8 pad[0x2C]; func_8013AE20_StructValue *next; } func_8013AE20_StructNode;
typedef struct func_8013AE20_StructOutput { u8 pad[0x24]; func_8013AE20_StructNode *a; u8 pad28[8]; func_8013AE20_StructNode *b; } func_8013AE20_StructOutput;
typedef struct func_8013AE20_StructResource { s32 unk0; s32 *data; } func_8013AE20_StructResource;
extern func_8013AE20_StructResource *D_80171CF0[];
extern func_8013AE20_StructTable D_8017BCCC, D_8017BCE4, D_8017BCFC, D_8017BD14;
extern func_8013AE20_StructTable D_8017BD2C, D_8017BD44, D_8017BD5C, D_8017BD74;

void func_8013AE20(void *arg0, func_8013AE20_StructOutput *arg1, u8 arg2) {
    func_8013AE20_StructId *info = ((func_8013AE20_StructInput *)arg0)->info;
    func_8013AE20_StructTable spBC = D_8017BCCC;
    func_8013AE20_StructTable spA4 = D_8017BCE4;
    func_8013AE20_StructTable sp8C = D_8017BCFC;
    func_8013AE20_StructTable sp74 = D_8017BD14;
    func_8013AE20_StructTable sp5C = D_8017BD2C;
    func_8013AE20_StructTable sp44 = D_8017BD44;
    func_8013AE20_StructTable sp2C = D_8017BD5C;
    func_8013AE20_StructTable sp14 = D_8017BD74;
    u16 *table;
    u16 id;
    s32 *data;
    id = info->id;
    if (id == 0x29) { table = spBC.v; goto selected; }
    if (id == 0x2B) { table = spA4.v; goto selected; }
    if (id == 0x2C) { table = sp8C.v; goto selected; }
    if (id == 0x2D) { table = sp74.v; goto selected; }
    if (id == 0x11B) { table = sp5C.v; goto selected; }
    if (id == 0x11C) { table = sp44.v; goto selected; }
    if (id == 0x57) { table = sp2C.v; goto selected; }
    if (id == 0x4057) {
        table = sp14.v;
selected:
#define P ((u16 *)((u32)table + (u16)(arg2 * 4) * 2))
        data = D_80171CF0[P[0] - 1]->data;
        arg1->a->next->value = data[P[1]];
        data = D_80171CF0[P[2] - 1]->data;
        arg1->b->next->value = data[P[3]];
    }
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_801393D0[] = {
    0x73, 0x74, 0x5F, 0x70, 0x6C, 0x61, 0x6E, 0xCD, 0xD1, 0xBD, 0xE9, 0xB4, 0xFC, 0xB2, 0xBD, 0xA5,
    0xBF, 0xA5, 0xB9, 0xA5, 0xAF, 0x0A, 0x00, 0x00, 0x73, 0x74, 0x5F, 0x70, 0x6C, 0x61, 0x6E, 0xCD,
    0xD1, 0xBD, 0xE9, 0xB4, 0xFC, 0xB2, 0xBD, 0xA5, 0xBF, 0xA5, 0xB9, 0xA5, 0xAF, 0x20, 0x3A, 0x20,
    0xBB, 0xD8, 0xC4, 0xEA, 0xA4, 0xB7, 0xA4, 0xBF, 0xC8, 0xE2, 0xA4, 0xAB, 0xA4, 0xE9, 0xBB, 0xCF,
    0xA4, 0xDE, 0xA4, 0xE9, 0xA4, 0xCA, 0xA4, 0xAB, 0xA4, 0xC3, 0xA4, 0xBF, 0xA4, 0xCE, 0xA4, 0xC7,
    0xBC, 0xC2, 0xB9, 0xD4, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00,
    0x73, 0x74, 0x5F, 0x70, 0x6C, 0x61, 0x6E, 0xCD, 0xD1, 0xBD, 0xE9, 0xB4, 0xFC, 0xB2, 0xBD, 0xA5,
    0xBF, 0xA5, 0xB9, 0xA5, 0xAF, 0xBC, 0xC2, 0xB9, 0xD4, 0x0A, 0x00, 0x00, 0x69, 0x6E, 0x69, 0x74,
    0x5F, 0x6F, 0x62, 0x6A, 0x20, 0x3A, 0x20, 0x42, 0x67, 0x6D, 0x58, 0xB1, 0xE9, 0xC1, 0xD5, 0xA4,
    0xC7, 0xA1, 0xA2, 0xA5, 0xED, 0xA1, 0xBC, 0xA5, 0xC9, 0xA4, 0xC7, 0xBB, 0xCF, 0xA4, 0xDE, 0xA4,
    0xC3, 0xA4, 0xBF, 0xA4, 0xBF, 0xA4, 0xE1, 0xB1, 0xE9, 0xC1, 0xD5, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4,
    0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xBB, 0xD8, 0xC4, 0xEA, 0xA4, 0xB7, 0xA4, 0xBF,
    0xC8, 0xE2, 0xC0, 0xDC, 0xC2, 0xB3, 0xC8, 0xD6, 0xB9, 0xE6, 0xA4, 0xAB, 0xA4, 0xE9, 0xBB, 0xCF,
    0xA4, 0xDE, 0xA4, 0xC3, 0xA4, 0xBF, 0xBB, 0xFE, 0xA4, 0xCE, 0xA4, 0xDF, 0xB2, 0xBB, 0xB3, 0xDA,
    0xB1, 0xE9, 0xC1, 0xD5, 0x0A, 0x00, 0x00, 0x00, 0xC8, 0xE2, 0xC0, 0xDC, 0xC2, 0xB3, 0xC8, 0xD6,
    0xB9, 0xE6, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x20, 0x20, 0xBB, 0xD8, 0xC4, 0xEA, 0xC8, 0xD6, 0xB9,
    0xE6, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x0A, 0x00, 0xA1, 0xE3, 0xA1, 0xE3, 0xB1, 0xE9, 0xC1, 0xD5,
    0xB3, 0xAB, 0xBB, 0xCF, 0xA1, 0xE4, 0xA1, 0xE4, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x25, 0x66, 0x25, 0x61, 0x4F, 0x50, 0x45, 0x4E, 0x49, 0x4E, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x62, 0x5F, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x25, 0x64, 0x20, 0xA4, 0xCF, 0x20, 0xA5, 0xE2, 0xA5,
    0xC7, 0xA5, 0xEB, 0xC5, 0xF6, 0xA4, 0xEA, 0xA5, 0xC7, 0xA1, 0xBC, 0xA5, 0xBF, 0xA4, 0xAC, 0xA4,
    0xA2, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x62, 0x5F, 0x6B, 0x69,
    0x6E, 0x64, 0x20, 0x25, 0x64, 0x20, 0x20, 0xA5, 0xE2, 0xA5, 0xC7, 0xA5, 0xEB, 0xC5, 0xF6, 0xA4,
    0xEA, 0xA5, 0xC7, 0xA1, 0xBC, 0xA5, 0xBF, 0x20, 0x69, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x20, 0x20,
    0x61, 0x74, 0x61, 0x72, 0x69, 0x5F, 0x72, 0x20, 0x25, 0x66, 0x0A, 0x00, 0xBF, 0xC8, 0xC4, 0xB9,
    0x28, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x29, 0x20, 0x25, 0x66, 0x20, 0xC2, 0xCE, 0x28, 0x62,
    0x6F, 0x64, 0x79, 0x5F, 0x6C, 0x29, 0x20, 0x25, 0x66, 0x20, 0xB5, 0xD3, 0xA4, 0xCE, 0xC4, 0xB9,
    0xA4, 0xB5, 0x28, 0x66, 0x6F, 0x6F, 0x74, 0x29, 0x20, 0x25, 0x66, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0xBC, 0xEA, 0xA4, 0xCE, 0xC4, 0xB9, 0xA4, 0xB5, 0x20, 0x72, 0x5F, 0x61, 0x72, 0x6D, 0x20, 0x25,
    0x66, 0x20, 0x6C, 0x5F, 0x61, 0x72, 0x6D, 0x20, 0x25, 0x66, 0x0A, 0x00, 0xB8, 0xAA, 0xC9, 0xFD,
    0x28, 0x73, 0x68, 0x6F, 0x75, 0x6C, 0x64, 0x65, 0x72, 0x29, 0x20, 0x25, 0x66, 0x20, 0xCA, 0xA2,
    0xB8, 0xFC, 0x28, 0x73, 0x74, 0x6F, 0x6D, 0x61, 0x63, 0x68, 0x5F, 0x66, 0x29, 0x20, 0x25, 0x66,
    0x20, 0xBF, 0xAC, 0xC8, 0xF8, 0x20, 0x25, 0x66, 0x0A, 0x00, 0x00, 0x00, 0x45, 0x72, 0x72, 0x6F,
    0x72, 0x20, 0x64, 0x5B, 0x25, 0x64, 0x5D, 0x2D, 0x3E, 0x67, 0x6D, 0x74, 0x78, 0x20, 0x69, 0x73,
    0x20, 0x20, 0x4E, 0x55, 0x4C, 0x4C, 0x21, 0x21, 0x0A, 0x00, 0x00, 0x00, 0x25, 0x64, 0x20, 0xA4,
    0xCE, 0x20, 0x67, 0x6D, 0x74, 0x78, 0xA4, 0xAC, 0xA1, 0xA2, 0xA4, 0xDE, 0xA4, 0xC0, 0xA5, 0xEA,
    0xA5, 0xF3, 0xA5, 0xAF, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4, 0xBB,
    0xA4, 0xF3, 0x00, 0x00, 0x6D, 0x6F, 0x74, 0x5F, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x25, 0x78, 0x20,
    0x20, 0x6D, 0x61, 0x78, 0x20, 0x25, 0x64, 0x00, 0x6D, 0x6F, 0x74, 0x20, 0x61, 0x6E, 0x69, 0x6D,
    0x65, 0x5F, 0x6E, 0x6F, 0x20, 0x25, 0x64, 0x20, 0x20, 0x73, 0x70, 0x65, 0x65, 0x64, 0x20, 0x25,
    0x64, 0x00, 0x00, 0x00, 0x80, 0x13, 0x99, 0x78, 0x80, 0x13, 0x99, 0x90, 0x80, 0x13, 0x99, 0x90,
    0x80, 0x13, 0x99, 0x84, 0x80, 0x13, 0x99, 0x90, 0x80, 0x13, 0x99, 0x90, 0x80, 0x13, 0x99, 0x90,
    0x80, 0x13, 0x99, 0x90, 0x80, 0x13, 0x99, 0x84, 0x80, 0x13, 0x99, 0x84, 0x80, 0x13, 0x99, 0x90,
    0x80, 0x13, 0x99, 0x90, 0x80, 0x13, 0x99, 0x90, 0x80, 0x13, 0x99, 0x84, 0x3C, 0x23, 0xD7, 0x0A,
    0x3F, 0xEC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
