#include "common.h"
extern s32 D_801636F4;
extern u8 D_801BBB98[];
typedef struct func_80117610_Struct {
    u8 pad0[0x18E];
    u16 unk18E;
    u16 unk190;
    u8 pad1[0x1D8 - 0x192];
    u16 unk1D8;
    u8 pad2[2];
    u16 unk1DC;
} func_80117610_Struct;
extern func_80117610_Struct D_801BBBF0;
extern void func_8001DFFC(s32, s32, s32, void *, s32, s32, s32, s32);


typedef struct func_80118038_Struct {
    u8 pad0[0x18];
    s8 unk18;
    u8 pad19[0xA2 - 0x19];
    s16 unkA2;
    s16 unkA4;
} func_80118038_Struct;
extern u8 D_801895E0[];
extern f64 D_80189B40;
#define H ((func_80118038_Struct *)&D_801BBBF0)
#define ABS(x) (((x) < 0) ? -(x) : (x))

#define DPRINT (void)
#define A0 (*(s16 *)p0)
#define A1 (*(s16 *)p1)
void func_80118038(void *p0, void *p1) {
extern void func_8001DFFC();
    f32 x, y;
    s16 t;

    func_8001DFFC(8, 0x14, 0x6E, D_801895E0, H->unkA2, H->unkA4);
    x = (ABS(H->unkA2) > 10) ? H->unkA2 : 0.0;
    y = (ABS(H->unkA4) > 10) ? (s32)(H->unkA4 * (u32)H->unk18) : 0.0;
    if (ABS(x) > ABS(y)) {
        A0 = (s16)(A0 + (16.0f * x) / 20.0) & 0x1FFF;
    }
    if (ABS(x) < ABS(y) || (ABS(x) < 10.0f && ABS(y) < 10.0f)) {
        t = A1 + (*(s16 *)D_801BBB98 + (2048.0f * y) / D_80189B40 - A1) * 0.125;
        if (ABS(t) < 0x800) {
            A1 = t;
        }
    }
    if (D_801636F4 != 0) {
        DPRINT(D_801895E0 + 0x14, (A0 < 0) ? D_801895E0 + 0x34 : D_801895E0 + 0x38, ABS(A0), (A1 < 0) ? D_801895E0 + 0x3C : D_801895E0 + 0x40, ABS(A1));
    }
    DPRINT(D_801895E0 + 0x44);
}
