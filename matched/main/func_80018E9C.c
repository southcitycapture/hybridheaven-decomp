#include "context.h"

typedef struct func_80018E9C_Struct {
    s32 unk0;
    s32 unk4;
} func_80018E9C_Struct;

s32 func_80019158(u16, u16);
u8 func_8001BD20(u8, u16);
void func_8001C0B0(u8, u16, u8, s32);
s32 func_8001D394(u8, u16);
extern func_80018E9C_Struct D_800441C8;
extern u8 *D_8008EE8C;
extern u8 *D_8008EE90;
extern u8 D_8008EBE7;
extern u8 D_8008EE94;
extern u8 D_8008EE95;
extern u8 D_8008EE96;
extern s16 D_8008EE98;
extern u16 D_8008EE9A;

void func_80018E9C(u16 arg0) {
    func_80018E9C_Struct sp28;

    sp28 = D_800441C8;
    D_8008EE8C[0] = (u16) D_8008EBE6;
    D_8008EE8C[1] = func_80019158(arg0, (u16) D_8008EBEA) + D_8008EE96;
    D_8008EE8C[3] = D_8008EE94;
    D_8008EE8C[4] = func_8001BD20(D_8008EBE7, arg0);
    D_8008EE8C[5] = (u16) D_8008EBEA;
    if ((u16) D_8008EBE8 != 0) {
        D_8008EE8C[2] = 0;
    } else {
        D_8008EE8C[2] = 0xFF;
    }
    D_8008EE8C[7] = D_8008EE95;
    func_8001C0B0(D_8008EE81, (u16) D_8008EE98, D_8008EBE7, func_8001D394(D_8008EBE7, arg0) & 0xFFFF);
    D_8008EE98 += D_8008EE8C[4];
    D_8008EE9A += D_8008EE8C[5];
    D_8008EE8C += 8;
    *(__unaligned func_80018E9C_Struct *) D_8008EE8C = sp28;
    D_8008EE90[1] = (u16) D_8008EBE2;
    *(u16 *) (D_8008EE90 + 4) = *(u16 *) &D_8008EBE4;
}
