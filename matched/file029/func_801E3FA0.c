#include "common.h"
extern void *D_801DAB14;
extern s32 D_801E625C;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern s32 func_801CE274();
s32 func_801CE284(void);
s32 func_801CE2D0(s32, s32);
void func_8038D33C(f32, f32, s32, s32, f32, f32);


struct func_801E3FA0_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801E3FA0_Node {
    u8 pad0[8];
    struct func_801E3FA0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E3FA0_Node *unk24;
    u8 pad2[4];
    struct func_801E3FA0_Vec *unk2C;
};
#define NP0 ((s32)D_801DAB14)
#define NP1 (*(struct func_801E3FA0_Node **)(NP0 + 8))
#define NP2 (*(struct func_801E3FA0_Node **)((s32)NP1 + 0x24))
#define NCH (*(struct func_801E3FA0_Vec **)((s32)NP2 + 0x2C))

s32 func_801E3FA0(s32 arg0, s32 arg1) {
    NCH->unk8 = 0.0f;
    switch (D_801E625C) {
    case 0:
        func_801CC470(0, 0x0348001F, 0, 0, 6.0f);
        D_801E625C = 1;
        break;
    case 1:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x03480020, 0, 0, 5.0f);
            D_801E625C = 2;
        }
        break;
    case 2:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x03480021, 0, 0, 5.0f);
            D_801E625C = 3;
        }
        break;
    case 3:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x01B8001B, 0, 0, 5.0f);
            D_801E625C = 4;
        }
        break;
    case 4:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x01B8001B, 0, 0x100, 2.0f);
            D_801E625C = 5;
        }
        break;
    case 5:
        if ((func_801CE2D0(0x01B8001B, 0x18) != 0) || (func_801CE2D0(0x01B8001B, 0x3C) != 0)) {
            func_8038D33C(NCH->unk4, NCH->unk8, NCH->unkC, 0x676, 1.2f, 1.0f);
        }
        break;
    }
    return 0x17;
}
