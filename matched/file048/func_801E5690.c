#include "context.h"

extern s32 D_801EA420[];

typedef struct func_801E5690_Struct2 {
    u8 pad[0x30];
    s32 unk30;
} func_801E5690_Struct2;

typedef struct func_801E5690_Struct1 {
    u8 pad[0x1C];
    func_801E5690_Struct2 *unk2C;
} func_801E5690_Struct1;

s32 func_801E5690(void) {
    func_8012CF8C(D_8038D8CC,
        ((func_801E5690_Struct1 *)D_8038D8D0)->unk2C->unk30 + 0x40,
        0x46D, D_801EA420[D_801E9E70]);
    D_801E9E70++;
    D_801E9E70 %= 8;
}
