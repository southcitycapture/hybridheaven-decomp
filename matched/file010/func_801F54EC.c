#include "context.h"

s32 func_801FA13C(s32);

typedef struct func_801F54EC_SubStruct {
    u8 pad0[0x10];
    u32 unk10;
} func_801F54EC_SubStruct;

typedef struct func_801F54EC_Struct {
    u8 pad0[0x38];
    func_801F54EC_SubStruct *unk38;
} func_801F54EC_Struct;

s32 func_801F54EC(func_801F54EC_Struct *arg0) {
    if (func_801FA13C((arg0->unk38->unk10 >> 0x10) & 0xFFFF) == 0) {
        return 1;
    }
    return 0;
}
