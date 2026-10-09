#include "context.h"

struct func_801E685C_Struct2 {
    u8 pad[0x30];
    s32 unk30;
};

struct func_801E685C_Struct1 {
    u8 pad[0x2C];
    struct func_801E685C_Struct2 *unk2C;
};

extern s32 func_8012CF8C(s32, s32, s32, s32);
extern s32 D_8038D8CC;
extern s32 D_801E9F18;
extern s32 D_801EA440[];

void func_801E685C(void) {
    func_8012CF8C(D_8038D8CC, ((struct func_801E685C_Struct1 *)D_8038D8D0)->unk2C->unk30 + 0x40, 0x46C, D_801EA440[D_801E9F18]);
    D_801E9F18 = D_801E9F18 - 1;
    if (D_801E9F18 < 0) {
        D_801E9F18 = 7;
    }
}
