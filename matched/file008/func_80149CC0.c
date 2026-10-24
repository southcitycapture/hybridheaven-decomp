#define func_80149CC0 D_80149CC0
#include "context.h"
#undef func_80149CC0

typedef struct func_80149CC0_Inner {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80149CC0_Inner;
typedef struct func_80149CC0_Struct {
    u8 pad0[0x94];
    s8 unk94;
    u8 pad1[0xA2 - 0x95];
    u8 unkA2;
    u8 pad2[1];
    func_80149CC0_Inner *unkA4;
} func_80149CC0_Struct;

extern u8 func_8037FE88[];
extern u8 func_8037F42C[];
extern u8 func_803809A4[];
extern void func_8014AB48();

void func_80149CC0(func_80149CC0_Struct *arg0, s32 arg1) {
    func_80149CC0_Inner *in = arg0->unkA4;
    s32 old = (s8)arg0->unkA2;
    u16 f = in->unkC;

    if (f & 0x800) {
        arg0->unk94 = 1;
        arg0->unkA2 = 1;
    } else if (f & 0x400) {
        arg0->unk94 = 1;
        arg0->unkA2 = 3;
    } else if (f & 0x200) {
        arg0->unk94 = 1;
        arg0->unkA2 = 0;
    } else if (f & 0x100) {
        arg0->unk94 = 1;
        arg0->unkA2 = 2;
    }
    if (arg0->unk94 != 0) {
        if (arg0->unkA2 ^ old) {
            func_80020744(0x300);
        }
        func_80148074((u8 *)arg0);
    }
    f = in->unk4;
    if ((f & 0x8000) && arg0->unk94 != 0) {
        func_80147DCC(2);
        func_80020744(0x104);
        func_801471DC((s32)D_801BED18);
        if (arg0->unkA2 == 0) goto c0;
        if (arg0->unkA2 == 1) goto c1;
        if (arg0->unkA2 == 2) goto c2;
        if (arg0->unkA2 != 3) goto end;
        goto c3;
c0:
        func_800058DC(arg0, func_8037FE88);
        return;
c1:
        func_800058DC(arg0, func_80149E84);
        return;
c2:
        func_800058DC(arg0, func_8037F42C);
        return;
c3:
        func_800058DC(arg0, func_803809A4);
        return;
    } else if ((f & 0x4000) || (f & 0x1000)) {
        func_80148E44((s32)arg0);
        func_80148FC4((func_80148FC4_Struct *)arg0, (s32)func_8014AB48, 1, 0);
    }
end:
    return;
}
