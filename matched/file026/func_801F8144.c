#include "context.h"
struct func_801F8144_S3 { u8 pad[4]; f32 u4; f32 u8; f32 uC; u8 pad2[2]; s16 u12; };
struct func_801F8144_S2 { u8 pad[0x2C]; struct func_801F8144_S3 *u2C; };
struct func_801F8144_S1 { u8 pad[0x24]; struct func_801F8144_S2 *u24; };
struct func_801F8144_S0 { u8 pad[8]; struct func_801F8144_S1 *u8; };
extern f32 D_801FD3C0;
extern f32 D_801FD3C4;
#define P (*(struct func_801F8144_S0 **)&D_801DAB14)

s32 func_801F8144(s32 arg0, s32 arg1) {
    if (D_801FB9C8 == 0) goto c0;
    if (D_801FB9C8 == 1) goto c1;
    if (D_801FB9C8 == 2) goto c2;
    return 0xD;
c0:
    if (func_801C0B8C(0x0226D79F) != 0) {
        P->u8->u24->u2C->u4 = D_801FD3C0;
        P->u8->u24->u2C->u8 = 0.0f;
        P->u8->u24->u2C->uC = D_801FD3C4;
        P->u8->u24->u2C->u12 = 0xC71;
        func_801CC470(0, 0x0190002F, 0, 0, 3.0f);
        D_801FB9C8 = 1;
    }
    goto end;
c1:
    if (func_801CFD50() != 0) {
        func_801CC470(0, 0x01900026, 0, 0, 3.0f);
        D_801FB9C8 = 2;
    }
    goto end;
c2:
    if (func_801CFD50() != 0) {
        func_801CC470(0, 0x01900026, 0, 1, 1.0f);
        return 0xE;
    }
end:
    return 0xD;
}
