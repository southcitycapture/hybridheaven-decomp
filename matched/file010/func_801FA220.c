#include "common.h"

extern s8 D_8021B0D0;
extern s16 D_8021B0D2;

struct func_801FA220_Struct_Inner {
    u8 pad[0x10];
    u32 unk10;
};

struct func_801FA220_Struct {
    u8 pad[0x38];
    struct func_801FA220_Struct_Inner *unk38;
};

void func_801FA220(struct func_801FA220_Struct *arg0) {
    D_8021B0D2 = arg0->unk38->unk10 >> 0x10;
    D_8021B0D0 = arg0->unk38->unk10 & 0xFF;
}
