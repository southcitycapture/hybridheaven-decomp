#include "context.h"

extern f32 D_801F3D0C;

struct func_801E48A0_Struct3 {
    u8 pad0[8];
    f32 unk8;
};

struct func_801E48A0_Struct2 {
    u8 pad0[0x30];
    struct func_801E48A0_Struct3 *unk30;
};

struct func_801E48A0_Outer {
    u8 pad0[0x1C];
    struct func_801E48A0_Struct2 *unk1C;
};

s32 func_801E48A0(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x18CBA80) != 0) && (func_801C2F4C() != 0)) {
        D_801F3D0C = ((struct func_801E48A0_Outer *)D_8038D8D0)->unk1C->unk30->unk8;
        return 0xB;
    }
    return 0xA;
}
