#include "context.h"

struct func_801E3FB4_Sub;
extern struct func_801E3FB4_Sub D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

typedef struct func_801E3B24_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E3B24_Inner;

typedef struct func_801E3B24_Node2 {
    u8 pad0[0x2C];
    func_801E3B24_Inner *unk2C;
} func_801E3B24_Node2;

typedef struct func_801E3B24_Node {
    u8 pad0[8];
    struct func_801E3B24_Node *unk8;
    u8 pad1[0x18];
    func_801E3B24_Node2 *unk24;
} func_801E3B24_Node;

typedef struct func_801E3B24_Sub {
    func_801E3B24_Node *unk0;
} func_801E3B24_Sub;

s32 func_801E3B24(s32 arg0, s32 arg1) {
    func_801E3B24_Node2 *temp_v0;

    temp_v0 = ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24->unk2C->unkC = -96.0f;
        ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 3;
    }
    return 2;
}
