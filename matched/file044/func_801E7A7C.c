#include "common.h"

extern s32 D_801ECEE8;
extern s32 D_801ECEF0;
extern f32 D_801ECEF4;
extern f32 D_801ECEF8;
extern u8 D_801DAB14[];
struct func_801E71AC_Struct { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
#define SS ((struct func_801E71AC_Struct *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)D_801DAB14 + 8) + 0x24) + 0x2C)))
extern void func_801C1000(s32, s32);                       /* extern */
extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();
extern s32 func_801CE284(void);
extern void func_8038D28C(s32 arg0);
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
        D_801ECEF4 = 0.100000001f;
        D_801ECEF8 = 0.0500000007f;
        return 0x27;
    }
end:
    return 0x26;
}
