#include "context.h"

struct func_801FA638_Struct {
    u8 pad[0x30];
};

extern struct func_801FA638_Struct D_80207674;

s32 func_801FA638(s32 arg0, s32 arg1) {
    struct func_801FA638_Struct sp18;

    sp18 = D_80207674;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x2E;
}
