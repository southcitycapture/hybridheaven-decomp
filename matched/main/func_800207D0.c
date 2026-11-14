#include "common.h"
extern u8 D_800CBAB1;
extern u8 D_800CBB22;
extern u8 D_800CBBD8[];
extern void (*D_80047E0C[])(void);


extern u32 D_800CBB28[];

/* GGA: sndRequest (HH adds the D_800CBBD8 flag for ids 0x607-0x633) */
void func_800207D0(u16 id, u8 pan, u8 vol) {
    u16 *idp;
    u32 req;
    s32 i;
    u8 flag;

    if (id) {
        idp = &id;
        D_800CBAB1 = 0xFF;
        if (!pan || pan >= 0x80) {
            req = *idp;
        } else {
            req = *idp + (pan << 16);
        }
        if (vol != 0) {
            req |= vol << 24;
        }
        if (D_800CBB22 < 8) {
            if (D_800CBB22 != 0) {
                for (i = 0; i < D_800CBB22; i++) {
                    if (id == (D_800CBB28[i] & 0xFFFF)) {
                        D_800CBAB1 = 0;
                        return;
                    }
                }
            }
            D_800CBB28[D_800CBB22] = req;
            D_800CBB22++;
            flag = 1;
            if (*idp >= 0x607 && *idp < 0x634) {
                D_800CBBD8[0] = flag;
            }
        }
        D_800CBAB1 = 0;
    }
}
