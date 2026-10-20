#include "context.h"
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_8037B72C(struct func_8037AC58_Struct *arg0, s32 arg1) {
    f32 v;
    if (arg0->unkB0++ >= 0x41) {
        func_80005700();
        return;
    }
    if (func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800)) < 0.0f) {
        v = -func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800));
    } else {
        v = func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800));
    }
    (*(u8 **)(D_8008DA88 + 0x30))[0xA] = (u32)(v * 255.0f);
    (*(u8 **)(D_8008DA88 + 0x30))[9] = (u32)(v * 255.0f);
    if (func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000)) < 0.0f) {
        v = -func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000));
    } else {
        v = func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000));
    }
    (*(u8 **)(D_8008DA88 + 0x30))[0xC] = (u32)(v * 255.0f);
}
