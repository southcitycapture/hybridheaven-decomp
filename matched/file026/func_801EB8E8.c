#include "common.h"
typedef struct func_801F6914_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801F6914_Struct3;
typedef struct func_801F6914_Struct2 {
    u8 pad0[0x30];
    func_801F6914_Struct3 *unk30;
} func_801F6914_Struct2;
typedef struct func_801F6914_Struct1 {
    u8 pad0[0xC];
    func_801F6914_Struct2 *unkC;
} func_801F6914_Struct1;
extern struct func_801F6914_Struct1 *D_8038D8D0;


extern f32 D_801FC830;
extern s32 D_801FD428[];
extern s32 func_801C0B8C(u64 time);

struct func_801EB8E8_StructLeaf {
    u8 pad[4];
    f32 x;
    u8 pad8[0xA];
    s16 flag;
};
struct func_801EB8E8_StructNode {
    u8 pad[0x30];
    struct func_801EB8E8_StructLeaf *leaf;
};
#define ITEMS ((struct func_801EB8E8_StructNode **)D_8038D8D0)

s32 func_801EB8E8(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;
    f32 step;

    if (func_801C0B8C(0x53EC60) != 0) {
        for (j = 0; j < 5; j++) {
            ITEMS[j]->leaf->x = -374.0f;
            D_801FD428[j] = 0;
        }
        ITEMS[0]->leaf->flag = 0;
        return 3;
    }
    for (i = 0; i < 5; i++) {
        if (ITEMS[i]->leaf->x >= 374.0f) {
            ITEMS[i]->leaf->x = -374.0f;
        }
        ITEMS[i]->leaf->x += 3.74f;
    }
    return 2;
}
