#include "context.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);

typedef struct func_8035F544_Obj {
    u8 pad[0x5C];
    s32 unk5C;
} func_8035F544_Obj;

typedef struct func_8035F544_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x2C];
    u32 unk30;
    u8 pad2[0x4];
    u8 unk38;
    u8 pad3[0x392 - 0x39];
    u8 unk392;
} func_8035F544_Entry;

typedef struct func_8035F544_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8035F544_Globals;

typedef struct func_8035F544_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F544_Copy;

extern void func_802233B0(void *arg0, s32 arg1);
extern void func_802237B0(void *arg0, s32 arg1);
extern void func_8022397C(void *arg0);
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
extern void func_8035F6B4(void);
extern func_8035F544_Copy D_80385680;

void func_8035F544(func_8035F544_Obj *arg0, s32 arg1) {
    s32 sp3C;
    func_8035F544_Entry *var_v0;
    func_8035F544_Copy sp2C;

    sp3C = arg0->unk5C;
    if (arg0 == *(void **) (D_801BBBF0 + 0xDC)) {
        var_v0 = (func_8035F544_Entry *) D_801BC03C;
    } else {
        var_v0 = (func_8035F544_Entry *) D_801BC3D8;
    }
    sp2C = D_80385680;
    var_v0->unk392 = 0;
    if ((var_v0->unk2 <= 0) || (((u32) (var_v0->unk30 * 2) >> 0x1E) != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_802237B0(arg0, 1);
        var_v0->unk38 = (var_v0->unk38 & 0xFF9F) | 0x40;
        if ((((u16 *) &var_v0->unk30)[0] & 7) == 5) {
            var_v0->unk38 = (u8) (var_v0->unk38 & 0x9F);
            func_8022397C(arg0);
            return;
        }
        if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
            ((u16 *) &sp2C.unk4)[1] ^= 0x10;
        }
        if (func_80011140(arg1, sp3C, sp2C, 6) != 0) {
            func_800058DC(arg0, func_8035F6B4);
        }
    }
}
