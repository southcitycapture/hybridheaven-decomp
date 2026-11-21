#include "common.h"
extern u8 D_800CBE60[];
extern void func_800266B0(void *, void *, s32);
void func_80027EB0(void);
void func_80027EF4(void);

extern void func_800294D0(s32, void *);
extern u8 D_800CBFC0;

struct func_80027A90_Struct { s32 unk0; void *unk4; s32 unk8; };

s32 func_80027A90(struct func_80027A90_Struct *arg0, s32 arg1) {
    s32 v1;
    s32 m;
    u8 *t0;
    s32 s0;

    t0 = D_800CBE60 + (arg0->unk8 << 6);
    if (!(arg0->unk0 & 8)) {
        return 5;
    }
    func_80027EB0();
    *(s32 *)(D_800CBE60 + (arg0->unk8 << 6) + 0x3C) = 1;
    t0 += arg0->unk8;
    for (v1 = 0; v1 < 0x20; v1++) {
        t0[v1 + 6] = arg1;
    }
    D_800CBFC0 = 0xFE;
    func_800294D0(1, D_800CBE60 + (arg0->unk8 << 6));
    func_800266B0(arg0->unk4, 0, 1);
    func_800294D0(0, D_800CBE60 + (arg0->unk8 << 6));
    func_800266B0(arg0->unk4, 0, 1);
    s0 = t0[2];
    if ((s0 = (s32)(u64)(s0 & 0xC0)) == 0) {
        if (arg1 == 0) {
            if (t0[0x26] != 0) {
                s0 = 4;
            }
        } else if ((u8)(u32)(u64)(u32)(u64)t0[0x26] != 0xEB) {
            s0 = 4;
        }
    }
    func_80027EF4();
    return s0;
}
