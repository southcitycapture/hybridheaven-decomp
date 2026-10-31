#include "common.h"
extern u8 D_8008EF70[];


typedef struct func_8001B0B0_StructSub {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad;
    s16 unk6;
    u16 unk8;
    u8 unkA;
} func_8001B0B0_StructSub;

typedef struct func_8001B0B0_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[9];
    func_8001B0B0_StructSub *unk2C;
} func_8001B0B0_Struct;

typedef struct func_8001B0B0_StructRecord {
    u8 flag;
    u8 value;
    s16 x;
    s16 y;
    u16 param;
    u8 pad[0x112];
} func_8001B0B0_StructRecord;

void func_8001B0B0(s32 arg0, func_8001B0B0_Struct **arg1) {
    register u32 i;
    func_8001B0B0_StructRecord *src;

    i = 0, src = (func_8001B0B0_StructRecord *)D_8008EF70;
loop:
    if (src->flag == 1) {
        src->flag = 0;
        arg1[i]->unk22 = src->value;
        arg1[i]->unk2C->unk0 = src->x;
        arg1[i]->unk2C->unk2 = src->y;
        arg1[i]->unk2C->unk4 = 0;
        arg1[i]->unk2C->unk6 = 0;
        arg1[i]->unk2C->unk8 = src->param;
        arg1[i]->unk2C->unkA = 0;
    }
    i++;
    src++;
    if (i != 0x1C) goto loop;
}
