#include "context.h"

s32 func_801E8454(s32 arg0, s32 arg1) {
    struct func_801E8454_Struct {
        s32 unk0;
        s32 unk4;
        s32 unk8;
        s32 unkC;
        s32 unk10;
        s32 unk14;
    } sp18;
    extern struct func_801E8454_Struct D_801EB104;

    sp18 = D_801EB104;
    func_801C18CC(2, &sp18);
    return 0x5A;
}
