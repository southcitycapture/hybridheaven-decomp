#include "context.h"

extern void *D_8008DA88;

struct func_80006214_Struct {
    u8 pad0[0x10];
    struct func_80006214_Struct *unk10;
};

s32 func_80006214(struct func_80006214_Struct *arg0) {
    s32 var_v1;
    struct func_80006214_Struct *var_v0;

    var_v0 = *(struct func_80006214_Struct **)((u8 *)arg0 + 0x24);
    var_v1 = 0;
    if (var_v0 != NULL) {
        void **var_a0 = &D_8008DA88;
        do {
            *var_a0 = var_v0;
            var_v0 = var_v0->unk10;
            var_v1 += 1;
            var_a0 += 1;
        } while (var_v0 != NULL);
    }
    return var_v1;
}
