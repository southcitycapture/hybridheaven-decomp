#include "context.h"

typedef struct func_8012D7A8_Node {
    u8 pad[0x10];
    struct func_8012D7A8_Node *unk10;
} func_8012D7A8_Node;

typedef struct func_8012D7A8_Struct {
    u8 pad0[0x24];
    func_8012D7A8_Node *unk24;
    u8 pad1[0x4];
    s32 unk2C;
} func_8012D7A8_Struct;

extern void func_8012D40C(void *, s32);

void func_8012D7A8(func_8012D7A8_Struct *arg0) {
    s32 var_s1;
    func_8012D7A8_Node *var_s0;

    var_s1 = 0;
    if (arg0->unk2C & 2) {
        var_s0 = arg0->unk24;
        if (var_s0 != NULL) {
            do {
                func_8012D40C(arg0, var_s1 & 0xFF);
                var_s0 = var_s0->unk10;
                var_s1 = (var_s1 + 1) & 0xFF;
            } while (var_s0 != NULL);
        }
    }
}
