#include "context.h"
struct func_8001BFE4_StructA { u16 d[6]; };
struct func_8001BFE4_StructB { u8 d[6]; };
extern struct func_8001BFE4_StructB D_80044624;
extern struct func_8001BFE4_StructA D_8004462C;
extern u8 D_8008DC18;
extern u8 D_801077E0[];
void func_80001FE8(s32, u8 *, u8);
s32 func_8000511C(u16);

void func_8001BFE4(u8 arg0, u16 arg1) {
    s32 pad;
    struct func_8001BFE4_StructB sp2C;
    struct func_8001BFE4_StructA sp20;
    u32 i;

    i = 0x10;
    sp2C = D_80044624;
    sp20 = D_8004462C;
    D_8008DC18 = 1;
    func_80001FE8(func_8000511C(sp20.d[arg0]) + sp2C.d[arg0] * (arg1 >> 1), D_801077E0, sp2C.d[arg0]);
    for (; i--;) {
    }
    D_8008DC18 = 0;
}
