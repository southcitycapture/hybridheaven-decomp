#include "context.h"

extern u16 D_8017DCA8[];
extern u16 D_8017DCB6[];

void func_8022F424(void) {
    s32 i;
    s32 j;
    u16 *p;
    u32 v;
    s32 f;

    f = D_801BBBF0[0x1030];
    p = (f == 0) ? D_8017DCA8 : D_8017DCB6;
    if (f == 0) {
        v = (*(u8 **)(D_801BBBF0 + 0x720))[0xB];
    } else {
        v = D_801BBBF0[0x73C];
    }
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB) {
        if (f == 0 && (D_801BBBF0[0x725] == 0x3E || D_801BBBF0[0x725] == 0x3F || D_801BBBF0[0x725] == 0x52 || D_801BBBF0[0x725] == 0x54 || D_801BBBF0[0x725] == 0x55) && ((*(u32 *)(D_801BBBF0 + 0x47C) << 9) >> 30) == 3) {
            v = (v * 2) & 0xFF;
        }
        i = 0;
        if (f == 0 && D_801BBBF0[0x725] == 0x53 && ((*(u32 *)(D_801BBBF0 + 0x47C) << 9) >> 30) == 3) {
            v = (v >> 1) & 0xFF;
        }
        f = v;
        j = 0;
        do {
            if (f & (1U << j)) {
                v = *p;
                if ((s32)v < 0x270F) {
                    *p = v + 1;
                }
            }
            i = (i + 1) & 0xFF;
            j = i;
            p += 1;
        } while (i < 6);
    }
}
