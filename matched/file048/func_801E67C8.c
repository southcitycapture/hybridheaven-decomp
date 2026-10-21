#include "context.h"

typedef struct func_801E67C8_Struct2 {
    u8 pad[0x30];
    s32 unk30;
} func_801E67C8_Struct2;

typedef struct func_801E67C8_Struct1 {
    u8 pad[0x2C];
    func_801E67C8_Struct2 *unk2C;
} func_801E67C8_Struct1;

void func_801E67C8(void) {
    func_8012CF8C(D_8038D8CC,
        ((func_801E67C8_Struct1 *)D_8038D8D0)->unk2C->unk30 + 0x40,
        0x46C, D_801EA440[D_801E9F18]);
    D_801E9F18++;
    D_801E9F18 %= 8;
}
