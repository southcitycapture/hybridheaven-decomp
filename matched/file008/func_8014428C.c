#include "context.h"

typedef struct func_8014428C_StructHalves {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s32 pad;
} func_8014428C_StructHalves;

typedef struct func_8014428C_StructWords {
    s32 w0;
    s32 w1;
    s32 w2;
} func_8014428C_StructWords;

extern func_8014428C_StructWords D_80181528;
extern void func_8014456C(s32 a0, s16 a1, s16 a2, u8 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

void func_8014428C(u8 *arg0) {
    func_8014428C_StructHalves sp38;

    *(func_8014428C_StructWords *) &sp38 = D_80181528;
    D_801BEC52 = 6;
    func_8014456C(3, sp38.x0, sp38.y0, arg0[0], arg0[2], arg0[3], ((u16 *) arg0)[2], arg0[6], arg0[7]);
    func_80144A4C(3, sp38.x0, sp38.y0, 0x42, 0x9E);
    func_8014456C(4, sp38.x1, sp38.y1, arg0[8], arg0[0xA], arg0[0xB], ((u16 *) arg0)[6], arg0[0xE], arg0[0xF]);
    func_8014456C(5, sp38.x2, sp38.y2, arg0[0x10], arg0[0x12], arg0[0x13], ((u16 *) arg0)[10], arg0[0x16], arg0[0x17]);
}
