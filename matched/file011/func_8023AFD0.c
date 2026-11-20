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
extern s32 func_8023639C();
s32 func_80236C9C();
extern void (*D_80216D10[])(void *, s32);

extern s32 func_80236320();
extern s32 func_80234CE8();
extern s32 D_8023E3B8;
extern u32 D_8023E54C[];
extern u8 D_80240678[];
extern u8 D_8024067C[];
extern u8 D_80240684[];
extern u8 D_80240688[];
extern u8 D_80240690[];
extern u8 D_8024069C[];
extern u8 D_802406A0[];
extern u8 D_802406A8[];
extern u8 D_802406AC[];

typedef struct func_8023AFD0_Struct {
    u8 pad0[0x24];
    u8 *unk24[5];
} func_8023AFD0_Struct;

#define S (((func_8023AFD0_Struct *)&D_80240880)->unk24)

void func_8023AFD0(u8 arg0) {
    u8 i;
    s32 j;
    u32 *src;

    src = &D_8023E54C[(u8)(arg0 * 4)];
    for (i = 0; i < 4; i++) {
        j = i;
        S[i] = (u8 *)src[j];
    }
    if (arg0 == 0) {
        if (func_80236320(D_8023E3B8) == 0) {
            S[2] = D_80240678;
        } else {
            S[2] = D_8024067C;
        }
        if (func_8023639C(D_8023E3B8) != 0) {
            S[0] = D_80240684;
            S[1] = D_80240688;
            S[2] = D_80240690;
        }
        if (func_80236C9C() != 0) {
            j = func_80234CE8(D_8023E3B8);
            if (!(j & 1)) {
                S[2] = D_8024069C;
                S[1] = D_8024069C;
                S[0] = S[1];
            }
            if (j & 2) {
                S[3] = D_802406A0;
            } else {
                S[3] = D_802406A8;
            }
        }
    }
    if (arg0 == 4) {
        S[4] = D_802406AC;
    }
}
