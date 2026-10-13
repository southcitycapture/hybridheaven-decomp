#include "context.h"

typedef struct func_801E7B84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7B84_Struct;

extern s32 func_801C18CC(s32 a0, func_801E7B84_Struct *a1);
extern func_801E7B84_Struct D_801E83D4;

s32 func_801E7B84(s32 arg0, s32 arg1) {
    func_801E7B84_Struct sp18;

    sp18 = D_801E83D4;
    func_801C18CC(2, &sp18);
    return 0x24;
}
