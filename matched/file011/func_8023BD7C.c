#include "context.h"

typedef struct func_8023BD7C_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
} func_8023BD7C_Sub;

typedef struct func_8023BD7C_Arg {
    u8 pad0[0x94];
    func_8023BD7C_Sub *unk94;
} func_8023BD7C_Arg;

typedef struct func_8023BD7C_Inner {
    u8 pad0[0x10];
    s32 unk10;
} func_8023BD7C_Inner;

typedef struct func_8023BD7C_G {
    func_8023BD7C_Inner *unk0;
    u8 pad4[0x1C];
    u8 unk20;
    u8 unk21;
    u8 unk22;
} func_8023BD7C_G;

#define G ((func_8023BD7C_G *)&D_80240880)

extern s32 func_8023AE34(void *);
void func_8023BC98(void *, s32);
void func_8023BFA8(void *arg0, s32 arg1);

void func_8023BD7C(func_8023BD7C_Arg *arg0, s32 arg1) {
    func_8023BD7C_Sub *sp1C;
    u8 flag;

    flag = 0;
    sp1C = arg0->unk94;
    func_8023AD74();
    if ((sp1C->unkC & 0x200) && (G->unk20 > 0)) {
        G->unk20--;
        flag = 1;
    }
    if ((sp1C->unkC & 0x100) && (G->unk20 < G->unk22)) {
        G->unk20++;
        flag = 1;
    }
    if (flag) {
        func_80020744(0x300);
        func_801471DC(D_80240888);
        func_8023B2E8();
        func_8023A790((s32)arg0);
    }
    func_8023AC94();
    func_8023A9D8(0xFF);
    func_8023B3CC(0xFF);
    if (func_8023AE34(arg0) != 0) {
        func_80020744(0x104);
        func_800058DC(arg0, func_8023BFA8);
        return;
    }
    if (sp1C->unk4 & 0x4000) {
        if (func_80236374(arg0) != 0) {
            func_800058DC(arg0, func_8023BC98);
            return;
        }
        func_80147D60(8);
        func_801471DC(G->unk0->unk10);
        D_802408A0 = 0;
        func_8023A5D4((s32)arg0);
        func_8023AFD0(D_802408A0);
        func_8023B148(arg0, 0xFF);
        func_800058DC(arg0, func_8023B86C);
    }
}
