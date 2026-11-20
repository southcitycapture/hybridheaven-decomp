#include "common.h"
struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};
extern struct func_800243F0_Struct *D_800CBDA4;
struct func_80024F18_Struct {
    u8 pad0[0x93];
    u8 unk93;
    u8 pad94;
    u8 unk95;
    u8 pad96[3];
    u8 unk99;
    u16 unk9A;
    u8 pad9C[2];
    u8 unk9E;
    u8 pad9F;
    s16 unkA0;
};
#define P ((struct func_80024F18_Struct *)D_800CBDA4)


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

/* GGA: sndCmdVibratoStep */
void func_80025150(void *arg0) {
    arg0 = D_800CBDA4;
    if (((struct func_80025150_Struct *)arg0)->unk94 == 0) {
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
