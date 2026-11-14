#include "context.h"

struct func_80137D00_Inner {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
};

struct func_80137D00_Struct {
    u8 pad0[0x38];
    struct func_80137D00_Inner *unk38;
    u8 pad1[0x94 - 0x3C];
    f32 unk94;
    f32 unk98;
    u8 pad2[0x9E - 0x9C];
    u16 unk9E;
};

void func_80137D00(struct func_80137D00_Struct *arg0, s32 arg1) {
    if (func_80133A24((u32) arg0->unk38->unk10 >> 16) != 0) {
        switch (arg0->unk38->unk10 & 0xFFFF) {
        case 0:
            arg0->unk94 = 843.0f;
            arg0->unk98 = -996.0f;
            arg0->unk9E = arg0->unk38->unk14;
            func_800058DC(arg0, func_80137E10);
            break;
        case 1:
            arg0->unk94 = 843.0f;
            arg0->unk98 = -996.0f;
            func_800058DC(arg0, func_801381D0);
            break;
        case 2:
            func_800058DC(arg0, func_801383CC);
            break;
        case 3:
            func_800058DC(arg0, func_801387CC);
            break;
        case 4:
            func_800058DC(arg0, func_80138B90);
            break;
        }
    }
}
