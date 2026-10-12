#include "context.h"

struct func_8002430C_Struct {
    u8 pad0[0xF];
    u8 unkF;
    u8 pad10[0x49 - 0x10];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
};

extern s32 func_80023D04();

void func_8002430C(void) {
    ((struct func_8002430C_Struct *)D_800CBDA4)->unkF = 1;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk49 = 3;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk4A = 0;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk4C = 1;
    func_80023D04();
}
