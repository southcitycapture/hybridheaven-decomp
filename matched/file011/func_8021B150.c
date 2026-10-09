#include "context.h"
extern s8 D_801BCC21;

typedef struct func_8021B150_Struct {
    u8 pad0[0x16];
    u8 unk16;
    u8 pad1[0x24 - 0x17];
    u32 unk24;
} func_8021B150_Struct;

extern func_8021B150_Struct D_8017DD7C;

void func_8021B150(s32 arg0, s32 arg1) {
    if ((D_8017DD7C.unk16 != 0 || (u8) D_801BCC21 == 5 || (u8) D_801BCC21 == 6 || (u8) D_801BCC21 == 7) && D_8017DD7C.unk24 < 0xFFFFFFFFU) {
        D_8017DD7C.unk24 = D_8017DD7C.unk24 + 1;
    }
}
