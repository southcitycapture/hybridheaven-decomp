#include "context.h"

extern f32 D_801EDD30;
extern f32 D_801EDD34;
extern f32 D_801EDD38;

typedef struct func_801E59C8_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x18 - 0x14];
    f32 unk18;
    f32 unk1C;
    u8 pad3[0x4B - 0x20];
    u8 unk4B;
} func_801E59C8_Leaf;

typedef struct func_801E59C8_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E59C8_Leaf *unk30;
} func_801E59C8_Mid;

typedef struct func_801E59C8_Obj {
    u8 pad0[0x20];
    func_801E59C8_Mid *unk20;
} func_801E59C8_Obj;

s32 func_801E59C8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x118C2F) != 0) {
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk30->unk4 = D_801EDD30;
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk30->unk8 = D_801EDD34;
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk30->unkC = D_801EDD38;
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk30->unk12 = 0x878;
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk30->unk18 = 1.0f;
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk30->unk1C = 1.0f;
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk30->unk4B = 0xFF;
        ((func_801E59C8_Obj *) D_8038D8D0)->unk20->unk22 = 1;
        func_801C1000(3, 8);
        return 0x12;
    }
    return 0x11;
}
