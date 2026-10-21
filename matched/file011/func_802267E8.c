#include "context.h"

typedef struct func_802267E8_Bits {
    u32 a:1;
    u32 b:2;
    u32 pad:8;
    u32 c:2;
    u32 rest:19;
} func_802267E8_Bits;
extern void func_800058DC(void *, void *);
extern u8 D_801BCC21;
void func_8022693C(s32 arg0, s32 arg1);

void func_802267E8(u8 *arg0, s32 arg1) {
    u16 *p;
    s32 pad;

    p = (u16 *)(arg0 + 0x6C);

    if (((D_801BCC21 >= 10) && (D_801BCC21 != 0xF)) || (*(s16 *)((u8 *)&D_801BC3D8 + 2) <= 0) || (((func_802267E8_Bits *)((u8 *)&D_801BC3D8 + 0x30))->b != 0) || (*(s16 *)((u8 *)&D_801BC03C + 2) <= 0) || (((func_802267E8_Bits *)((u8 *)&D_801BC03C + 0x30))->b != 0)) {
        func_800058DC(arg0, func_8022693C);
    }
    if (D_801BCC21 == 7) {
        u8 t;

        t = *((u8 *)&D_801BC03C + 0x2D9);
        if (t != 0xB && t != 0xD && t != 0xE && t != 0x12 && t != 0x11 && t != 0x14) {
            *(u16 *)(arg0 + 0x6C) = 0;
        }
    }
    if (D_801BCC21 == 5) {
        if (((func_802267E8_Bits *)((u8 *)&D_801BC3D8 + 0x30))->c == 0) {
            *p = *p + 1;
            if (*p >= 0x12D) {
                func_80226710(*(void **)(arg0 + 0xC), 0x507, 1.0f);
                *p = 0;
            }
        }
    }
}
