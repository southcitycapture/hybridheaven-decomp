#include "context.h"

typedef struct func_802442A0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_802442A0_Struct;

extern func_802442A0_Struct D_80252424;

void func_802442A0(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_80252424, 0xFFFFFF);
        func_800058DC((void *) arg0, (void *) func_80244320);
    }
}
