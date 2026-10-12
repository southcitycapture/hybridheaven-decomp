#include "context.h"

struct func_80242F50_Sub {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80242F50_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80242F50_Sub *unk30;
};

struct func_80242F50_Obj {
    u8 pad0[0x10];
    struct func_80242F50_Node *unk10;
    u8 pad1[0x8];
    struct func_80242F50_Node *unk1C;
};

struct func_80242F50_Self {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    s16 unk3C;
};

extern void func_80242FD8();

void func_80242F50(struct func_80242F50_Self *arg0, struct func_80242F50_Obj *arg1) {
    struct func_80242F50_Node *temp_v1;
    void *temp_a2;

    temp_a2 = arg1;
    arg1->unk10->unk30->unk4B = (u8) (arg1->unk10->unk30->unk4B - 2);
    temp_v1 = arg1->unk10;
    if ((s32) temp_v1->unk30->unk4B < 2) {
        temp_v1->unk22 = 0;
        arg0->unk3C = 0;
        arg0->unk2C = 0x800;
        arg1->unk1C->unk22 = 1;
        func_800058DC(arg0, func_80242FD8);
    }
    func_80243CC0(arg0, temp_a2);
}
