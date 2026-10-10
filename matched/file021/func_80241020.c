#include "context.h"

extern void func_80241070(void);

struct func_80241020_Struct {
    u8 pad0[0x192];
    u16 unk192;
    u16 unk194;
    u16 unk196;
};

void func_80241020(s32 arg0, s32 arg1) {
    func_8001F74C((void *) arg0);
    if (((struct func_80241020_Struct *) &D_801BBBF0)->unk196 == 1) {
        ((struct func_80241020_Struct *) &D_801BBBF0)->unk192 = 1;
        func_800058DC((void *) arg0, (void *) func_80241070);
    }
}
