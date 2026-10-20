#include "context.h"

struct func_8022C5AC_Struct {
    u8 b[12];
};
struct func_8022C5AC_Obj {
    s16 unk0;
    u8 pad2[0x2AC - 2];
    struct func_8022C5AC_Struct unk2AC;
    s16 unk2B8[6];
    s16 unk2C4[6];
    u8 unk2D0;
};
extern struct func_8022C5AC_Struct D_8023E300;

void func_8022C5AC(struct func_8022C5AC_Obj *arg0) {
    struct func_8022C5AC_Struct sp;
    s32 k = 100;

    sp = D_8023E300;
    arg0->unk2B8[0] = (arg0->unk2C4[0] * arg0->unk0) / k;
    arg0->unk2B8[1] = (arg0->unk2C4[1] * arg0->unk0) / k;
    arg0->unk2B8[2] = (arg0->unk2C4[2] * arg0->unk0) / k;
    arg0->unk2B8[3] = (arg0->unk2C4[3] * arg0->unk0) / k;
    arg0->unk2B8[4] = (arg0->unk2C4[4] * arg0->unk0) / k;
    arg0->unk2B8[5] = (arg0->unk2C4[5] * arg0->unk0) / k;
    arg0->unk2AC = sp;
    arg0->unk2D0 = 0;
}
