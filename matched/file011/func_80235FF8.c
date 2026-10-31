#include "common.h"
extern void (*D_80216D10[])(void *, s32);
extern void func_80006088(s32);
s32 func_802345B0(s32 arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5);


typedef struct func_80235FF8_StructP { s16 x; s16 y; s16 w; s16 h; } func_80235FF8_P;
typedef struct func_80235FF8_StructS { u8 pad[0x10]; s32 unk10; u8 pad2[0x1C]; func_80235FF8_P *unk30; } func_80235FF8_S;
typedef struct func_80235FF8_StructA { u8 pad[0xAC]; u16 unkAC; } func_80235FF8_A;
extern func_80235FF8_S *D_80240874;
extern func_80235FF8_S *D_80240878;
extern func_80235FF8_S *D_8024087C;
extern void func_80147174(s32);
extern func_80235FF8_S *D_8023448C(void *, s32 *, s32, s16, s32, s32, s32);

void func_80235FF8(a0, arg1, arg2)
    void *a0;
    s32 *arg1;
    u8 arg2;
{
    s16 sy, sx;
    s32 pad1, pad2;
    s16 a, b;

    sx = D_80240874->unk30->x + D_80240874->unk30->w / 2 - 0xA0;
    sy = D_80240874->unk30->y + D_80240874->unk30->h / 2 - 0x82;
    a = (-0x50 - sx) / 3;
    b = (-0x41 - sy) / 3;
    D_80240874->unk30->x = D_80240874->unk30->x + a;
    D_80240878->unk30->x = D_80240874->unk30->x;
    D_80240874->unk30->y = D_80240874->unk30->y + b;
    sx += (sy += b, a);
    D_80240878->unk30->y = D_80240874->unk30->y;
    func_80006088((s32)D_80240878);
    func_80006088((s32)D_80240874);
    if (((func_80235FF8_A *)a0)->unkAC % 2 == 1) {
        if ((a < 0 ? -a : a) >= 3 || (b < 0 ? -b : b) >= 3) {
            D_8023448C(a0, arg1, 1, sx, sy, 1, 3);
            func_802345B0((s32)a0, arg1, arg2, sx, sy, 1);
        }
    }
    if (D_8024087C->unk10 != 0) {
        func_80147174(D_8024087C->unk10);
    }
    D_80240874 = D_8023448C(a0, arg1, 1, sx, sy, 1, 3);
    D_80240878 = (func_80235FF8_S *)func_802345B0((s32)a0, arg1, arg2, sx, sy, 1);
}
