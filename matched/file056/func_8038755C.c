#include "common.h"
extern void func_80005700();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);

struct func_8038755C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_8038755C(struct func_8038755C_Struct *arg0, s32 arg1) {
    s32 sp8C[1];
    s32 t;
    s16 j;
    s32 i;

    sp8C[0] = t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (sp8C[0] == 0) {
        i = 0;
        do {
            j = i;
            func_80129FB8(arg0->unk94, arg0->unk98 + 3.0f, arg0->unk9C, (f32)((f64)func_8001EAD0(j) * 0.5), 0.0f, (f32)((f64)func_8001EB64(j) * 0.5), 0.0f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x78, -4, 0.07999999821186066f, 0xC, 0);
            i += 0x2AA;
        } while (i != 0x22A2);
    }
    if (sp8C[0] >= 4) {
        func_80129FB8(arg0->unk94, arg0->unk98 + 3.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.029999999329447746f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x64, -4, 0.10000000149011612f, 0xC, 0);
        func_80005700(arg0);
    }
}
