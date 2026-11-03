#include "common.h"
extern u8 *D_801DAB14;
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern s32 func_801C1134(s32 a0, s32 a1);
extern s32 func_801CEE30(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);


extern f32 D_801E7730;
extern f32 D_801E7734;
extern f32 D_801E7738;
extern f32 D_801E773C;

typedef struct func_801E527C_StructPos {
    u8 pad[4];
    f32 x;
    f32 y;
    f32 z;
} func_801E527C_StructPos;

typedef struct func_801E527C_StructNode {
    u8 pad[8];
    struct func_801E527C_StructNode *unk8;
    u8 padC[0x18];
    struct func_801E527C_StructNode *unk24;
    u8 pad28[4];
    func_801E527C_StructPos *unk2C;
} func_801E527C_StructNode;

#define NODE (*(func_801E527C_StructNode **)&D_801DAB14)

s32 func_801E527C(s32 arg0, s32 arg1) {
    f32 t;
    func_801E527C_StructPos *pos;

    if (func_801C1088(4, 1, 0x4B) != 0) {
        func_801C10D8(4, 1);
        return 0x18;
    }
    t = (f32)(u32)func_801C1134(4, 1) / 75.0f;
    NODE->unk8->unk8->unk24->unk2C->x = D_801E7730 * t + D_801E7734;
    NODE->unk8->unk8->unk24->unk2C->z = 34.0f * t + D_801E7738;
    if (func_801CEE30(0x01B8001B, 0x18) != 0 || func_801CEE30(0x01B8001B, 0x3C) != 0) {
        pos = NODE->unk8->unk8->unk24->unk2C;
        func_8038D33C(pos->x, pos->y, *(s32 *)&pos->z, 0x67D, D_801E773C, 1.0f);
    }
    return 0x17;
}
