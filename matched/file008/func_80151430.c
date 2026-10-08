#include "context.h"

typedef struct func_80151430_Struct2 {
    u8 pad[0x12];
    u16 unk12;
} func_80151430_Struct2;

typedef struct func_80151430_Struct1 {
    u8 pad[0x2C];
    func_80151430_Struct2 *unk2C;
} func_80151430_Struct1;

typedef struct func_80151430_Struct0 {
    u8 pad[0x24];
    func_80151430_Struct1 *unk24;
} func_80151430_Struct0;

s32 func_80151430(func_80151430_Struct0 *arg0, u16 arg1) {
    if (func_801517CC() != 0) {
        arg0->unk24->unk2C->unk12 = arg1;
        return 1;
    }
    return 0;
}
