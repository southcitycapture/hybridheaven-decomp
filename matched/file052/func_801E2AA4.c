#include "context.h"
extern s32 D_801E57B8;
extern struct func_801E2B54_Struct_A *D_8038D8D0;
extern void func_801C1000(s32 arg0, s32 arg1);
extern s32 func_8038D28C(s32);

struct func_801E2AA4_Struct_C {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E2AA4_Struct_B {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_801E2AA4_Struct_C *unk30;
};

struct func_801E2AA4_Struct_A {
    u8 pad[0x24];
    struct func_801E2AA4_Struct_B *unk24;
};

extern f32 D_801E5998;

s32 func_801E2AA4(s32 arg0, s32 arg1) {
    if (D_801E57B8 >= 0x10) {
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk30->unk4 = 0.0f;
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk30->unk8 = 0.0f;
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk30->unkC = D_801E5998;
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk22 = 1;
        func_801C1000(3, 0);
        func_8038D28C(0x210);
        return 4;
    }
    D_801E57B8 += 1;
    return 3;
}
