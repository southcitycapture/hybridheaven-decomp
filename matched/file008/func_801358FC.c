#include "context.h"

typedef struct func_801358FC_Sub {
    u8 pad0[0x12];
    s16 unk12;
} func_801358FC_Sub;

typedef struct func_801358FC_Node {
    u8 pad0[0x30];
    func_801358FC_Sub *unk30;
} func_801358FC_Node;

typedef struct func_801358FC_Inner {
    u8 pad0[0x18];
    u32 unk18;
} func_801358FC_Inner;

typedef struct func_801358FC_Obj {
    u8 pad0[0x38];
    func_801358FC_Inner *unk38;
} func_801358FC_Obj;

void func_801358FC(func_801358FC_Obj *arg0, func_801358FC_Node **arg1) {
    s32 temp_v0;
    func_801358FC_Sub *temp_v1;

    temp_v0 = (arg0->unk38->unk18 >> 0x10) & 0xFF;
    if (temp_v0 != 0) {
        temp_v1 = (*arg1)->unk30;
        temp_v1->unk12 = (s16) (temp_v1->unk12 + (0x2000 / temp_v0));
        temp_v1 = (*arg1)->unk30;
        temp_v1->unk12 = (s16) (temp_v1->unk12 & 0x1FFF);
    }
}
