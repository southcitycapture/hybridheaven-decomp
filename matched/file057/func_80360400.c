#include "context.h"

typedef struct func_80360400_Struct {
    u8 pad[0x30];
    s32 unk30;
} func_80360400_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void *func_8035FFA8(void *arg0);

void func_80360400(struct func_80360588_Struct *arg0, s32 arg1, s32 arg2) {
    func_80360400_Struct *sp1C;
    u8 var_a3;

    if (arg1 == D_801BBCCC) {
        sp1C = (func_80360400_Struct *) D_801BC03C;
    } else {
        sp1C = (func_80360400_Struct *) D_801BC3D8;
    }
    var_a3 = ((u8 *) func_8035FFA8(sp1C))[1];
    if ((((u32) sp1C->unk30 << 9) >> 0x1E) == 3 && (s32) var_a3 < 4) {
        var_a3 = (var_a3 ^ 1) & 0xFF;
    }
    func_80360394((void *) arg0, (func_80360394_Struct *) arg1, arg2, var_a3);
}
