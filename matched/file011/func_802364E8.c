#include "context.h"

extern s32 func_8023639C(void *arg0);
struct func_802364E8_Struct { u8 b[5]; };
extern struct func_802364E8_Struct D_8023E4F4;

void func_802364E8(void *arg0, s32 arg1) {
    struct func_802364E8_Struct sp;

    sp = D_8023E4F4;
    if (func_80236374(arg0) != 0) {
        ((struct func_8023466C_Struct *)arg0)->unkA3 = 1;
        func_80234ED4(arg0, arg1, &sp.b[4], 0, 0);
        return;
    }
    if (func_8023639C(arg0) != 0) {
        ((struct func_8023466C_Struct *)arg0)->unkA3 = 2;
        func_80234ED4(arg0, arg1, &sp.b[3], 0, 0);
        return;
    }
    if (func_80236320(arg0) != 0) {
        ((struct func_8023466C_Struct *)arg0)->unkA3 = 3;
        func_80234ED4(arg0, arg1, &sp, 0, 0);
        return;
    }
    ((struct func_8023466C_Struct *)arg0)->unkA3 = 2;
    func_80234ED4(arg0, arg1, &sp, 0, 0);
}
