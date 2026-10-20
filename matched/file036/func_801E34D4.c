#include "context.h"

extern void func_8012CF8C(s32, void *, s32, s32);
extern u8 D_8038D8B8[];
extern func_801E33BC_Struct1 **D_8038D8D0;
extern s32 D_801E4D0C;
extern s32 D_801E4D10;

void func_801E34D4(void) {
    if (D_801E4D0C >= 0x15) {
        D_801E4D0C = 0;
        D_801E4D10 ^= 1;
        if (D_801E4D10 != 0) {
            func_8012CF8C(*(s32 *)(D_8038D8B8 + 0x14), (u8 *)(*D_8038D8D0)->unk30 + 0x40, 0x442, 1);
            return;
        }
        func_8012CF8C(*(s32 *)(D_8038D8B8 + 0x14), (u8 *)(*D_8038D8D0)->unk30 + 0x40, 0x442, 0);
        return;
    }
    D_801E4D0C += 1;
}
