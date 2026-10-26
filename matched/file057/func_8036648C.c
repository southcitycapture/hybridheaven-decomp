#include "common.h"
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;
#define G80364D2C ((func_803643CC_Glob *)&D_801BBBF0)
extern void func_800058DC(s32, void *);
extern u8 func_80222E84[];
extern void func_802237B0(s32, s32);
extern s32 func_8022397C();


typedef struct func_8036648C_StructA {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        struct {
            u32 b31 : 1;
            u32 b29 : 2;
            u32 b25 : 4;
            u32 pad21 : 4;
            u32 b19 : 2;
            u32 rest : 19;
        } bf;
        u16 h;
    } u30;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_8036648C_StructA;

typedef struct func_8036648C_StructI {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
} func_8036648C_StructI;

typedef struct func_8036648C_StructO {
    u8 pad0[0x5C];
    func_8036648C_StructI *unk5C;
} func_8036648C_StructO;
extern void func_8013C6FC(s32, s32, s32);
extern void func_80366648();
extern u8 D_80386450[];
extern u8 D_80386470[];
extern u8 D_80386480[];

#define GB ((u8 *)&D_801BBBF0)

void func_8036648C(func_8036648C_StructO *arg0, s32 arg1) {
    func_8036648C_StructA *a;
    func_8036648C_StructA *b;
    func_8036648C_StructI *o;
    u8 v;
    u32 k;

    if ((s32)arg0 == G80364D2C->unkDC) {
        a = (func_8036648C_StructA *)D_801BC03C;
    } else {
        a = (func_8036648C_StructA *)D_801BC3D8;
    }
    if ((s32)arg0 != G80364D2C->unkDC) {
        b = (func_8036648C_StructA *)D_801BC03C;
    } else {
        b = (func_8036648C_StructA *)D_801BC3D8;
    }
    o = arg0->unk5C;
    a->unk392 = 0;
    if (a->unk2 <= 0 || a->u30.bf.b29 != 0) {
        func_800058DC((s32)arg0, func_80222E84);
        return;
    }
    if (GB[0x1031] == 0xF) {
        return;
    }
    if (b->unk2 > 0 && b->u30.bf.b29 == 0) {
        if (GB[0x1031] != 5) {
            return;
        }
        if ((a->u30.h & 7) == 5U) {
            func_8022397C(arg0);
            return;
        }
        if (a->u30.bf.b31 == 1) {
            return;
        }
        if (a->u30.bf.b25 == 4) {
            return;
        }
        if (a->u30.bf.b25 == 1) {
            return;
        }
    }
    func_802237B0((s32)arg0, 1);
    k = a->u30.bf.b19;
    if (k == 2) {
        o->unk7C = D_80386480;
    } else if (k == 3) {
        o->unk7C = D_80386470;
    } else {
        o->unk7C = D_80386450;
    }
    func_8013C6FC((s32)arg0, arg1, 1);
    o->unk80 = 2;
    func_800058DC((s32)arg0, (void *)func_80366648);
}
