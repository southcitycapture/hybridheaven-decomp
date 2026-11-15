#include "common.h"
struct func_8023A2BC_Struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B[0x6A - 0x1B];
    u8 unk6A;
    u8 unk6B;
};
extern struct func_8023A2BC_Struct D_80240880;
#define B ((u8 *)&D_80240880)
struct func_8023A424_Struct {
    u8 pad[0x98];
    s32 unk98;
};
s32 func_8023A424(struct func_8023A424_Struct *arg0, u8 arg1);
s32 func_8023A51C(s32 arg0, u8 arg1);
extern void (*D_80216D10[])(void *, s32);

typedef struct { s8 v[4]; } func_8023B148_S4;
extern u8 D_802406D0[];
extern func_8023B148_S4 D_8023E5AC;
extern func_8023B148_S4 D_8023E5B0;
extern s32 D_8023A4AC(void *, u8);
extern void D_8001B204(s32, s16, s16, void *, u8, s32);

void func_8023B148(void *arg0, u8 arg1) {
    func_8023B148_S4 sp5C;
    func_8023B148_S4 sp58;
    u8 v;
    s32 i;
    s16 s2;

    sp5C = D_8023E5AC;
    sp58 = D_8023E5B0;
    s2 = arg1 - 0x96;
    if (s2 < 0) {
        s2 = 0;
    }
    for (i = 0; i < 4; i = (i + 1) & 0xFF) {
        if ((B[0x20] == 3) && (func_8023A51C((s32)arg0, i) == 0)) {
            v = (u8)s2;
        } else if ((B[0x20] == 4) && (D_8023A4AC(arg0, i) == 0)) {
            v = (u8)s2;
        } else if ((B[0x20] == 1) && (func_8023A424(arg0, i) == 0)) {
            v = (u8)s2;
        } else {
            v = (u8)arg1;
        }
        D_8001B204(i & 0xFF, sp5C.v[i] + D_80240880.unk14 + 0x3E8, sp58.v[i] + D_80240880.unk16, D_802406D0, v, *(s32 *)(B + i * 4 + 0x24));
    }
}
