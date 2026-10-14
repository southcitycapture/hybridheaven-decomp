/* starting point: func_801E4C38 (file030), whose assembly is 91% the same as this function's */
#include "context.h"

struct func_801E4CBC_Struct3 {
    u8 pad[0x12];
    s16 unk12;
};
struct func_801E4CBC_Struct2 {
    u8 pad[0x30];
    struct func_801E4CBC_Struct3 *unk30;
};
struct func_801E4CBC_Struct1 {
    u8 pad[0x4];
    struct func_801E4CBC_Struct2 *unk4;
};

s32 func_801E4CBC(s32 arg0, s32 arg1) {
    struct func_801E4CBC_Struct3 *temp_v1;

    temp_v1 = ((struct func_801E4CBC_Struct1 *) D_8038D8D0)->unk4->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 - 0x222);
    return 0x10;
}
