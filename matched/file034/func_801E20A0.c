#include "context.h"
extern u8 func_801DAAF0[];

extern void *func_801CF40C(void);
extern void func_8038BDC0(f32, f32, s32);
extern void D_8038BE10(f32, f32, s32);

struct func_801E20A0_StructC {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E20A0_StructB {
    u8 pad0[0x2C];
    struct func_801E20A0_StructC *unk2C;
};

struct func_801E20A0_StructA {
    u8 pad0[8];
    struct func_801E20A0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E20A0_StructB *unk24;
};

struct func_801E20A0_Struct {
    f32 unk0;
    f32 unk4;
    s32 unk8;
};

s32 func_801E20A0(s32 arg0, s32 arg1) {
    struct func_801E20A0_Struct sp1C;
    struct func_801E20A0_Struct *temp_v0;

    if (((struct func_801E20A0_StructA *) *(struct func_801E20A0_StructA **)(func_801DAAF0 + 0x24))->unk8->unk8->unk24->unk2C->unk4 < -230.0f) {
        return 0xF;
    }
    temp_v0 = func_801CF40C();
    sp1C = *temp_v0;
    func_8038BDC0(sp1C.unk0, sp1C.unk4, sp1C.unk8);
    D_8038BE10(sp1C.unk0, sp1C.unk4, sp1C.unk8);
    return 0xE;
}
