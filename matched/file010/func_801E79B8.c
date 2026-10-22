#include "context.h"
extern f32 func_8002FC20(f32);
extern s32 D_80011258(s32, void *);

void func_801E79B8(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, s32 arg3) {
    u8 pad[12];
    func_801E74DC_Sub *v;
    f32 len;
    f32 fs;

    v = &arg2->unk1C;
    if (v->unk0 == 0x01680040) {
        if ((f64)v->unk8 != 1.0) {
            v->unk8 = 1.0f;
        }
        func_8013A28C(arg1, *v);
        arg0->unk2C |= 0x60;
        arg0->unk2C &= ~0x80;
        func_800111E0(arg1, (u8 *)v + 6);
        len = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        fs = (D_8021AFB0 - 1.0) / 6.0;
        fs = len + (fs - len) * 0.0625;
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * fs;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * fs;
        return;
    }
    if (D_80011258(arg1, (u8 *)v + 6) == 0) {
        v->unk0 = 0x01680040;
        *(s16 *)((u8 *)v + 4) = 0;
        *(s16 *)((u8 *)v + 6) = 0x1000;
        func_8013A28C(arg1, *v);
        arg0->unk2C &= ~0x80;
        len = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        fs = (D_8021AFB0 - 1.0) / 6.0;
        fs = len + (fs - len) * 0.0625;
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * fs;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * fs;
    }
}
