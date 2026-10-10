#include "context.h"

typedef struct func_8038481C_Struct {
    u8 pad[0xA9];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_8038481C_Struct;

typedef struct func_8038481C_Struct2 {
    s32 *ptr;
    u8 pad[24];
} func_8038481C_Struct2;

extern s32 func_8001B204(s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5);
extern void func_80384948(void);
extern func_8038481C_Struct2 D_801842A0[];
extern u8 D_8038CB14[];

void func_8038481C(func_8038481C_Struct *arg0, s32 arg1) {
    u8 sp37;

    func_80381F40(arg0, 0x28, (s16) (((arg0->unkA9 % 5) * 0x14) + 0x5A), 0xA0, 0xA0, 0xA0, 0x17, &sp37);
    func_8001B204((arg0->unkA9 % 5) & 0xFF, 0x5C, (s16) (((arg0->unkA9 % 5) * 0x14) + 0x5D), D_8038CB14, 4, *D_801842A0[D_80240730[arg0->unkA9]].ptr);
    if ((arg0->unkA9 % 5) == 4) {
        arg0->unkB0 = 0x32;
    } else {
        arg0->unkB0 = 0xA;
    }
    func_800058DC(arg0, func_80384948);
}
