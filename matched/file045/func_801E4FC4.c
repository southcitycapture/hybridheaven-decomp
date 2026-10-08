#include "context.h"

struct func_801E4FC4_Struct1 {
    u8 pad0[0x8];
    struct func_801E4FC4_Struct2 *unk8;
};
struct func_801E4FC4_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
};
extern struct func_801E4FC4_Struct1 *D_8038D8D0;

s32 func_801E4FC4(s32 arg0, s32 arg1) {
    D_8038D8D0->unk8->unk22 = 0;
    return 4;
}
