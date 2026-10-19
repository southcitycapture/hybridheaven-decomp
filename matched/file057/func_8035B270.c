#include "context.h"

struct func_8035B270_S3 { u8 pad[4]; s32 f4; s32 f8; f32 fC; };
struct func_8035B270_S2 { u8 pad[0x2C]; struct func_8035B270_S3 *f2C; };
struct func_8035B270_S1 { u8 pad[0x24]; struct func_8035B270_S2 *f24; };
struct func_8035B270_S0 { u8 pad[0xC]; struct func_8035B270_S1 *fC; u8 pad2[0x2E]; u16 f3E; };
extern f32 D_8038A064;
extern f32 D_8038A068;

void func_8035B270(struct func_8035B270_S0 *arg0, s32 arg1) {
    struct func_8035B270_S3 *p = arg0->fC->f24->f2C;
    if (((u8 *)D_8038CC14)[0x31] == 1) {
        func_80020718(0x105);
        arg0->f3E = 1;
        func_802254F8(arg0, 0x32, 2);
        ((u8 *)D_8038CC14)[0x31] = 2;
    }
    if (arg0->f3E == 0) {
        func_801CE4D4(arg0, 0x21, p->f4, p->f8, p->fC, 0xFF, 0xFF, 0x40, 0xC0, 0, 0xFF, 0x20, 0, 0xFF, 0, 0x20, 0x32, D_8038A064, 2);
        func_801CE4D4(arg0, 0x22, p->f4, p->f8, p->fC, 0xFF, 0xFF, 0x40, 0xC0, 0, 0xFF, 0x20, 0, 0xFF, 0, 0xA, 0x32, D_8038A068, 1);
    }
    if (arg0->f3E++ >= 0x33) {
        func_800058DC(arg0, func_8035B234);
    }
}
