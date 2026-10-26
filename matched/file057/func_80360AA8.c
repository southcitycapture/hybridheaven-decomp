typedef struct { int unk0; int unk4; int unk8; } func_8035F544_Copy;
typedef struct { int unk0; } func_8035CDA8_Obj;
#include "context.h"

typedef struct func_80360AA8_Struct {
    u8 pad[0x30];
    u32 pad0 : 9;
    u32 f : 2;
    u32 pad1 : 21;
    u8 pad3[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2[0x392 - 0x2FA];
    u8 unk392;
} func_80360AA8_Struct;

void func_80360AA8(void *arg0, s32 arg1) {
    s32 sp44;
    func_80360AA8_Struct *v;
    s32 pad[2];
    func_8035F544_Copy sp2C;

    sp44 = *(s32 *) ((u8 *) arg0 + 0x5C);
    v = (func_80360AA8_Struct *) ((s32) arg0 == D_801BBCCC ? D_801BC03C : D_801BC3D8);
    if (*(u16 *) ((u8 *) arg0 + 0x36) != 0x11D) {
        func_80224AC4(arg0, 0);
    }
    if (v->f == 0) {
        v->f = v->unk2F9 + 2;
    }
    func_802256E4((void *) &sp2C, (s32) arg0, 0);
    if (func_80011140(arg1, sp44, sp2C, v->f != 0 ? 3 : 0xA) & 0xFF) {
        func_800058DC(arg0, (void *) func_80360BDC);
    }
    v->unk392 = 0;
}
