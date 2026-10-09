#include "context.h"
extern struct func_801E4D04_StructOuter *D_8038D8D0;

typedef struct func_801E41F0_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_801E41F0_Inner;

typedef struct func_801E41F0_Struct {
    u8 pad[0x20];
    func_801E41F0_Inner *unk20;
} func_801E41F0_Struct;

extern s32 D_801EA708;
extern s32 D_801EA70C;

s32 func_801E41F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        ((func_801E41F0_Struct *) D_8038D8D0)->unk20->unk22 = 0;
        D_801EA708 = 1;
        D_801EA70C = 0;
        return 3;
    }
    return 2;
}
