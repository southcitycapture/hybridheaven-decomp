#include "common.h"

struct func_801E4378_Struct1 {
    struct func_801E4378_Struct2 *unk0;
};

struct func_801E4378_Struct2 {
    u8 pad0[0x30];
    struct func_801E4378_Struct3 *unk30;
};

struct func_801E4378_Struct3 {
    u8 pad0[0x12];
    s16 unk12;
};

extern u32 D_801EB778;
extern struct func_801E4378_Struct1 *D_8038D8D0;

s32 func_801E4378(s32 arg0, s32 arg1) {
    u32 *temp_v0;
    struct func_801E4378_Struct3 *temp_v1;

    temp_v0 = &D_801EB778;
    if (++(*temp_v0) >= 0x78U) {
        return 0xC;
    }
    temp_v1 = D_8038D8D0->unk0->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x88);
    return 0xB;
}
