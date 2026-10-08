#include "context.h"

extern s32 func_80133A24(u32);

typedef struct func_801F54B8_SubStruct {
    u8 pad0[0x10];
    u32 unk10;
} func_801F54B8_SubStruct;

typedef struct func_801F54B8_Struct {
    u8 pad0[0x38];
    func_801F54B8_SubStruct *unk38;
} func_801F54B8_Struct;

s32 func_801F54B8(func_801F54B8_Struct *arg0) {
    if (func_80133A24(arg0->unk38->unk10 >> 0x10) != 0) {
        return 1;
    }
    return 0;
}
