#include "context.h"

extern void func_8013A334(s32 *, u8 *, s32, s32);
extern void func_80020718(s32);
extern f32 D_801E33A8;
extern f32 D_801E33AC;

void func_801CC830(u8 *arg0, s32 arg1) {
    u8 *v1;
    s32 sp78;
    s32 sp6C[3];
    u8 *t2;

    v1 = *(u8 **)(arg0 + 0xC);
    t2 = *(u8 **)(*(u8 **)(v1 + 0x24) + 0x2C);
    sp78 = *(s32 *)(v1 + 0x5C);
    if (D_801E4080->unk4C >= 2) {
        D_801E4080->unk4E = 0;
        func_801CE330(arg0, 7, *(f32 *)(t2 + 4), *(f32 *)(t2 + 8), *(f32 *)(t2 + 0xC),
            *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0xFF, *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0, 1, 0x3C, D_801E33A8, 0xC);
        func_80006214(*(void **)(arg0 + 0xC));
        func_8013A334(sp6C, D_8008DA88, sp78, 0x1B);
        func_80006214(arg0);
        func_801CE330(arg0, 2, *(f32 *)&sp6C[0], *(f32 *)&sp6C[1], *(f32 *)&sp6C[2],
            *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0xFF, *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0, 0x1E, 0x3C, D_801E33AC, 9);
        func_80020718(0x10A);
        func_800058DC(arg0, func_801CC660);
    }
}
