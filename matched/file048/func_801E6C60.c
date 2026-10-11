#include "context.h"

typedef struct func_801E6C60_StructZ {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E6C60_StructZ;

typedef struct func_801E6C60_StructY {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E6C60_StructZ *unk30;
} func_801E6C60_StructY;

typedef struct func_801E6C60_StructX {
    u8 pad0[0x2C];
    func_801E6C60_StructY *unk2C;
} func_801E6C60_StructX;

extern f32 D_801EA560;
extern f32 D_801EA564;
extern void func_801E684C(void);

s32 func_801E6C60(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01CCD0BE) != 0) {
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk30->unk4 = 0.0f;
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk30->unk8 = D_801EA560;
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk30->unkC = D_801EA564;
        func_801C1000(3, 8);
        func_801E684C();
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk22 = 1;
        return 6;
    }
    return 5;
}
