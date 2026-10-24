#include "context.h"

typedef struct func_801DCCB0_Struct {
    u16 v;
} func_801DCCB0_Struct;

typedef struct func_801DCCB0_StructG {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DCCB0_StructG;

#define G801DCCB0 ((func_801DCCB0_StructG *)&D_801BBBF0)

extern u8 D_801E15E0[];
extern u8 D_801E16A0[];
extern u8 D_801E177C[];
extern f32 D_801E3DCC;
extern s32 D_801DC250(s32);
extern s32 D_801DCC50(u16, s32, u16 *, f32 *);

void func_801DCCB0(s32 a0, s32 a1, s32 arg2) {
    func_801DCCB0_Struct tmp;
    s32 v;
    s32 r;
    f32 *a2;
    s32 *pp;

    pp = &arg2;
    v = D_801DC250(a0);
    a2 = (f32 *)arg2;
    tmp.v = *(u16 *)(D_801E15E0 + (D_801E16A0[G801DCCB0->unk4] * 16 + G801DCCB0->unk35B * 2));
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v != 3) goto def;
    goto c3;
c1:
    *(u16 *)a1 = tmp.v;
    v = *(s32 *)a0;
    if (v == 0x1900220 || v == 0x19001E6) {
        *a2 = D_801E3DCC;
    }
    goto end;
c2:
    *a2 = 0.75f;
c3:
    r = D_801DCC50(tmp.v, a1, (u16 *)&D_801BBBF0, a2);
    if (r >= 4) {
        *(u16 *)a1 = tmp.v;
    } else {
        *(u16 *)a1 = *(u16 *)(D_801E177C + r * 2);
    }
    goto end;
def:
    *(u16 *)a1 = 0;
end:;
}
