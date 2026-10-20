#include "context.h"
extern s32 D_801ECEF0;
extern f32 D_801EDDCC;
extern f32 D_801EDDD0;

s32 func_801E7A7C(s32 arg0, s32 arg1) {
    s32 s = D_801ECEE8;
    if (s == 0) goto c0;
    if (s == 1) goto c1;
    if (s == 2) goto c2;
    return 0x26;
c0:
    if (func_801C0B8C(0x192D50) != 0) {
        func_801CC4D8(0, 0x01B80038, 0, 0, 3.0f);
        D_801ECEE8 = 1;
    }
    goto end;
c1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B80038, 0, 0, 6.0f);
        D_801ECEF0 = (s32)SS->unk8;
        D_801ECEE8 = 2;
    }
    goto end;
c2:
    if (func_801CE284() != 0) {
        func_8038D28C(0x260);
        func_801C1000(4, 0);
        D_801ECEF4 = D_801EDDCC;
        D_801ECEF8 = D_801EDDD0;
        return 0x27;
    }
end:
    return 0x26;
}
