#include "context.h"

struct func_8037E0A4_Obj {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 pad91[0x99 - 0x91];
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xB0 - 0x9C];
    s16 unkB0;
};

struct func_8037E0A4_Ent {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};

struct func_8037E0A4_Tab {
    u8 pad[0x30];
    struct func_8037E0A4_Ent *unk30;
};

struct func_8037E0A4_Glob {
    u8 pad[4];
    struct func_8037E0A4_Tab *unk4;
};

extern u8 D_8038BC40[];
extern u8 D_8038BC44[];

void func_8037E0A4(struct func_8037E0A4_Obj *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        func_8001B204(0xE, 0, 0x64, D_8038BC40);
        arg0->unkC[0xAE] = 1;
        func_80005700(arg0);
        return;
    }
    func_8001B204(0xE, (s16) (((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unk0 + 0x468), (s16) ((((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unk2 - arg0->unk9B) + 3), D_8038BC44, (s32) (arg0->unkB0 * 0xFF) / 8, arg0->unk99, func_8037D320(arg0, (arg0->unk90 ^ 1) & 0xFF));
    ((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unkB = (s8) ((s32) (arg0->unkB0 * 0xFF) / 8);
}
