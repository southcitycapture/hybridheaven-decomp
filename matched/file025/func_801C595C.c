#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_801C595C func_801C595C_decl
#define func_801C6294 LP(fA, __LINE__)
#define func_801C6CC4 LP(fB, __LINE__)
#define func_801C7364 LP(fC, __LINE__)
#include "context.h"
#undef func_801C595C
#undef func_801C6294
#undef func_801C6CC4
#undef func_801C7364

extern s32 D_801DD16C[];
extern s32 D_801DD178[];
extern s32 D_801DD184[];

typedef struct func_801C595C_Struct {
    u8 pad[0xA8];
    u8 unkA8;
    u8 unkA9;
    u8 unkAA;
    u8 padAB[5];
    u16 unkB0;
} func_801C595C_Struct;

#define STEP(id, tbl)                                                     \
    idx = arg0->unkB0++ % 3U;                                             \
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, id, tbl[idx]);             \
    if (arg0->unkB0 >= 4) {                                               \
        arg0->unkB0 = 0;                                                  \
        if (++arg0->unkA9 >= arg0->unkAA) {                               \
            func_80005700(arg0);                                          \
        }                                                                 \
    }

void func_801C595C(func_801C595C_Struct *arg0, struct func_801C2E9C_Struct **arg1) {
    u32 count;
    u32 mode;
    u32 idx;

    mode = arg0->unkA8;
    if (mode != 0) {
        if (mode == 1) goto mode1;
        if (mode != 2) goto done;
        goto mode2;
    }
    STEP(0x43C, D_801DD16C);
    return;
mode1:
    STEP(0x43C, D_801DD178);
    return;
mode2:
    STEP(0x43D, D_801DD184);
done:
    ;
}
