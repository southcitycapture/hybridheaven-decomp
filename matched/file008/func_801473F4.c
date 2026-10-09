#include "context.h"
extern s32 D_801BEC98[];

struct func_801473F4_Struct0;
struct func_801473F4_Struct1;
struct func_801473F4_Struct2;
struct func_801473F4_Struct3;

struct func_801473F4_Struct0 {
    u8 pad0[0x24];
    struct func_801473F4_Struct1 *unk24;
    u8 pad1[0x34];
    struct func_801473F4_Struct3 *unk5C;
};

struct func_801473F4_Struct3 {
    u8 pad0[0x4];
    s32 *unk4;
};

struct func_801473F4_Struct1 {
    u8 pad0[0x10];
    struct func_801473F4_Struct1 *unk10;
    u8 pad1[0x18];
    struct func_801473F4_Struct2 *unk2C;
};

struct func_801473F4_Struct2 {
    u8 pad0[0x24];
    s32 unk24;
};

void func_801473F4(struct func_801473F4_Struct0 *arg0) {
    struct func_801473F4_Struct3 *var_v0;
    s32 *var_v1;
    u8 var_a2;
    struct func_801473F4_Struct1 *var_a1;

    var_v0 = arg0->unk5C;
    var_v1 = var_v0->unk4;
    var_a1 = arg0->unk24;
    var_a2 = 0;
    if (var_a1 != NULL) {
        do {
            if (var_v1[var_a2] >= 0) {
                D_801BEC98[var_a2] = var_a1->unk2C->unk24;
            }
            var_a1 = var_a1->unk10;
            var_a2++;
        } while (var_a1 != NULL);
    }
}
