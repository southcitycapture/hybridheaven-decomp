#include "context.h"

struct func_8002CF08_Struct {
    u8 pad[0x14];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

extern void func_80030480(void *, void *, void *, s32);
extern u8 func_8002DDB0[];
extern u8 func_8002DDE0[];

void func_8002CF08(struct func_8002CF08_Struct *arg0, s32 arg1, s32 arg2) {
    func_80030480(arg0, func_8002DDE0, func_8002DDB0, 6);
    arg0->unk14 = 0;
    arg0->unk18 = arg2;
    arg0->unk1C = arg1;
}
