#include "context.h"
extern void func_8013D09C();
extern void func_80236744();
typedef struct func_80364024_Bits {
    u32 b31 : 1;
    u32 rest : 31;
} func_80364024_Bits;

void func_80364024(s32 arg0, s32 arg1) {
    u8 *a1;
    u8 *v0;

    if (arg0 == D_801BBCCC) {
        a1 = D_801BC03C;
    } else {
        a1 = D_801BC3D8;
    }
    if (*(s16 *)((v0 = (arg0 != D_801BBCCC) ? D_801BC03C : D_801BC3D8) + 2) <= 0 || ((*(u32 *)(v0 + 0x30) << 1) >> 30) != 0 || a1[0x375] >= a1[0x376]) {
        func_800058DC((void *)arg0, (void *)func_8036265C);
        return;
    }
    if (a1[0x375] != 0 || (v0[0x2D8] != 0xF && v0[0x2D8] != 0 && v0[0x2D8] != 1) || (v0[0x30] & 1) != 1) {
        if (a1[0x2D8] == 9) {
            a1[0x31] = (a1[0x31] & 0xFFF8) | 2;
            ((func_80364024_Bits *)(v0 + 0x30))->b31 = 1;
            func_80236744(arg0, a1);
            func_800058DC((void *)arg0, (void *)func_80364174);
            return;
        }
        func_8013D09C(a1);
        {
            extern void func_8022C0A0();
            func_8022C0A0();
        }
        func_80360818(arg0, arg1);
    }
}
