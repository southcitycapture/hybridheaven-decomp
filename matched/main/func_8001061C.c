#include "common.h"
typedef struct func_800101D8_Ent {
    s16 a, b, c, pad;
    f32 x, y, z;
} func_800101D8_Ent;
extern func_800101D8_Ent D_80063670[];
typedef struct func_800101D8_Struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_800101D8_Struct;


typedef struct func_8001061C_StructSub {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[4];
    s32 unk28;
    u8 pad2C[0x24];
    f32 unk50;
    u8 pad54[8];
    func_800101D8_Struct unk5C;
} func_8001061C_StructSub;

typedef struct func_8001061C_StructObj {
    u8 pad0[0x2C];
    func_8001061C_StructSub *unk2C;
} func_8001061C_StructObj;

extern func_800101D8_Ent D_80063A30[];

void func_8001061C(func_8001061C_StructObj *arg0, func_800101D8_Struct arg1,
                   s32 arg4, f32 arg5, u16 arg6, u16 arg7, u16 arg8) {
    func_800101D8_Ent first;
    func_800101D8_Ent second;
    func_8001061C_StructSub *sub;
    s16 old0, old1, diff;
    s32 wrapped;
    f32 x;

    first = D_80063670[arg6];
    second = D_80063A30[arg6];
    sub = arg0->unk2C;
    if (sub->unk28 != 0) {
        sub->unk10 = first.a;
        sub->unk12 = first.b;
        sub->unk14 = first.c;
        sub->unk18 = first.x;
        sub->unk1C = first.y;
        sub->unk20 = first.z;
        if (arg5 != 0.0f) {
            old0 = sub->unk10;
            diff = second.a - old0;
            if (diff & 0x1000) {
                wrapped = (diff & 0x1FFF) - 0x2000;
            } else {
                wrapped = diff & 0x1FFF;
            }
            old1 = sub->unk12;
            sub->unk10 = (s16)(old0 + (s16)((f32)wrapped * arg5));
            diff = second.b - old1;
            if (diff & 0x1000) {
                wrapped = (diff & 0x1FFF) - 0x2000;
            } else {
                wrapped = diff & 0x1FFF;
            }
            old0 = sub->unk14;
            sub->unk12 = (s16)(old1 + (s16)((f32)wrapped * arg5));
            diff = second.c - old0;
            if (diff & 0x1000) {
                wrapped = (diff & 0x1FFF) - 0x2000;
            } else {
                wrapped = diff & 0x1FFF;
            }
            x = sub->unk18;
            sub->unk14 = (s16)(old0 + (s16)((f32)wrapped * arg5));
            sub->unk18 = sub->unk18 + ((second.x - x) * arg5);
            sub->unk1C = sub->unk1C + ((second.y - sub->unk1C) * arg5);
            sub->unk20 = sub->unk20 + ((second.z - sub->unk20) * arg5);
        }
        if (arg7 != 0) {
            sub->unk50 = 0.0f;
            sub->unk5C = arg1;
        } else {
            sub->unk50 = (f32)arg8;
        }
    }
}
