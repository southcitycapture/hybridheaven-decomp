#include "context.h"

typedef struct func_803697AC_StructTable {
    u16 values[2][3];
} func_803697AC_StructTable;

typedef struct func_803697AC_StructActor {
    u8 pad[0x36];
    u16 unk36;
} func_803697AC_StructActor;

extern void func_80020718(u16);
extern s32 func_801DFE28(void *);
extern func_803697AC_StructTable D_80387274;

void func_803697AC(func_803697AC_StructActor *arg0, s32 arg1, u8 arg2) {
    s32 padding;
    func_803697AC_StructTable table;
    u16 value;
    u8 index;

    arg2 = (s32)arg2 % 3;
    table = D_80387274;
    index = 0;
    if (func_801DFE28(arg0) == 1) {
        index = 1;
    }
    func_80020718(table.values[index][arg2]);
    value = arg0->unk36;
    if (value == 0xF6 || value == 0xF4 || value == 0xF5) {
        func_80020718(0x22E);
    }
    func_802254F8((s32)arg0, (s16)(arg2 * 10 + 5), (u8)(arg2 * 2 + 1));
}
