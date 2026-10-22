#include "context.h"

extern u8 func_80146088(s32, void *, s32, s16);
extern void *D_80171CEC[];
extern struct { u8 pad[0xC]; void *p; } D_80181A84;

typedef struct func_802169AC_Struct {
    s16 f0, f2, f4, f6;
    u8 r, g, b, a;
    u8 padC[4];
    s16 f10, f12;
    u8 pad14[4];
    u16 f18;
    u8 pad1A[2];
    s32 f1C;
    u8 pad20[8];
    s16 f28, f2A;
    u16 f2C, f2E;
    s16 f30, f32;
} func_802169AC_Struct;

u8 func_802169AC(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u16 arg7, u16 arg8, u8 arg9, u16 arg10, u16 arg11) {
    s32 k;
    u8 pad[4];
    func_802169AC_Struct s;
    u8 sp2B;
    u8 *t;
    s32 id;

    id = arg10;
    *(s32 *)((u8 *)&s + (0x70 - 0x2C)) = arg2;
    s.f0 = arg3;
    s.f2 = arg4;
    s.f4 = arg5;
    s.f30 = arg5;
    s.f6 = arg6;
    s.f32 = arg6;
    s.r = s.g = s.b = 0xFF;
    s.a = arg9;
    s.f10 = arg2 | 4;
    s.f12 = 0;
    t = D_80171CEC[id];
    s.f18 = **(u16 **)t;
    s.f1C = ((s32 *)((void **)t)[1])[arg11];
    s.f28 = arg5;
    s.f2A = arg6;
    k = *(u16 *)&arg11;
    if (id == 0x209) {
        if (k == 0) goto a0;
        if (k == 2) goto a2;
        if (k != 3) goto end;
        goto a3;
    a2:
        s.f2A = s.f28 = 0x20;
        if (1) goto end;
    a0:
        s.f2A = s.f28 = 0x20;
        if (1) goto end;
    a3:
        s.f2A = (s.f28 = 0x58) - 0x50;
        if (1) goto end;
    } else if (id == 0x21C) {
        if (k == 0) goto b0;
        if (k != 6) goto end;
        goto b6;
    b0:
        s.f2A = s.f28 = 0x20;
        if (1) goto end;
    b6:
        s.f2A = (s.f28 = 0x38) - 0x31;
        if (1) goto end;
    } else if (id == 0xCB) {
        s.f2A = (s.f28 = 0x10) + 0x10;
    }
end:
    s.f2E = arg7;
    s.f2C = arg8;
    sp2B = func_80146088(arg0, (D_80181A84.p = &s, &D_80181A84), arg1, arg3);
    func_80006214((void *)arg0);
    return sp2B;
}
