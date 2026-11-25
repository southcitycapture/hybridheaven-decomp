#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];


extern u8 D_80240730[];

typedef struct func_80378764_StructEnt {
    u8 unk0;
    u8 pad1;
    s16 unk2;
    u8 pad4[2];
} func_80378764_StructEnt;

typedef struct func_80378764_StructObj {
    u8 pad0[0xA];
    u8 unkA;
    u8 pad1[3];
    u8 unkE;
    u8 pad2[5];
    u8 unk14;
    u8 pad3[7];
} func_80378764_StructObj;

typedef struct func_80378764_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x26];
    u16 unk2C;
    u8 pad2E[0x41A];
    u8 *unk448;
    u8 pad44C[0x385];
    u8 unk7D1;
    u8 pad7D2[2];
    u8 unk7D4;
    u8 pad7D5[2];
    u8 unk7D7;
    u8 pad7D8[0x2E4];
    func_80378764_StructObj *unkABC;
    u8 padAC0[0x570];
    u8 unk1030;
} func_80378764_Struct;

#define g ((func_80378764_Struct *)D_801BBBF0)
#define ENT(i) ((func_80378764_StructEnt *)((u8 *)tab + (i) * sizeof(func_80378764_StructEnt)))

s32 func_80378764(void) {
    func_80378764_StructEnt *tab = (func_80378764_StructEnt *)((u8 *)&D_801BC03C + 0xA8);
    func_80378764_StructObj *p = g->unkABC;
    s32 a0;
    func_80378764_StructEnt *e;
    s32 lo;
    u32 lv;
    s32 sum;

    if (g->unk2C == 10 || g->unk2C == 11) {
        return 0;
    }
    if ((u32)p->unkA == 0x23 || (u32)p->unkA == 0x24) {
        return 0;
    }
    if (g->unk1030 != 0 && g->unk448[0x74] == 3) {
        if (ENT(p->unkA)->unk0 == 0) {
            if (g->unk2C == 5) {
                a0 = 1;
            } else {
                lv = p[(u32)p->unkA].unk14;
                lo = g->unk4 / 10;
                if ((s32)lv >= lo) {
                    a0 = 1;
                } else {
                    a0 = ((lo - lv) + 1) & 0xFF;
                }
            }
            sum = ENT(p->unkA)->unk2 + a0;
            if (sum < 0x100) {
                ENT(p->unkA)->unk2 = sum;
            } else {
                ENT(p->unkA)->unk2 = 0xFF;
            }
            e = ENT(p->unkA);
            if (e->unk2 >= p->unkE) {
                lv = (u32)p->unkA;
                if ((s32)lv < 0x22) {
                    a0 = 2;
                    ENT(p->unkA)->unk0 = a0;
                    tab[p->unkA ^ 1].unk0 = a0;
                    D_80240730[D_80240730[0x20]] = p->unkA;
                    D_80240730[D_80240730[0x20] + 1] = p->unkA ^ 1;
                    D_80240730[0x20] = D_80240730[0x20] + 2;
                    lv = p->unkA;
                    if ((s32)lv < 0xE) {
                        g->unk7D1 = g->unk7D1 + 2;
                        return 1;
                    }
                    if ((s32)lv < 0x22) {
                        g->unk7D4 = g->unk7D4 + 2;
                    }
                ret1:
                    return 1;
                }
                if ((s32)lv < 0x52) {
                    a0 = 2;
                    ENT(p->unkA)->unk0 = a0;
                    D_80240730[D_80240730[0x20]] = p->unkA;
                    D_80240730[0x20]++;
                    g->unk7D7++;
                    goto ret1;
                }
                return 0;
            }
        }
    }
    return 0;
}
