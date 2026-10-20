#include "context.h"

struct func_8037EB58_Struct;
void func_8037EB58(struct func_8037EB58_Struct *arg0, s32 arg1);

struct func_8037E9B8_Struct {
    u8 pad[0xB0];
    s16 unkB0;
};

void func_8037E9B8(struct func_8037E9B8_Struct *arg0, s32 arg1) {
    f32 v;
    u8 t;
    u8 t2;
    func_8037DCEC_Inner *p;

    if (arg0->unkB0 < 8) {
        if (func_8001EAD0(arg0->unkB0 << 9) < 0.0f) {
            v = -func_8001EAD0(arg0->unkB0 << 9);
        } else {
            v = func_8001EAD0(arg0->unkB0 << 9);
        }
        t = (u32)(v * 255.0f);
        G->unk4->unk30->unkE = t;
        G->unk4->unk30->unkD = t;
        G->unk4->unk30->unkC = t;
        arg0->unkB0 = arg0->unkB0 + 1;
        return;
    }
    G->unk4->unk30->unkE = 0;
    p = G->unk4->unk30;
    t2 = p->unkE;
    p->unkD = t2;
    G->unk4->unk30->unkC = t2;
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037EB58);
}
