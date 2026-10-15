#include "context.h"
typedef struct func_801E397C_Struct_C {
    s32 pad0;
    f32 unk4;
    s32 pad8;
    f32 unkC;
} func_801E397C_Struct_C;
typedef struct func_801E397C_Struct_B {
    u8 pad0[0x30];
    func_801E397C_Struct_C *unk30;
} func_801E397C_Struct_B;
typedef struct func_801E397C_Struct_A {
    u8 pad0[0x8];
    func_801E397C_Struct_B *unk8;
} func_801E397C_Struct_A;
extern func_801E397C_Struct_A *D_8038D8D0;
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern void func_801C0EB0(s32, s32);

typedef struct func_801E34C4_Struct_C {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_801E34C4_Struct_C;

typedef struct func_801E34C4_Struct_B {
    u8 pad0[0x30];
    func_801E34C4_Struct_C *unk30;
} func_801E34C4_Struct_B;

typedef struct func_801E34C4_Struct_A {
    u8 pad0[0x4];
    func_801E34C4_Struct_B *unk4;
} func_801E34C4_Struct_A;

extern f64 D_801E9500;
extern f32 D_801E9508;
extern f64 D_801E9510;

s32 func_801E34C4(s32 arg0, s32 arg1) {
    f32 temp_fv1;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 1);
        return 3;
    }
    temp_fv1 = (f32) ((func_80034C24(func_801C0F18(3, 1)) / D_801E9500) / 0.5);
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unk4 = (f32) ((10.5f * temp_fv1) + D_801E9508);
    ((func_801E34C4_Struct_A *) D_8038D8D0)->unk4->unk30->unkC = (f32) (((f64) temp_fv1 * 10.5) + D_801E9510);
    return 2;
}
