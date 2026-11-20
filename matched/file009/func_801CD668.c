#include "common.h"
u8 func_801CD500(u8 arg0, u8 arg1, f32 arg2);


typedef struct func_801CD668_StructIn {
    u8 pad0[0x78];
    u8 unk78, unk79, unk7A, unk7B;
    u8 unk7C, unk7D, unk7E, unk7F;
    u8 pad80[0x14];
    u8 unk94;
} func_801CD668_StructIn;

typedef struct func_801CD668_StructOut {
    u8 pad0[0x48];
    u8 unk48, unk49, unk4A, unk4B;
} func_801CD668_StructOut;

typedef struct func_801CD668_StructEntry {
    u8 pad0[0x30];
    func_801CD668_StructOut *unk30;
} func_801CD668_StructEntry;

typedef struct func_801CD668_StructIterator {
    u8 alpha;
    u8 blue;
    u8 green;
    u8 red;
    s32 index;
    func_801CD668_StructEntry **entry;
} func_801CD668_StructIterator;

void func_801CD668(void *input, void **entries, f32 arg2) {
    func_801CD668_StructIterator iter;
    func_801CD668_StructOut *temp_v1;

    iter.red = func_801CD500(((func_801CD668_StructIn *)input)->unk78, ((func_801CD668_StructIn *)input)->unk7C, arg2);
    iter.green = func_801CD500(((func_801CD668_StructIn *)input)->unk79, ((func_801CD668_StructIn *)input)->unk7D, arg2);
    iter.blue = func_801CD500(((func_801CD668_StructIn *)input)->unk7A, ((func_801CD668_StructIn *)input)->unk7E, arg2);
    iter.alpha = func_801CD500(((func_801CD668_StructIn *)input)->unk7B, ((func_801CD668_StructIn *)input)->unk7F, arg2);
    iter.index = 0;
    if ((s32)((func_801CD668_StructIn *)input)->unk94 > 0) {
        iter.entry = (func_801CD668_StructEntry **)entries;
        do {
            temp_v1 = (*iter.entry)->unk30;
            iter.index += 1;
            iter.entry += 1;
            temp_v1->unk48 = iter.red;
            temp_v1->unk49 = iter.green;
            temp_v1->unk4A = iter.blue;
            temp_v1->unk4B = iter.alpha;
        } while (iter.index < (s32)((func_801CD668_StructIn *)input)->unk94);
    }
}
