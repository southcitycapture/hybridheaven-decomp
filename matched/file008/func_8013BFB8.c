#include "context.h"

struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
extern s32 func_8012C6B4(s32);
extern void func_8012D844(void *, u16, u16);
extern void func_8012D894(void *, u16, u16);
extern u16 D_8017D1D4[];
extern u16 D_8017D1D6;
extern u16 D_8017D1DC[];
extern u16 D_801BBC20;

void func_8013BFB8(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    s32 padv[1];
    u16 sp2A;
    s32 sp24;
    s32 v0;
    s32 v1;
    struct func_8013BFB8_Struct2 *s0;

    s0 = arg0->unk5C;
    sp2A = s0->unkE;
    if (s0->unk9E != 0) {
        s0->unk9E--;
        if (s0->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else {
        if (D_801BBC20 & 1) return;
        sp24 = func_8012C6B4(0x2BC);
        if ((arg1[1] & 0x100) && sp24 >= 0x119 && sp24 < 0x12D) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            s0->unk9E = func_8012C6B4(0xA) + 5;
        }
        v0 = arg1[1] & 0xFF;
        if (v0 != 0) {
            v1 = (sp24 / 20) & 0xFF;
            if (v1 < v0) {
                func_8012D844(arg0, arg1[0], arg1[4 + v1]);
                s0->unk9E = func_8012C6B4(0xA) + 5;
            }
        }
    }
    if (sp2A == 0x141 || sp2A == 0x142) {
        if (s0->unkA0 != 0) {
            s0->unkA0--;
            if (s0->unkA0 == 0) {
                func_8012D894(arg0, D_8017D1D4[0], D_8017D1D4[2]);
            }
        } else if (D_801BBC20 & 1) {
            if (func_8012C6B4(0x2BC) < 0x28) {
                func_8012D894(arg0, arg1[0], D_8017D1DC[func_8012C6B4(D_8017D1D6 & 0xFF) & 0xFF]);
                s0->unkA0 = func_8012C6B4(0xA) + 5;
            }
        }
    }
}
