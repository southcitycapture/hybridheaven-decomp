#include "common.h"
extern void *D_8038D8D0;
typedef struct func_801E2CA8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2CA8_Struct2;
typedef struct func_801E2CA8_Struct1 {
    u8 pad0[0x30];
    func_801E2CA8_Struct2 *unk30;
} func_801E2CA8_Struct1;
#define O(i) (((func_801E2CA8_Struct1 **)D_8038D8D0)[i]->unk30)

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);

s32 func_801E397C(s32 arg0, s32 arg1) {
    f32 temp_fv0;

    temp_fv0 = (f32) func_801C1134(3, 1) / 10.0f;
    O(2)->unk4 = (-15.0f * temp_fv0) + 15.0f, O(3)->unk4 = ((0.0f - -15.0f) * temp_fv0) + -15.0f;
    if (func_801C1088(3, 1, 10) != 0) {
        func_801C10D8(3, 1);
        return 9;
    }
    return 8;
}
