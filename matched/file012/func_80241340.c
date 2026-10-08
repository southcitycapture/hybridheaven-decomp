#include "common.h"

typedef struct func_80241340_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 unk34;
    u8 unk35;
} func_80241340_Struct;

extern s32 func_800058DC(void *, void *);
extern void func_80241378(void);

void func_80241340(func_80241340_Struct *arg0, s32 arg1) {
    arg0->unk34 = 0;
    arg0->unk35 = 0;
    arg0->unk30 = arg0->unk2C;
    func_800058DC(arg0, func_80241378);
}
