#include "context.h"

typedef struct func_801516CC_Struct1 {
    u8 pad[0xC];
    u16 unkC;
} func_801516CC_Struct1;

typedef struct func_801516CC_Struct0 {
    u8 pad[0x5C];
    func_801516CC_Struct1 *unk5C;
} func_801516CC_Struct0;

u16 func_801516CC(func_801516CC_Struct0 *arg0) {
    func_801516CC_Struct1 *sp1C;

    sp1C = arg0->unk5C;
    if (func_801517CC() != 0) {
        return sp1C->unkC;
    }
    return 0xFFFFU;
}
