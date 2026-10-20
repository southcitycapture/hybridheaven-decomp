#include "context.h"

typedef struct func_8024118C_Struct {
    u8 pad0[0x24];
    func_80240B24_StructB *unk24;
    u8 pad1[0x94 - 0x28];
    s16 unk94;
} func_8024118C_Struct;

void func_80241200(s32 arg0, s32 arg1);

void func_8024118C(func_8024118C_Struct *arg0, s32 arg1) {
    func_80240B24_StructC *p = arg0->unk24->unk30;
    s16 t;
    p->unk8 = (f32)((f64)p->unk8 - 0.5);
    t = arg0->unk94;
    arg0->unk94 = t - 1;
    if (t == 0) {
        func_80020744(0x142);
        func_800058DC(arg0, func_80241200);
    }
}
