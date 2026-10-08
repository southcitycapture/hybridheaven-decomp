#include "context.h"

typedef struct func_80240F94_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80240F94_Struct2;

typedef struct func_80240F94_Struct1 {
    u8 pad0[0x2C];
    func_80240F94_Struct2 *unk2C;
} func_80240F94_Struct1;

typedef struct func_80240F94_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80240F94_Struct0;

extern f32 D_8025BE00;
extern void func_80240FFC(void);

void func_80240F94(func_80240F94_Struct0 *arg0, func_80240F94_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = D_8025BE00;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80240FFC);
    }
}
