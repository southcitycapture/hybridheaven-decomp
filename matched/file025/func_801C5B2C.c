#include "context.h"

typedef struct func_801C5B2C_Struct {
    u8 pad0[0xA4];
    u16 unkA4;
    u16 unkA6;
} func_801C5B2C_Struct;

typedef struct func_801C5B2C_Struct5 {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wC;
    s32 w10;
} func_801C5B2C_Struct5;

extern u8 D_8005C4B0[];
extern func_801C5B2C_Struct D_800892B0;
extern func_801C5B2C_Struct5 D_801DA518;
extern s32 D_801DA514;

s32 func_801C5B2C(void) {
    func_801C5B2C_Struct5 sp1C;
    void *temp_v0;

    if (*(s32 *) (D_8005C4B0 + 0x898) == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        sp1C = D_801DA518;
        temp_v0 = func_80005670(D_8038D8CC, &sp1C);
        if (temp_v0 == NULL) {
            return 0;
        }
        *(u16 *) ((u8 *) temp_v0 + 0x90) = 0;
        D_801DA514 = 1;
        return 1;
    }
    return 0;
}
