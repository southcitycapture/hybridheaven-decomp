#include "context.h"

typedef struct func_801E68D4_StructZ {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E68D4_StructZ;

typedef struct func_801E68D4_StructY {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E68D4_StructZ *unk30;
} func_801E68D4_StructY;

typedef struct func_801E68D4_StructX {
    u8 pad0[0x2C];
    func_801E68D4_StructY *unk2C;
} func_801E68D4_StructX;

extern f32 D_801EA55C;
extern void func_801E67BC(void);

s32 func_801E68D4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012E1FBF) != 0) {
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unk4 = 0.0f;
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unk8 = 13.0f;
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unkC = D_801EA55C;
        func_801C1000(3, 8);
        func_801E67BC();
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk22 = 1;
        return 2;
    }
    return 1;
}
