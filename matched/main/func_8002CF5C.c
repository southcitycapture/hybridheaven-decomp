#include "context.h"
extern s32 func_80030480(void *, void *, void *, s32);

struct func_8002CF5C_Struct {
    u8 pad[0x14];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

extern u8 func_8002D000[];
extern u8 func_8002D030[];

void func_8002CF5C(struct func_8002CF5C_Struct *arg0, s32 arg1, s32 arg2) {
    func_80030480(arg0, func_8002D030, func_8002D000, 7);
    arg0->unk14 = 0;
    arg0->unk18 = arg2;
    arg0->unk1C = arg1;
}
