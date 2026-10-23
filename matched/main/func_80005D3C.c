#include "context.h"

struct func_80005D3C_Struct {
    u8 pad[0xB4];
    u16 unkB4;
    u8 padB6[2];
    s32 unkB8;
    u8 padBC[4];
    u8 *unkC0;
};

s32 func_80005D3C(void) {
    struct func_80005D3C_Struct *g = (struct func_80005D3C_Struct *)&D_800892B0;
    u8 *p = g->unkC0;
    s32 a = g->unkB8;
    s32 i = 0;
    s32 n = g->unkB4;

    if (n <= 0) goto end;
loop:
    if (*p != 0) {
        p++;
        a += 0xB8;
    } else {
        *p = 1;
        return a;
    }
    if (++i < n) goto loop;
end:
    return 0;
}
