#include "context.h"

extern s32 func_801487B4(u8);
extern u8 func_802242D0(void *);

typedef struct func_80148820_StructB {
    u8 pad[0x5C];
    u8 *unk5C;
} func_80148820_StructB;

typedef struct func_80148820_StructC {
    u8 pad[0x33];
    s8 f : 1;
} func_80148820_StructC;

typedef struct func_80148820_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad2[6];
    func_80148820_StructC *unk98;
    s32 unk9C;
} func_80148820_Struct;

s32 func_80148820(func_80148820_Struct *arg0) {
    func_80148820_StructC *sp24;
    s32 sp20;
    u8 sp1F;
    u8 sp1E;
    u8 *v;
    void *a0;

    sp24 = arg0->unk98;
    sp20 = arg0->unk9C;
    sp1E = D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6];
    if (func_80148044() != 0) {
        return 0;
    }
    if (func_80126944() == 1) {
        if (*(u8 *)(D_801BBBF0 + 0x1030) == 0) {
            a0 = *(void **)(D_801BBBF0 + 0xDC);
        } else {
            a0 = *(void **)(D_801BBBF0 + 0xEC);
        }
        sp1F = func_802242D0(a0);
        if ((func_801487B4(sp1E) != 0) || (func_801487F0(sp1E) != 0)) {
            if (sp20 == (s32)D_801BBBF0 + 0x44C) {
                v = (*(func_80148820_StructB **)(D_801BBBF0 + 0xDC))->unk5C;
            } else {
                v = (*(func_80148820_StructB **)(D_801BBBF0 + 0xEC))->unk5C;
            }
            if (v[0x9C] == 2) {
                return 0;
            }
            if (sp24->f || (sp1F == 0)) {
                return 0;
            }
        }
    }
    return 1;
}
