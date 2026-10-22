#include "context.h"
extern void func_80146208(s32, s8 *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
typedef struct func_801465A0_StructO { u8 pad[0x22]; u8 unk22; } func_801465A0_StructO;
typedef struct func_801465A0_StructA { u8 pad[0xC]; func_801465A0_StructO *unkC[1]; } func_801465A0_StructA;
void func_801465A0(s32 arg0, s32 arg1, u16 arg2, s16 arg3, s16 arg4) {
    u8 i;
    s8 sp76;
    u8 v1;
    u8 flag;
    s32 k;
    u8 digits[4];

    sp76 = 0;
    flag = 0;
    v1 = D_80006214((void *)arg0);
    for (i = 0; i < 4; i++) {
        digits[i] = arg2 % 10;
        func_80146208(arg0, &sp76, 0x26, arg3 - i * 7, arg4, 8, 8, digits[i] * 8, 0, 0xFF, 0x209, 3);
        arg2 /= 10;
    }
    for (i = 0; i < 3; i++) {
        if (digits[3 - i] == 0 && flag == 0) {
            ((func_801465A0_StructA *)arg1)->unkC[v1 - i]->unk22 = 0;
        } else {
            flag = 1;
        }
    }
}
