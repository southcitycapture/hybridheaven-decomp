#include "context.h"

typedef struct func_80241C88_StructInner {
    u8 pad[0x4B];
    u8 unk4B;
} func_80241C88_StructInner;

typedef struct func_80241C88_StructNode {
    u8 pad[0x30];
    func_80241C88_StructInner *unk30;
} func_80241C88_StructNode;

typedef struct func_80241C88_StructArg {
    u8 pad[0x3C];
    s16 unk3C;
} func_80241C88_StructArg;

typedef struct func_80241C88_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0xA];
} func_80241C88_StructLocal;

extern void func_80241D4C(void);

void func_80241C88(func_80241C88_StructArg *arg0, func_80241C88_StructNode **arg1) {
    u8 temp_v1;
    func_80241C88_StructInner *temp_v0;
    func_80241C88_StructLocal local;

    temp_v0 = arg1[0]->unk30;
    temp_v1 = temp_v0->unk4B;
    if (temp_v1 >= 0x11) {
        temp_v0->unk4B = temp_v1 - 0x10;
        arg1[1]->unk30->unk4B = arg1[0]->unk30->unk4B;
    } else {
        temp_v0->unk4B = 0;
        arg1[1]->unk30->unk4B = 0;
    }
    if (func_801C3044() == 0) {
        func_80020718(0x1AA);
        local.unk0 = 0x1000;
        local.unk4 = 0x04100044;
        local.unkC = 0xA;
        local.unk8 = 1.0f;
        func_801C2F0C(3, &local.unk0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80241D4C);
    }
}
