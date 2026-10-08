#include "context.h"

typedef struct func_801C0AF8_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801C0AF8_StructInner;

typedef struct func_801C0AF8_StructMid {
    u8 pad[0x2C];
    func_801C0AF8_StructInner *unk2C;
} func_801C0AF8_StructMid;

typedef struct func_801C0AF8_StructArg0 {
    u8 pad[0x24];
    func_801C0AF8_StructMid *unk24;
} func_801C0AF8_StructArg0;

void func_801C0AF8(func_801C0AF8_StructArg0 *arg0, s32 arg1) {
    func_801C0AF8_StructInner *temp_v0;
    s16 temp_v1;

    temp_v0 = arg0->unk24->unk2C;
    temp_v1 = temp_v0->unk12;
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        temp_v0->unk12 = temp_v1 - 0x10;
    }
}
