#include "context.h"
extern void func_8014456C(s32 a0, s16 a1, s16 a2, u8 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

typedef struct func_801439C0_StructE {
    u8 p0;
    u8 a;
    u8 p2;
    u8 b;
    s16 c;
    u8 pad[4];
} func_801439C0_StructE;
typedef struct func_801439C0_Struct {
    func_801439C0_StructE e[2];
} func_801439C0_Struct;
extern func_801439C0_Struct D_801814CC;

void func_801439C0(u8 arg0, u8 arg1, u8 *arg2) {
    func_801439C0_Struct sp;

    sp = D_801814CC;
    if (arg1 == 1) {
        func_8014456C(sp.e[arg0 & 1].a, sp.e[arg0 & 1].c, 0x48, arg2[0], arg2[2], arg2[3], *(u16 *)(arg2 + 4), arg2[6], arg2[7]);
        func_8014456C(sp.e[arg0 & 1].b, sp.e[arg0 & 1].c, 0x76, arg2[8], arg2[10], arg2[11], *(u16 *)(arg2 + 12), arg2[14], arg2[15]);
    }
}
