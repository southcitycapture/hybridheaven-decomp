#include "common.h"

extern u8 *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
typedef struct func_801E78D8_Detail {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E78D8_Detail;
typedef struct func_801E78D8_Holder {
    u8 pad0[0x2C];
    func_801E78D8_Detail *unk2C;
} func_801E78D8_Holder;
typedef struct func_801E78D8_Node {
    u8 pad0[8];
    struct func_801E78D8_Node *unk8;
    u8 pad1[0x18];
    func_801E78D8_Holder *unk24;
} func_801E78D8_Node;
s32 func_801E78D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = (-3.4000001f);
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 14.6999998f;
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x01B8001A, 0, 0, 1.5f);
        return 0xA;
    }
    return 9;
}
