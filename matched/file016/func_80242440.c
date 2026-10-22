#include "context.h"

typedef struct func_80242440_StructObj {
    u8 pad[0x2C];
    s32 unk2C;
} func_80242440_StructObj;

void func_80242440(func_80242440_StructObj *arg0, func_80242080_Struct1 **arg1) {
    extern s32 func_80133A24();

    if (func_80133A24(0xBE) == 0) {
        if ((*arg1)->unk30->unk4B < 0x80) {
            (*arg1)->unk30->unk4B += 4;
        }
    } else {
        if ((*arg1)->unk30->unk4B > 0) {
            (*arg1)->unk30->unk4B -= 4;
            return;
        }
        arg0->unk2C &= ~0x800;
        func_800058DC(arg0, func_802424D4);
    }
}
