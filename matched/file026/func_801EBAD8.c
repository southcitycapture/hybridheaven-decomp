#include "common.h"
extern s32 D_801FD428[];
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
struct func_801E1E0C_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E1E0C_Struct1 {
    u8 pad0[0x30];
    struct func_801E1E0C_Struct2 *unk30;
};
#define ITEMS ((struct func_801E1E0C_Struct1 **)D_8038D8D0)
s32 func_801C0B8C(u64 time);

#define ITEMS ((struct func_801E1E0C_Struct1 **)D_8038D8D0)

s32 func_801EBAD8(s32 arg0, s32 arg1) {
    f32 delta;
    f32 limit;
    f32 phase_delta;
    f32 value;
    s32 i;
    s32 j;
    s32 k;
    s32 count;
    struct func_801E1E0C_Struct2 *p;
    s32 active;
    s32 one = 1;

    if (func_801C0B8C(0x01298BE0) != 0) {
        count = 0;
        limit = 364.65f;
        if (ITEMS[0]->unk30->unk4 > limit) {
            count = 1;
            ITEMS[0]->unk30->unk4 = 5120.0f;
            delta = 3.74f;
        } else {
            ITEMS[0]->unk30->unk4 += 3.74f;
            delta = 3.74f;
        }
        for (j = 1; j < 5; j++) {
            if (ITEMS[j]->unk30->unk4 > limit) {
                ITEMS[j]->unk30->unk4 = 5120.0f;
                count++;
            } else {
                ITEMS[j]->unk30->unk4 += delta;
            }
        }
        if (count >= 5) {
            for (k = 0; k < 5; k++) {
                ITEMS[k]->unk30->unk4 = 5120.0f;
            }
            return 4;
        }
    } else {
    limit = 561.0f;
    phase_delta = 3.74f;
    for (i = 0; i < 5; i++) {
        active = D_801FD428[i];
        if (active == 0) {
            if (i != 0) {
                if (ITEMS[i - 1]->unk30->unk4 - ITEMS[i]->unk30->unk4 >= 187.0f) {
                    active = D_801FD428[i] = 1;
                }
            } else {
                active = D_801FD428[i] = 1;
            }
        }
        p = ITEMS[i]->unk30;
        value = p->unk4;
        if (one == active) {
            p->unk4 = value + phase_delta;
            p = ITEMS[i]->unk30;
            value = p->unk4;
        }
        if (limit <= value) {
            p->unk4 = -374.0f;
            ITEMS[i]->unk30->unk12 = 0x1000;
        }
    }
    }
    return 3;
}
