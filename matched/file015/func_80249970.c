#include "context.h"

typedef struct func_80249970_StructSub {
    u8 pad[0x12];
    s16 unk12;
} func_80249970_StructSub;

typedef struct func_80249970_StructInner {
    u8 pad[0x2C];
    func_80249970_StructSub *unk2C;
} func_80249970_StructInner;

typedef struct func_80249970_StructObj {
    u8 pad[0x5C];
    s32 unk5C;
} func_80249970_StructObj;

void func_80249970(func_80249970_StructObj *arg0, func_80249970_StructInner **arg1) {
    func_80249970_StructSub *temp_v0;
    s32 temp_a1;
    extern void func_800058DC();
    extern void func_802499E8();

    temp_a1 = arg0->unk5C;
    func_80010550((s32) arg1, temp_a1);
    temp_v0 = (*arg1)->unk2C;
    temp_v0->unk12 = temp_v0->unk12 + 0x5B;
    temp_v0 = (*arg1)->unk2C;
    if (temp_v0->unk12 >= 0xFDD) {
        temp_v0->unk12 = 0xFDD;
        func_800058DC(arg0, func_802499E8, arg1);
    }
}
