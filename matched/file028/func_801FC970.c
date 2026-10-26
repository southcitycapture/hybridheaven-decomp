#include "common.h"
typedef struct func_801FCB44_Struct {
    u8 pad[0x18];
    u8 *unk18;
} func_801FCB44_Struct;
extern struct func_801FCB44_Struct *D_8038D8D0;
extern s32 func_801C0B8C(u64);


extern f32 D_80208DB4;

struct func_801FC970_StructLeaf {
    u8 pad[0x10];
    s16 unk10;
};
struct func_801FC970_StructMid {
    u8 pad[0x30];
    struct func_801FC970_StructLeaf *unk30;
};
struct func_801FC970_StructRoot {
    u8 pad[0x10];
    struct func_801FC970_StructMid *unk10;
};

s32 func_801FC970(s32 arg0, s32 arg1) {
    struct func_801FC970_StructLeaf *temp_v0;

    if (func_801C0B8C(0xA4CB80) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x7704C0) != 0) {
        temp_v0 = ((struct func_801FC970_StructRoot *)D_8038D8D0)->unk10->unk30;
        temp_v0->unk10 += (s16)((2048.0f * D_80208DB4) / 90.0f);
    }
    return 2;
}
