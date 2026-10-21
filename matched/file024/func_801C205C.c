#include "context.h"
extern void func_80145348(u8 *, s32, s32);
extern void func_80146208(u8 *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_80006214(void *);
extern u8 func_801C220C[];

void func_801C205C(u8 *arg0, s32 *arg1) {
    s32 pad;
    u8 sp5B;
    u8 n;
    u8 i;

    n = D_80006214(arg0);
    for (i = 0; i < 4; i++) {
        func_80146208(arg0, &sp5B, 0x66, (s16)((i << 6) + 0x10), 0xBC, 0x40, 0x20, 0, 0, 0, 0x228, i + 0x15);
        func_80145348(arg0, 1, 0);
    }
    func_80146208(arg0, &sp5B, 0x66, (s16)((i << 6) + 0x10), 0xBC, 0x20, 0x20, 0, 0, 0, 0x228, i + 0x15);
    func_80145348(arg0, 1, 0);
    D_801CFD08 = arg1[n];
    n = D_80006214(arg0);
    for (i = 0; i < n; i++) {
        *(s16 *)((u8 *)arg1[i] + 0x28) = 0x100;
        func_801C1040(arg1[i], 0, 1);
    }
    *(s16 *)(arg0 + 0x3C) = 0;
    func_800058DC((s32)arg0, func_801C220C);
}
