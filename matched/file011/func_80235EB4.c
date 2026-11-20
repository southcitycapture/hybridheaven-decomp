#include "common.h"
extern u8 D_802407E8[];
extern void (*D_80216D10[])(void *, s32);
void func_80020744(s32);
typedef struct func_80234450_Struct {
    u8 pad[0x8];
    u8 unk8;
    u8 pad2[0x3];
} func_80234450_Struct;
struct func_802358A0_Struct {
    u8 pad[0xA1];
    s8 unkA1;
    u8 pad2[2];
    s8 unkA4;
    s8 unkA5;
};
void func_802358A0(struct func_802358A0_Struct *arg0);
typedef struct func_80235E00_Struct {
    u8 pad[0xA5];
    s8 unkA5;
} func_80235E00_Struct;
void func_80235E00(func_80235E00_Struct *arg0, s8 arg1);
struct func_80235E54_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
};
void func_80235E54(struct func_80235E54_Struct *arg0, s8 arg1);
typedef struct func_80235EB4_Inner { u8 pad[0xC]; u16 unkC; } func_80235EB4_Inner;
typedef struct func_80235EB4_Struct {
    u8 pad[0x94];
    func_80235EB4_Inner *unk94;
    u8 pad2[0xA4 - 0x98];
    s8 unkA4;
    s8 unkA5;
} func_80235EB4_Struct;


s32 func_80235EB4(func_80235EB4_Struct *arg0) {
    func_80235EB4_Inner *p;

    p = arg0->unk94;
    {
        s8 sp1B;
        u8 i;
        s8 sp19;
        s32 f;
        sp1B = 0;
        if (((func_80234450_Struct *)D_802407E8)[arg0->unkA5].unk8 == 0) {
            for (i = 0; i < arg0->unkA4; i++) {
                if (((func_80234450_Struct *)D_802407E8)[i].unk8 > 0) {
                    arg0->unkA5 = i;
                    break;
                }
                arg0->unkA5 = arg0->unkA4;
            }
        }
        sp19 = arg0->unkA5;
        f = p->unkC;
        if (f & 0x800) {
            sp1B = 1;
            if (arg0->unkA5 > 0) {
                func_80235E00((func_80235E00_Struct *)arg0, arg0->unkA5 - 1);
            }
        } else if (f & 0x400) {
            sp1B = 1;
            if (arg0->unkA5 < arg0->unkA4 - 1) {
                func_80235E54((struct func_80235E54_Struct *)arg0, arg0->unkA5 + 1);
            }
        }
        if (sp19 != arg0->unkA5) {
            func_80020744(0x300);
        }
        func_802358A0((struct func_802358A0_Struct *)arg0);
        return sp1B;
    }
}
