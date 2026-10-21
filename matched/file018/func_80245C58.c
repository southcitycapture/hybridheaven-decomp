#include "context.h"
typedef struct func_80245C58_Struct {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    void *unk5C;
} func_80245C58_Struct;
extern s32 D_8012A7F4(void *, f32, f32, s32);

void func_80245C58(func_80245C58_Struct *arg0, s32 arg1) {
    void *sp24;
    func_802474E4_StructNode *n;
    f32 x;
    f32 a;
    f32 b;

    sp24 = arg0->unk5C;
    if (func_80244AB0(arg0) != 0) {
        return;
    }
    if (func_8012CE9C(arg1, sp24, D_80258F48, 0xA) != 0) {
        return;
    }
    func_80010550(arg1, sp24);
    D_8012A7F4(arg0, 0.0f, 350.0f, 0x100);
    n = arg0->unk24->unk2C;
    x = n->unk4;
    if (x < 0.0f) {
        a = -x;
    } else {
        a = x;
    }
    x = n->unkC;
    if (350.0f < x) {
        b = -(350.0f - x);
    } else {
        b = 350.0f - x;
    }
    if (b + a < 40.0f) {
        func_800058DC(arg0, func_80245D78);
        return;
    } else {
    }
}
