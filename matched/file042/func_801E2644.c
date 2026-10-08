#include "context.h"

extern s32 func_801C0DE4(s32 a0, s32 a1, s32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern void func_8038D28C(s32 a0);
extern f64 func_80034C24(u64 time);
extern f64 D_801E5010;

typedef struct func_801E2644_Struct3 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2644_Struct3;

typedef struct func_801E2644_Struct2 {
    u8 pad0[0x30];
    func_801E2644_Struct3 *unk30;
} func_801E2644_Struct2;

typedef struct func_801E2644_Struct1 {
    func_801E2644_Struct2 *unk0;
} func_801E2644_Struct1;

extern func_801E2644_Struct1 *D_8038D8D0;

s32 func_801E2644(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 0, 0x40200000) != 0) {
        func_801C0EB0(3, 0);
        func_8038D28C(0x253);
        return 4;
    }
    temp_ret = func_801C0F18(3, 0);
    D_8038D8D0->unk0->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E5010)) / 2.5f) * 13.0f + -32.0f);
    return 3;
}
