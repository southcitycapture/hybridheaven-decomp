#include "context.h"

typedef struct func_80147330_StructNode {
    u8 pad[0x10];
    struct func_80147330_StructNode *unk10;
} func_80147330_StructNode;

typedef struct func_80147330_StructArg {
    u8 pad[0x24];
    func_80147330_StructNode *unk24;
} func_80147330_StructArg;

extern u16 D_80089474[];

void func_80147330(func_80147330_StructArg *arg0) {
    func_80147330_StructNode *var_v0;
    u8 var_v1;

    var_v0 = arg0->unk24;
    var_v1 = 0;
    if ((D_80089474[1] & 0x10) && (var_v0 != NULL)) {
        do {
            var_v0 = var_v0->unk10;
            var_v1++;
        } while (var_v0 != NULL);
    }
}
