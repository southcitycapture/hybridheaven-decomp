#include "context.h"

typedef struct func_8037D9BC_Struct {
    s32 unk0[4];
} func_8037D9BC_Struct;

extern void func_8037D5C4(s32, s32, u16, s32, s32, s32, s32, s32);
extern func_8037D9BC_Struct D_80388C88;

void func_8037D9BC(s32 arg0, s32 arg1) {
    s32 var_s0;
    func_8037D9BC_Struct sp44;
    s32 var_s1;

    sp44 = D_80388C88;
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_8037D5C4(arg0, arg1, *(u16 *) sp44.unk0[var_s0], 0x7C, (var_s1 * 0x10) + 0x86, 1, 0, 0);
        var_s0 = (var_s0 + 1) & 0xFF;
        var_s1 = var_s0;
    } while (var_s0 < 4);
}
