#include "context.h"
extern void func_800058DC();

typedef struct func_801C3F48_StructTable {
    s32 w[3];
} func_801C3F48_StructTable;
typedef struct func_801C3F48_StructInner {
    u8 pad[0xB];
    u8 alpha;
} func_801C3F48_StructInner;
typedef struct func_801C3F48_StructObj {
    u8 pad[0x30];
    func_801C3F48_StructInner *inner;
} func_801C3F48_StructObj;
typedef struct func_801C3F48_StructArg {
    u8 pad[0x3C];
    u16 timer;
} func_801C3F48_StructArg;
extern func_801C3F48_StructTable D_801CCAE0;
extern u8 D_801CED98[];

void func_801C3F48(func_801C3F48_StructArg *arg0, func_801C3F48_StructObj **arg1) {
    u16 alpha;
    func_801C3F48_StructTable table = D_801CCAE0;
    u8 value;

    alpha = (*arg1)->inner->alpha + 8;
    if (alpha) {}
    if (alpha >= 0x100) {
        alpha = 0xFF;
        arg0->timer = 0x50;
        func_800058DC((s32)arg0, (void *)func_801C4018, arg1);
    }
    (*arg1)->inner->alpha = alpha;
    value = ((u8 *)&table)[func_8013EA54()];
    if (value != 0) {
        func_8001B204(0, 0x7D0, 0x55, D_801CED98, 0, alpha, value);
    }
}
