#include "common.h"


typedef struct func_801FEAE0_Struct {
    s16 x, y, w, h;
    u8 r, g, b, a;
    u8 r2, g2, b2, a2;
    u16 flags;
    s16 unk12;
    u8 pad14[4];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28, unk2A, unk2C, unk2E, unk30, unk32;
} func_801FEAE0_Struct;
typedef struct func_801FEAE0_StructData {
    u16 *unk0;
    s32 *unk4;
} func_801FEAE0_StructData;
typedef struct func_801FEAE0_StructDesc {
    u8 pad[12];
    func_801FEAE0_Struct *unkC;
} func_801FEAE0_StructDesc;
extern func_801FEAE0_StructData *D_80172570;
extern func_801FEAE0_StructDesc D_80181A84;
extern s32 func_80146088(void *, func_801FEAE0_StructDesc *, s8 *);

s32 func_801FEAE0(arg0, arg1, arg2, arg3, arg4, arg5, arg6)
    void *arg0;
    u8 arg1;
    s16 arg2;
    s16 arg3;
    s32 arg4;
    s8 *arg5;
    volatile u8 arg6;
{
    u8 unusedTail[8];
    func_801FEAE0_Struct sp24;
    func_801FEAE0_StructData **dataRef = &D_80172570;

    sp24.x = arg2;
    sp24.y = arg3;
    sp24.unk30 = sp24.w = 12;
    sp24.unk32 = sp24.h = 16;
    if (arg6 == 0) {
        sp24.r = 255;
        sp24.g = 48;
        sp24.b = 0;
        sp24.a = 255;
    } else {
        s32 m = arg6;
        if (m == 1) {
            sp24.r = 0;
            sp24.g = 255;
            sp24.b = 48;
            sp24.a = 255;
        } else if (m == 3) {
            sp24.r = 255, sp24.g = 48;
            sp24.b = 0;
            sp24.a = 255;
        } else {
            sp24.r = 255;
            sp24.g = 144;
            sp24.b = 0;
            sp24.a = 255;
        }
    }
    sp24.b2 = sp24.g2 = sp24.r2 = 0;
    sp24.a2 = 255;
    sp24.flags = ((u16)arg4 & (u16)~0x46) | 0x46;
    sp24.unk12 = 0;
    sp24.unk18 = *(*dataRef)->unk0;
    sp24.unk1C = *(*dataRef)->unk4;
    sp24.unk28 = 128;
    sp24.unk2A = 16;
    sp24.unk2E = arg1 * 12;
    sp24.unk2C = 0;
    D_80181A84.unkC = &sp24;
    return func_80146088(arg0, &D_80181A84, arg5);
}
