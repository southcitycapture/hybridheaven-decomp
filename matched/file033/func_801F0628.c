#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E7E54_Struct *arg1);

typedef struct func_801F0628_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0628_Struct;

extern func_801F0628_Struct D_801F3A0C;

s32 func_801F0628(s32 arg0, s32 arg1) {
    func_801F0628_Struct sp1C;

    sp1C = D_801F3A0C;
    func_801C18CC(1, &sp1C);
    return 0x73;
}
