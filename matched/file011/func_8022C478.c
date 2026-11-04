#include "common.h"
typedef struct func_80233288_Struct {
    u8 pad[4];
    u8 count;
    u8 pad2;
} func_80233288_Struct;
extern struct func_80233288_Struct D_80183CE0[];
extern u8 D_801BBBF0[];


typedef struct func_8022C478_StructEntry {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    u8 unk4;
    u8 unk5;
} func_8022C478_StructEntry;

typedef struct func_8022C478_StructTable {
    func_8022C478_StructEntry first[0x56];
    func_8022C478_StructEntry second[0x56];
} func_8022C478_StructTable;

typedef struct func_8022C478_StructObj {
    u8 pad0[0xA8];
    func_8022C478_StructEntry entries[0x56];
    u8 pad2AC[0x385 - 0x2AC];
    u8 unk385;
    u8 pad386[2];
    u8 unk388;
    u8 pad389[2];
    u8 unk38B;
    u8 pad38C[2];
    u8 unk38E;
    u8 unk38F;
} func_8022C478_StructObj;

typedef struct func_8022C478_StructParent {
    u8 pad0[0x44C];
} func_8022C478_StructParent;

void func_8022C478(func_8022C478_StructObj *obj) {
    u32 base;
    void *target;
    u8 i;

    base = (u32)obj - 0x44C;
    target = D_801BBBF0;
    if (target) {
    }
    obj->unk385 = obj->unk388 = obj->unk38B = 0;
    for (i = 0; i < 0x56; i++) {
        if ((void *)base == target) {
            obj->entries[i] = ((func_8022C478_StructTable *)D_80183CE0)->first[i];
        } else {
            obj->entries[i] = ((func_8022C478_StructTable *)D_80183CE0)->second[i];
        }
        obj->entries[i].unk4 = 0;
        if (obj->entries[i].unk0 != 0) {
            if (i < 0xE) {
                obj->unk385++;
            } else if (i < 0x22) {
                obj->unk388++;
            } else if (i < 0x39) {
                obj->unk38B++;
            } else if (i < 0x3E) {
                obj->unk38E++;
            } else if (i < 0x4E) {
                obj->unk38F++;
            }
        }
    }
}
