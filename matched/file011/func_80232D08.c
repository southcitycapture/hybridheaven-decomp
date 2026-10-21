#include "context.h"

struct func_80232D08_Struct {
    u8 pad0[0x82];
    u16 unk82;
    u16 a[5];
    u8 pad1[0x2B8 - 0x8E];
    s16 w[6];
    u8 pad2[0x2D9 - 0x2C4];
    u8 unk2D9;
    u8 pad3[0x397 - 0x2DA];
    u8 unk397;
};
extern u8 D_801842AB[];

void func_80232D08(struct func_80232D08_Struct *arg0, u16 arg1) {
    s32 mask;
    u8 cnt;
    u8 avg;
    s32 m2;
    s32 i;
    s32 k;

    mask = 0;
    cnt = 0;
    avg = (arg0->a[1] + arg0->a[2] + arg0->a[3] + arg0->a[4] + arg0->a[0]) / 5;
    for (i = 0; i < 5; i = (i + 1) & 0xFF) {
        if (avg + 5 < arg0->a[i]) {
            mask |= 1 << (i + 1);
            mask &= 0xFF;
            cnt++;
        }
    }
    if (mask != 0 && (D_801842AB[arg0->unk2D9 * 0x1C] & mask)) {
        {
            m2 = mask;
            mask = mask * 1;
            i = 0;
            k = 0;
            do {
                if ((u32)m2 & (1 << k)) {
                    arg0->w[i] -= (arg1 * (&arg0->unk82)[i]) / (cnt * (arg0->a[0] + arg0->a[1] + arg0->a[2] + arg0->a[3] + arg0->a[4]));
                }
                i = (i + 1) & 0xFF;
                k = i;
            } while (i < 6);
        }
    }
    arg0->unk397 = mask;
}
