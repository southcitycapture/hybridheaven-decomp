#include "context.h"

typedef struct func_80242638_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_80242638_StructInner;

typedef struct func_80242638_StructNode {
    u8 pad[0x2C];
    func_80242638_StructInner *unk2C;
} func_80242638_StructNode;

typedef struct func_80242638_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0xE0 - 6];
    func_80242638_StructNode *unkE0;
    u8 pad2[0x434 - 0xE4];
    u8 unk434;
} func_80242638_StructGlobal;

typedef struct func_80242638_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_80242638_StructArg;

extern func_80242638_StructNode *D_801BBCD0;
extern s16 func_801FD284(s16, s32, f32);
extern void func_80020718(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_80242638(func_80242638_StructArg *arg0, s32 arg1) {
    s32 count;

    count = arg0->unk3C++;
    ((func_80242638_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unk12 =
        func_801FD284(D_801BBCD0->unk2C->unk12, 0x1C00, 0.1f);
    if (count == 0x28) {
        ((func_80242638_StructGlobal *)&D_801BBBF0)->unk434 = 4;
        func_80020718(8);
    }
    if (count == 0x46) {
        ((func_80242638_StructGlobal *)&D_801BBBF0)->unk4 = 0x16;
        func_8012FE50(0x1E,
            ((func_80242638_StructGlobal *)&D_801BBBF0)->unk4,
            6, 1, 0);
    }
}
