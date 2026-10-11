#include "context.h"

typedef struct func_8035C7E8_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
} func_8035C7E8_Globals;

typedef struct func_8035C7E8_Obj {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u32 unk30;
    u8 pad2[0x2F8 - 0x34];
    u8 unk2F8;
    u8 pad3[0x320 - 0x2F9];
    u8 unk320;
    u8 pad4[0x32D - 0x321];
    u8 unk32D;
    u8 pad5[0x392 - 0x32E];
    u8 unk392;
} func_8035C7E8_Obj;

typedef struct func_8035C7E8_Entry {
    u8 pad0[0x36];
    u16 unk36;
} func_8035C7E8_Entry;

extern void func_8036445C(s32, s32, u8, s32);

void func_8035C7E8(s32 arg0, s32 arg1) {
    func_8035C7E8_Entry *var_a1;
    func_8035C7E8_Obj *var_v1;

    if (arg0 != ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
        var_a1 = (func_8035C7E8_Entry *) ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC;
    } else {
        var_a1 = (func_8035C7E8_Entry *) ((func_8035C7E8_Globals *) D_801BBBF0)->unkEC;
    }
    if (arg0 == ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
        var_v1 = (func_8035C7E8_Obj *) D_801BC03C;
    } else {
        var_v1 = (func_8035C7E8_Obj *) D_801BC3D8;
    }
    {
        func_8035C7E8_Obj *var_a0;

        if (arg0 != ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
            var_a0 = (func_8035C7E8_Obj *) D_801BC03C;
        } else {
            var_a0 = (func_8035C7E8_Obj *) D_801BC3D8;
        }
        var_v1->unk392 = 0;
        if ((((u32) (var_v1->unk30 * 2) >> 0x1E) == 0) && (var_v1->unk2 > 0)) {
            if (var_v1->unk2F8 == 6) {
                var_v1->unk2F8 = 6;
            } else if (var_a0->unk32D == 3) {
                var_v1->unk2F8 = 4;
            } else {
                if ((func_8035A434(var_a0) == 4) || (var_a1->unk36 == 0x148)) {
                    var_v1->unk2F8 = 3;
                } else {
                    var_v1->unk2F8 = 2;
                }
            }
        } else {
            var_v1->unk2F8 = 4;
        }
    }
    func_8036445C(arg0, arg1, var_v1->unk320, 1);
}
