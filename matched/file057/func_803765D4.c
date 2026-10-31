#include "common.h"
extern u8 D_801842A0[];


typedef struct { s32 a; s32 b; } func_803765D4_S8;
typedef struct { u8 flag; u8 pad[3]; u8 *p; } func_803765D4_E;
typedef struct {
    u8 pad0[0xA];
    s16 value;
    u8 padC[0x2C];
    u32 : 3;
    u32 f : 1;
    u32 : 28;
    u8 pad3C[0x14A];
    u8 flags[20 * 6];
} func_803765D4_A;

extern func_803765D4_S8 D_80388400;
extern u8 D_8038CEC0;
extern func_803765D4_E D_8038CEC4[];

#define OUT ((func_803765D4_E *)p)

void func_803765D4(func_803765D4_A *arg0) {
    s32 count;
    s32 n;
    u8 *entries[18];
    u8 *p;
    u8 i;
    u8 want;
    func_803765D4_S8 sp10;

    sp10 = D_80388400;
    count = 0;
    if (arg0->f == 1) {
        want = 1;
    } else {
        want = 0;
    }
    for (i = 0; i < 20; i++) {
        if (want == D_801842A0[i * 0x1C + 0x41C] && arg0->flags[i * 6] == 1) {
            p = &D_801842A0[i * 0x1C];
            entries[count] = p + 0x40C;
            count = (count + 1) & 0xFF;
        }
    }
    if (count != 0) {
        D_8038CEC0 = count;
        p = (u8 *)D_8038CEC4;
        for (i = 0, n = count; i < n; i++) {
            OUT->p = entries[i];
            if (arg0->value >= entries[i][6]) {
                OUT->flag = 1;
            } else {
                OUT->flag = 0;
            }
            p += sizeof(func_803765D4_E);
        }
    }
}
