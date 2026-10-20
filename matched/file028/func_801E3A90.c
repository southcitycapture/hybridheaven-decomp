#include "context.h"
extern s32 D_801CFD40();
extern void func_801C0D04(s32, s32);
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_80208834;
extern f64 D_80208838;
extern f32 D_80208840;
extern f32 D_80208844;

struct func_801E3A90_S3 { u8 pad0[4]; f32 u4; f32 u8; f32 uC; u8 pad10[2]; s16 u12; };
struct func_801E3A90_S2 { u8 pad[0x2C]; struct func_801E3A90_S3 *u2C; };
struct func_801E3A90_S1 { u8 pad[0x24]; struct func_801E3A90_S2 *u24; };
struct func_801E3A90_S0 { u8 pad[8]; struct func_801E3A90_S1 *u8; };

#define B ((struct func_801E3A90_S0 *)D_801DAB14)

s32 func_801E3A90(s32 arg0, s32 arg1) {
    u64 t;
    struct func_801E3A90_S3 *p;

    if (D_80208E1C == 0) goto c0;
    if (D_80208E1C == 1) goto c1;
    if (D_80208E1C == 2) goto c2;
    return 6;
c0:
    B->u8->u24->u2C->u4 = 0.0f;
    B->u8->u24->u2C->u8 = 0.0f;
    B->u8->u24->u2C->uC = D_80208834;
    B->u8->u24->u2C->u12 = 0x1000;
    func_801CC470(0, 0x01680003, 0, 0x1100, 1.0f);
    func_801C0D04(4, 0);
    D_80208E1C = 1;
    goto done;
c1:
    {
        if (func_801C0DE4(4, 0, 0x40000000) != 0) {
            func_801C0EB0(4, 0);
            func_801CC4D8(0, 0x03480010, 0, 1, 15.0f);
            D_80208E1C = 2;
        } else {
            t = func_801C0F18(4, 0);
            B->u8->u24->u2C->uC = (f32)((f32)(func_80034C24(t) / D_80208838) * 0.5f * -33.0f) + D_80208840;
            if (func_801CFE28(0x01680003, 0x14) != 0 || func_801CFE28(0x01680003, 0x28) != 0) {
                p = B->u8->u24->u2C;
                func_8038D33C(p->u4, p->u8, *(s32 *)&p->uC, 0x4A2, D_80208844, 1.0f);
                return 6;
            }
        }
        goto done;
    }
c2:
    {
        if (D_801CFD40() == 0) {
            return 7;
        }
    }
done:
    return 6;
}
