#include "context.h"

struct func_80025150_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad1[0x36 - 7];
    s16 unk36;
    u8 pad2[0x94 - 0x38];
    u8 unk94;
    u8 unk95;
    u16 unk96;
    u8 unk98;
    u8 unk99;
    u8 pad3[2];
    u16 unk9C;
};
extern u8 D_80048200[];
#define P ((struct func_80025150_Struct *)D_800CBDA4)

void func_80025150(void *arg0) {
    if (arg0) {}
    if (P->unk94 == 0) {
        P->unk96 = P->unk96 + P->unk95;
        if (P->unk96 >= 0x100) {
            P->unk96 = P->unk96 & 0xFF;
            P->unk6 = P->unk6 | 2;
            P->unk98 = P->unk98 + P->unk99;
            P->unk98 = P->unk98 & 0x3F;
            if (P->unk9C < 0x8000) {
                P->unk36 = P->unk9C >> 7;
                P->unk36 = (D_80048200[P->unk98 & 0x1F] * P->unk36) >> 8;
            } else {
                P->unk36 = (P->unk9C >> 8) & 0x7F;
                P->unk36 = P->unk36 + 2;
                P->unk36 = (D_80048200[P->unk98 & 0x1F] * P->unk36) >> 1;
            }
            if (P->unk98 >= 0x20) {
                P->unk36 = -P->unk36;
            }
        }
    }
}
