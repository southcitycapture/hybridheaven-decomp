#include "context.h"

typedef struct func_801E5CA4_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
} func_801E5CA4_Struct1;

typedef struct func_801E5CA4_Struct0 {
    u8 pad0[0x24];
    func_801E5CA4_Struct1 *unk24;
} func_801E5CA4_Struct0;

extern s32 D_801ECD58;
extern s32 D_801ECD5C;
extern s32 D_801ECD60;

s32 func_801E5CA4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        D_801ECD58 = 0;
        D_801ECD5C = 0;
        D_801ECD60 = 0;
        ((func_801E5CA4_Struct0 *) D_8038D8D0)->unk24->unk22 = 1;
        func_801C1000(3, 9);
        func_8038D28C(0x25B);
        func_8038D28C(0x88);
        return 2;
    }
    return 1;
}
