#include "context.h"

struct func_8012E774_Glob {
    u8 pad0[0xFE];
    u16 unkFE;
    u8 pad1[0x84];
    u16 unk184;
    u8 pad2[0x2B2];
    f32 unk438;
    f32 unk43C;
    f32 unk440;
};

struct func_8012E774_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0x42];
    u16 unk72;
    u8 pad3[0x18];
    s32 unk8C;
};

void func_8012E774(struct func_8012E774_Obj *arg0) {
    s32 a;
    s32 b;
    s32 p;

    ((struct func_8012E774_Glob *) D_801BBBF0)->unkFE = (u16) (((struct func_8012E774_Glob *) D_801BBBF0)->unkFE + 1);
    if ((arg0->unk2C & 0x8000) && (((struct func_8012E774_Glob *) D_801BBBF0)->unk184 != 0) && (arg0->unk72 & ((struct func_8012E774_Glob *) D_801BBBF0)->unk184)) {
        arg0->unk1C = arg0->unk8C;
        arg0->unk20 = arg0->unk20 | 0x800000;
        return;
    }
    p = arg0->unk24;
    if (p != 0) {
        arg0->unk1C = arg0->unk1C & 0xFF7FFFFF;
        arg0->unk20 = arg0->unk20 & 0xFF7FFFFF;
        ((struct func_8012E774_Glob *) D_801BBBF0)->unk440 = 0.0f;
        ((struct func_8012E774_Glob *) D_801BBBF0)->unk43C = ((struct func_8012E774_Glob *) D_801BBBF0)->unk440;
        ((struct func_8012E774_Glob *) D_801BBBF0)->unk438 = ((struct func_8012E774_Glob *) D_801BBBF0)->unk43C;
    }
}
