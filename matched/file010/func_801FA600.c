#include "common.h"

typedef struct func_801FA600_Struct {
    u8 pad[0x38];
    struct func_801FA600_Struct2 *unk38;
} func_801FA600_Struct;

typedef struct func_801FA600_Struct2 {
    u8 pad[0x10];
    u32 unk10;
} func_801FA600_Struct2;

s32 func_801FA600(func_801FA600_Struct *arg0) {
    if (arg0 != NULL) {
        return (arg0->unk38->unk10 >> 0x18) & 0xFF;
    }
    return 0;
}
