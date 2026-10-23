#include "context.h"

typedef struct func_80150794_Struct_Local {
    f32 x;
    f32 z;
    f32 y;
    s16 kind;
    s32 flags;
    f32 scale;
    s16 a;
    s16 b;
} func_80150794_Struct_Local;
extern f32 D_801906EC;

void func_80150794(func_8014F400_Struct *arg0, s32 arg1) {
    s32 pad;
    func_80150794_Struct_Local sp28;
    s16 angle;

    if (func_800178E8() != 0) {
        if (arg0->unk92 == 1) {
            angle = arg0->unk24->unk30->unk12;
        } else {
            angle = (s16)(arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
        }
        sp28.x = func_8001EAD0(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + 2.5) + arg0->unk24->unk30->unk4;
        sp28.z = func_8001EB64(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + 2.5) + arg0->unk24->unk30->unkC;
        sp28.kind = 0x1100;
        sp28.flags = 0x01680003;
        sp28.a = 0;
        sp28.b = 0x5A;
        sp28.y = D_801906EC;
        sp28.scale = 1.0f;
        func_801C2F0C(2, &sp28);
        func_800058DC(arg0, func_80150970);
    }
}
