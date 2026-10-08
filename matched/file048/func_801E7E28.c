#include "context.h"

struct func_801E7E28_Struct {
    u8 pad[0x4C];
    u8 *unk4C;
    u8 *unk50;
    u8 *unk54;
};

s32 func_801E7E28(s32 arg0, s32 arg1) {
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk4C[0x22] = 0;
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk50[0x22] = 0;
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk54[0x22] = 1;
    return 8;
}
