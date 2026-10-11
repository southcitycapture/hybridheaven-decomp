#include "context.h"

extern void func_8022310C(void *arg0, s32 arg1);
extern void func_80224AC4(void *arg0, s32 arg1);
extern void func_80222708(void);

typedef struct func_80363204_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80363204_Obj;

typedef struct func_80363204_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x2C];
    u8 unk30[4];
    u8 pad2[0x392 - 0x34];
    u8 unk392;
} func_80363204_Entry;

void func_80363204(void *arg0, s32 arg1) {
    s32 sp1C;
    func_80363204_Entry *var_v1;

    sp1C = ((func_80363204_Obj *) arg0)->unk5C;
    if (arg0 == *(void **) &D_801BBBF0[0xDC]) {
        var_v1 = (func_80363204_Entry *) D_801BC03C;
    } else {
        var_v1 = (func_80363204_Entry *) D_801BC3D8;
    }
    if ((var_v1->unk2 <= 0) || (((u32) (*(u32 *) var_v1->unk30 * 2) >> 0x1E) != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (((s32) D_801BBBF0[0x1031] >= 0xA) && (D_801BBBF0[0x1031] != 0xF)) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_80224AC4(arg0, 0);
        if ((*(u16 *) var_v1->unk30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (func_80010550(arg1, sp1C) != 0) {
            var_v1->unk30[2] = (u8) (var_v1->unk30[2] & 0xFF1F);
            func_800058DC(arg0, (void *) func_80222708);
        }
        var_v1->unk392 = 0;
    }
}
