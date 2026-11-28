#include "common.h"
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

void func_80232D08(struct func_80232D08_Struct *obj, u16 amount) {
    u8 mask;
    u8 cnt;
    u8 avg;
    u8 i;

    mask = 0;
    cnt = 0;
    avg = (obj->a[1] + obj->a[2] + obj->a[3] + obj->a[4] + obj->a[0]) / 5;
    for (i = 0; i < 5; i++) {
        if (avg + 5 < obj->a[i]) {
            mask |= 1 << (i + 1);
            cnt++;
        }
    }
    if (mask && (D_801842AB[obj->unk2D9 * 0x1C] & mask)) {
        for (i = 0; i < 6; i++) {
            if (mask & (1 << i)) {
                obj->w[i] -= (amount * (&obj->unk82)[i]) / (cnt * (obj->a[0] + obj->a[1] + obj->a[2] + obj->a[3] + obj->a[4]));
            }
        }
    }
    obj->unk397 = mask;
}
