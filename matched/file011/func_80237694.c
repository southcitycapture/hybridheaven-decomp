#include "common.h"

typedef struct func_80237694_Struct {
    u8 pad0[0x8];
    s32 unk8;
    u8 pad1[0x8C];
    void *unk98;
    u8 pad2[0x6];
    u8 unkA2;
    u8 pad3[0x8];
    s8 unkAB;
    u8 pad4[0x4];
    void *unkB0;
} func_80237694_Struct;

typedef struct func_80237694_Struct2 {
    u8 pad0[0x31];
    u8 unk31_hi : 1;
    u8 unk31_mid : 4;
    u8 unk31_lo : 3;
} func_80237694_Struct2;

extern void func_800058DC();
extern s32 func_80236A48();
extern void func_80236BC8(s32);
extern s32 func_80236C9C(void);
extern void func_80376CCC();
extern u8 D_8038CD70[];
extern void func_8023748C(void);
extern void func_80237768(void);
extern void func_8023B86C(void);

void func_80237694(func_80237694_Struct *arg0, s32 arg1) {
    func_80237694_Struct2 *temp_a2;

    temp_a2 = arg0->unk98;
    if (arg0->unkAB != 0) {
        arg0->unkB0 = D_8038CD70;
        func_80376CCC(temp_a2);
        temp_a2->unk31_lo = 0;
        temp_a2->unk31_hi = 1;
        func_800058DC(arg0, func_80237768, temp_a2);
        return;
    }
    if (arg0->unk8 == 0 && func_80236A48(arg0) != 0) {
        func_80236BC8(1);
        arg0->unkA2 = 0;
        if (func_80236C9C() != 0) {
            func_800058DC(arg0, func_8023B86C);
            return;
        }
        func_800058DC(arg0, func_8023748C);
    }
}
