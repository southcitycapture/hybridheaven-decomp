#include "common.h"
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
extern struct func_801E397C_Struct_A *D_8038D8D0;
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);


extern f64 D_801E95F0;
extern f32 D_801E95F8[];
extern f32 D_801E95FC;
extern f32 D_801E9600;

typedef struct func_801E41E4_Struct {
    u8 pad[0x14];
    func_801E397C_Struct_B *unk14;
} func_801E41E4_Struct;

s32 func_801E41E4(s32 arg0, s32 arg1) {
    f32 temp;
    f64 divisor = 1.0;
    f64 current;

    if (func_801C0DE4(3, 5, 0x3F800000) != 0) {
        func_801C0EB0(3, 5);
        return 6;
    }
    current = func_80034C24(func_801C0F18(3, 5));
    temp = D_801E95F8[arg0 & 0] * (f32)((current / D_801E95F0) / divisor);
    ((func_801E41E4_Struct *)D_8038D8D0)->unk14->unk30->unk4 = temp + D_801E95FC;
    ((func_801E41E4_Struct *)D_8038D8D0)->unk14->unk30->unkC = temp + D_801E9600;
    return 5;
}
