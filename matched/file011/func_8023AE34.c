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
extern void (*D_80216D10[])(void *, s32);
s32 func_8023A210(void);
s32 func_8023A234(void);


typedef struct func_8023AE34_Struct2 {
    u8 pad[2];
    u16 unk2;
    u16 unk4;
} func_8023AE34_Struct2;

typedef struct func_8023AE34_Struct {
    u8 pad[0x94];
    func_8023AE34_Struct2 *unk94;
} func_8023AE34_Struct;

extern u8 D_8023A3C4(u8, u16, void *);
extern s32 D_8023A4EC(u8);

s32 func_8023AE34(void *arg0) {
    func_8023AE34_Struct2 *temp_v0;
    u16 sp22;
    u16 sp20;
    u16 sp1E;
    s32 temp_v0_2;
    u8 idx;

    temp_v0 = ((func_8023AE34_Struct *)arg0)->unk94;
    sp1E = 0xFF;
    sp22 = temp_v0->unk4;
    sp20 = temp_v0->unk2;
    if (func_8023A210() != 0) {
        return 0;
    }
    if (D_80240880.unk6A == 0xFF) {
        if (sp22 & 8) {
            sp1E = 0;
        } else if (sp22 & 1) {
            sp1E = 1;
        } else if (sp22 & 4) {
            sp1E = 2;
        } else if (sp22 & 2) {
            sp1E = 3;
        }
        if ((sp20 & 0x2000) || (sp20 & 0x10)) {
            sp1E = sp1E + 4;
        }
        if (sp1E < 0x100) {
            D_80240880.unk6A = sp1E;
        }
        return 0;
    }
    if (D_80240880.unk6B == 0xFF) {
        if (sp22 & 8) {
            sp1E = 0;
        } else if (sp22 & 1) {
            sp1E = 1;
        } else if (sp22 & 4) {
            sp1E = 2;
        } else if (sp22 & 2) {
            sp1E = 3;
        }
        if (sp1E != 0xFF) {
            D_80240880.unk6B = sp1E & 0xFF;
            idx = D_8023A3C4(sp1E + (D_80240880.unk6A * 0xA), sp22, &D_80240880);
            if (idx != 0xFF) {
                if (D_8023A4EC(idx) != 0) {
                    goto ret1;
                }
            }
            D_80240880.unk6A = D_80240880.unk6B = 0xFF;
            func_8023A234();
            return 0;
        ret1:
            return 1;
        }
    }
    return 0;
}
