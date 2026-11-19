#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define LQ(p,l) p##_##l
#define LP(p,l) LQ(p,l)
extern void func_80005700();
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
struct func_801C2E9C_Struct {
    u8 pad0[0x30];
    u8 *unk30;
};


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

void func_801C595C(func_801C595C_Struct *arg0, struct func_801C2E9C_Struct **arg1) {
    u32 idx;

    switch (arg0->unkA8) {
    case 0:
        idx = arg0->unkB0++ % 3U;
        func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0x43C, D_801DD16C[idx]);
        if (arg0->unkB0 >= 4) {
            arg0->unkB0 = 0;
            if (++arg0->unkA9 >= arg0->unkAA) {
                func_80005700(arg0);
            }
        }
        break;
    case 1:
        idx = arg0->unkB0++ % 3U;
        func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0x43C, D_801DD178[idx]);
        if (arg0->unkB0 >= 4) {
            arg0->unkB0 = 0;
            if (++arg0->unkA9 >= arg0->unkAA) {
                func_80005700(arg0);
            }
        }
        break;
    case 2:
        idx = arg0->unkB0++ % 3U;
        func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0x43D, D_801DD184[idx]);
        if (arg0->unkB0 >= 4) {
            arg0->unkB0 = 0;
            if (++arg0->unkA9 >= arg0->unkAA) {
                func_80005700(arg0);
            }
        }
        break;
    default:
        break;
    }
}
