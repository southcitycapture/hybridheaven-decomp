#include "context.h"

typedef struct func_801E6244_StructC {
    u8 pad[8];
    f32 unk8;
    f32 unkC;
} func_801E6244_StructC;
typedef struct func_801E6244_StructB {
    u8 pad[0x30];
    func_801E6244_StructC *unk30;
} func_801E6244_StructB;
typedef struct func_801E6244_StructA {
    u8 pad[0x24];
    func_801E6244_StructB *unk24;
} func_801E6244_StructA;
extern f32 D_801EA554;
extern f32 D_801EA558;
extern f32 D_801EA5F0[];

s32 func_801E6244(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C1088(3, 6, 0x61) != 0) {
        func_801C10D8(3, 6);
        return 7;
    }
    temp = (f32)func_801C1134(3, 6) / 97.0f;
    ((func_801E6244_StructA *)D_8038D8D0)->unk24->unk30->unk8 =
        D_801EA5F0[1] + (D_801EA554 - D_801EA5F0[1]) * temp;
    ((func_801E6244_StructA *)D_8038D8D0)->unk24->unk30->unkC =
        D_801EA5F0[2] + (D_801EA558 - D_801EA5F0[2]) * temp;
    func_801E5C00();
    return 6;
}
