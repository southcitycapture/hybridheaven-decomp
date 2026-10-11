#include "context.h"

struct func_801F6074_Struct3 {
    u8 pad0[4];
    f32 unk4;
};
struct func_801F6074_Struct2 {
    u8 pad0[0x30];
    struct func_801F6074_Struct3 *unk30;
};
struct func_801F6074_Struct1 {
    struct func_801F6074_Struct2 *unk0;
};

s32 func_801F6074(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x043440D5) != 0) {
        ((struct func_801F6074_Struct1 *)D_8038D8D0)->unk0->unk30->unk4 = 5120.0f;
        return 3;
    }
    return 2;
}
