#include "context.h"

extern void func_801CE3C4(s32);
extern void func_801CE3D0(s32 arg0);
extern struct func_801E64F4_Struct1 *D_801DAB14;

typedef struct func_801E58F8_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E58F8_StructD;

typedef struct func_801E58F8_StructC {
    u8 pad0[0x2C];
    func_801E58F8_StructD *unk2C;
} func_801E58F8_StructC;

typedef struct func_801E58F8_StructB {
    u8 pad0[0x24];
    func_801E58F8_StructC *unk24;
} func_801E58F8_StructB;

typedef struct func_801E58F8_StructA {
    u8 pad0[8];
    func_801E58F8_StructB *unk8;
} func_801E58F8_StructA;

extern f32 D_801E8D30;
extern f32 D_801E8D34;

s32 func_801E58F8(s32 arg0, s32 arg1) {
    func_801E58F8_StructC *temp_v0;

    temp_v0 = ((func_801E58F8_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801E58F8_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = D_801E8D30;
        ((func_801E58F8_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801E8D34;
        ((func_801E58F8_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x03480054, 0, 1, 1.0f);
        func_801CE3C4(1);
        func_801CE3D0(1);
        return 3;
    }
    return 2;
}
