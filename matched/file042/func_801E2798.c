#include "common.h"

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
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 a0, s32 a1, s32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
typedef struct func_801E2798_Struct30 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2798_Struct30;
typedef struct func_801E2798_Struct4 {
    u8 pad0[0x30];
    func_801E2798_Struct30 *unk30;
} func_801E2798_Struct4;
typedef struct func_801E2798_Struct0 {
    u8 pad0[0x4];
    func_801E2798_Struct4 *unk4;
} func_801E2798_Struct0;
s32 func_801E2798(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40200000) != 0) {
        func_801C0EB0(3, 1);
        return 3;
    }
    temp_ret = func_801C0F18(3, 1);
    ((func_801E2798_Struct0 *) D_8038D8D0)->unk4->unk30->unk8 = (f32) ((f32) (func_80034C24(temp_ret) / 1000000.0) / 2.5f * 13.0f + -32.0f);
    return 2;
}
