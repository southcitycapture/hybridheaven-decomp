#include "context.h"

typedef struct func_8036F898_StructA {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036F898_StructA;
typedef struct func_8036F898_StructB {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 unk30;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
    u8 pad3;
    u8 unk392;
} func_8036F898_StructB;
extern func_8036F898_StructA D_801BBBF0;
extern void func_802233B0(void *, s32);
extern void func_8022397C(void *, s32);
extern s32 func_80010550(s32, s32, void *);
extern void func_8021E59C(void);

void func_8036F898(void *arg0, s32 arg1) {
    func_8036F898_StructB *v;
    s32 a5c;

    if (arg0 == D_801BBBF0.unkDC) {
        v = (func_8036F898_StructB *)D_801BC03C;
    } else {
        v = (func_8036F898_StructB *)D_801BC3D8;
    }
    a5c = *(s32 *)((u8 *)arg0 + 0x5C);
    if (v->unk2 <= 0 || ((v->unk30 << 1) >> 30) != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        if ((*(u16 *)((u8 *)v + 0x30) & 7) == 5) {
            func_8022397C(arg0, a5c);
            return;
        }
        *((u8 *)v + 0x33) = (*((u8 *)v + 0x33) & 0xFFE7) | 8;
        *((u8 *)v + 0x32) = (*((u8 *)v + 0x32) & 0xFF1F) | 0x20;
        if (func_80010550(arg1, a5c, arg0) != 0) {
            v->unk390 = 0;
            *((u8 *)v + 0x33) = *((u8 *)v + 0x33) & 0xFFE7;
            func_800058DC((s32)arg0, func_8021E59C);
        }
        v->unk392 = 0;
    }
}
