#include "context.h"

struct func_80011140_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_80010D08(s32, s32, struct func_80011140_Struct, s32, s32);

void func_80011140(s32 arg0, s32 arg1, struct func_80011140_Struct arg2, u16 arg5) {
    func_80010D08(arg0, arg1, arg2, arg5, 0xFFFFFF);
}
